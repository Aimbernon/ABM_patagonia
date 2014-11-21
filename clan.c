#include <math.h>
#include "commons.h"
#include "header.h"
#include "clan_agent_header.h"


/* posting individual information*/
int clan_Information()
{
	int cal, nmem, i, ID=get_cID(), x=get_x(), y=get_y();

	for ( i = 0; i < 100; i++) MNEEDS.id_list[i] = MNEEDS.cal_list[i] = -1;

	i = 0;
	nmem = 0;
	START_INFORMATION_MESSAGE_LOOP
		MNEEDS.id_list[i] = information_message->id;
		MNEEDS.cal_list[i] = information_message->cal;
		MNEEDS.age[i] = information_message->age;
		cal += information_message->cal;
		//TAKENID[information_message->id] =1;
		i++;
		if ((information_message->age > 12) && (information_message->age < 45) && !(information_message->pregnant)) nmem++;
	FINISH_INFORMATION_MESSAGE_LOOP
	set_cal_need(cal);
        add_clan_info_message(x, y, ID, nmem, cal + get_tcalories() - get_cal_stored() );
        return 0;
}

/* extracting calories */
int clan_extract_calories()
{
        int age = get_age();
	int cal = 0;

        START_CLANGETCALORIES_MESSAGE_LOOP
		cal+=clangetcalories_message->clcalories;
	FINISH_CLANGETCALORIES_MESSAGE_LOOP

        set_cal_got(cal);

	return 0;
}

/*distributing calories among the individuals*/
int distribute_calories()
{
	int i, need = get_cal_need(), got = get_cal_got(), extra = get_tcalories();

	/* The list of calory needs is traversed */
	for( i = 0; MNEEDS.id_list[i] != -1; i++ ){
		/*If we've got enough calories then we give the individual what he/she needs*/
		if (MNEEDS.cal_list[i] < got){
			add_indgetcalories_message( MNEEDS.cal_list[i], MNEEDS.id_list[i]);
			got -= MNEEDS.cal_list[i];
		}
		/*If all gotten calories have been distributed, but the clan have some extra ones, then
		the individual gets all its needs from what is leaft of the gotten plus the rest from the
		extra*/
		else if (MNEEDS.cal_list[i] < (got + extra)){ 
                        add_indgetcalories_message( MNEEDS.cal_list[i], MNEEDS.id_list[i]);
			extra = extra + got - MNEEDS.cal_list[i];
                        got = 0;
                }
		/*If there are still some extra calories but not enough for the individual needs, then 
		we cover them partially*/ 
		else if (extra > 0){
                        add_indgetcalories_message( MNEEDS.cal_list[i], MNEEDS.id_list[i]);
                        extra = 0;
		}
	}
	/*If there are some undistributed calories they will go to the repository, if not everything is
	set to 0*/
	set_tcalories( extra + got );
	set_cal_got( 0 );
	return 0;
}

int new_leader()
{
	int alive = 0, best_candidate = -1;

        START_LEADER_MESSAGE_LOOP
		if ( leader_message->leader ) alive = 1;
		else if ( leader_message->sex == 1 ){ 
			if (( leader_message-> age > 20 ) && ( leader_message->age < 25 ))
				best_candidate = leader_message->id;
			else if ((best_candidate == -1) && (leader_message->age >= 25))
				best_candidate = leader_message->id;
		}
        FINISH_LEADER_MESSAGE_LOOP

	if ( !alive && (best_candidate != -1) ) set_leaderID( best_candidate );
//We need to keep some more information to decide if the best candidate is better than the current leader
//We need to decide what happens if there is no leader and no candidate!!

	return 0;
}
// new -----------------------------------------------------
/* Each clan gets information about their individuals marriageable age. 
This information is stored in IFREE variable */
int marriable_indv ()
{
	int male=0,female=0,j,i;
	START_ANCESTOR_MESSAGE_LOOP
		if (ancestor_message->sex == 0){ //case male
			IFREE.male_list[male] = ancestor_message->indvID;
			i=0;	
			for (j=male*NANCESTORS;j<(NANCESTORS*male)+ NANCESTORS;j++){
				IFREE.mancestor_list[j] = ancestor_message->ancest[i];
				IFREE.mancestorClan_list[j] = ancestor_message->ancestClan[i];
				i++;
			}
			male++;
		}
		else {
			if (ancestor_message->sex == 1){// case female
				IFREE.female_list[female] = ancestor_message->indvID;	
				i=0;
				for (j=female*NANCESTORS;j<(NANCESTORS*female)+ NANCESTORS;j++){
					IFREE.fancestor_list[j] = ancestor_message->ancest[i];
					IFREE.fancestorClan_list[j] = ancestor_message->ancestClan[i];
					i++;
				}
				female++;
			}
		}
	FINISH_ANCESTOR_MESSAGE_LOOP
	IFREE.numMale = male;
	IFREE.numFemale = female;
	return 0;
}
/*each clan seeks its females and sends it to others clans */
int send_girls ()
{
	if (IFREE.numFemale !=0)
		add_freeGirls_message (IFREE.female_list,IFREE.numFemale,get_y(),get_x(),get_cID(),IFREE.fancestor_list,IFREE.fancestorClan_list);
	return 0;
}
/*recive las chicas disponibles para emparejarse de otros clanes y a partir de la compatibilidad
se decide hacer propuestas de emparejamiento*/
int match ()
{
	int_array chicas,ancestors,ancestorsClan;
	int num_chicas[100], clanes[100],mensajes=0,i,z;
	init_int_array(&chicas);
	init_int_array(&ancestors);
	init_int_array(&ancestorsClan);
	//reciviendo informacion de las chicas de otros clanes
	START_FREEGIRLS_MESSAGE_LOOP
	if (freeGirls_message->clanID != get_cID()){
		for (i=0;i<100;i++){
			if (freeGirls_message->girls[i]!=0){
				add_int(&chicas,freeGirls_message->girls[i]);
				for (z=i*NANCESTORS;z<(NANCESTORS*i)+NANCESTORS;z++){
					add_int(&ancestors,freeGirls_message->lancestors[z]);
					add_int(&ancestorsClan,freeGirls_message->lancestorsClan[z]);
				}
			}
		}
		num_chicas[mensajes] = freeGirls_message->num_chicas;
		clanes [mensajes] = freeGirls_message->clanID;
		mensajes++;
	}
	FINISH_FREEGIRLS_MESSAGE_LOOP
	if (mensajes==0)
		return 0;

	//proponer emparejamiento
	int emparejado,familia,man=0,g=0,ag=0,am=0,prop[100],count=0,clan,chica,id_man[100];
	// por cada chico libre de mi clan miro si es compatible con cada chica, la primera chica
	// compatible es la elegida
	while (man<IFREE.numMale){
		emparejado =0;
		g=0;
		clan =0;
		while (clan< mensajes && emparejado ==0){
			chica=0;
			count=0;
			while (chica <num_chicas[clan] && emparejado ==0){
				familia =0;
				ag=0;
				// comprobacion de si son familiares
				while (ag< NANCESTORS && familia ==0){
					am=0;
					while (am < NANCESTORS && familia ==0){
						if (IFREE.mancestor_list[(man*NANCESTORS)+am] == ancestors.array[(g*NANCESTORS)+ag] && IFREE.mancestorClan_list[(man*NANCESTORS)+am] == ancestorsClan.array[(g*NANCESTORS)+ag])
							familia =1;
						am++;
					}
					ag++;
				}
				if (familia == 0){
					emparejado =1;
					prop[count]=chicas.array[g];
					id_man[count]=IFREE.male_list[man];
					remove_int(&chicas,g);
					count++;
				}
				g++;
				chica++;
			}
			// enviar las propuesta a los clanes que pertenecen las chicas elegidas
			if (count !=0)
				add_propuesta_message (prop,id_man,get_cID(),clanes[clan],count);
			clan++;
		}
		man++;
	}
	free_int_array(&chicas);
	free_int_array(&ancestors);
	free_int_array(&ancestorsClan);
						
	return 0;
}
/*Se asigna a cada clan la chica/s que han pedido, en caso de peticion doble, la preferencia la
tiene el clan cuya peticion llegara antes */
int aceptar_prop ()
{
	int i,encontrado,j;
	int_array peticiones,pretendientes,clanes;

	init_int_array(&peticiones);
	init_int_array(&clanes);
	init_int_array(&pretendientes);
	START_PROPUESTA_MESSAGE_LOOP
	for (i=0;i<propuesta_message->count;i++){
		encontrado =0;
		j=0;
		while (j<peticiones.size && encontrado ==0){
			if (propuesta_message->id_list[i] == peticiones.array[j])
				encontrado =1;
			j++;
		}
		if (encontrado ==0){
			add_int(&peticiones,propuesta_message->id_list[i]);
			add_int (&pretendientes,propuesta_message->id_man[i]);
			add_int (&clanes,propuesta_message->oclanID);
		}
	}
	FINISH_PROPUESTA_MESSAGE_LOOP
	j=0;
	for (i=0;i<peticiones.size;i++){
		add_confirProp_message(peticiones.array[i],clanes.array[i],pretendientes.array[i],get_cID());
	}
	//free memory
	free_int_array(&peticiones);
	free_int_array(&clanes);
	free_int_array(&pretendientes);
	return 0;
}
int recive_conf ()
{
	int wife, husband, clanID,nextID;
	nextID= get_indexID();
	START_CONFIRPROP_MESSAGE_LOOP
		wife = confirProp_message->girlID;
		husband = confirProp_message->manID;
		clanID = confirProp_message->oclanID;
		add_marriage_message(wife,get_cID(),husband,clanID,nextID);
		nextID ++;
	FINISH_CONFIRPROP_MESSAGE_LOOP
	set_indexID(nextID);
	return 0;
}
// busca un nuevo identificador libre y se lo envia al nuevo individuo
int repartir_id ()
{
	int id_free =0,i=0, peticiones=0;
	int_array solicitantesID;
	init_int_array (&solicitantesID);
	START_PETICIONID_MESSAGE_LOOP
		add_int (&solicitantesID,peticionID_message->id);
		peticiones ++;
	FINISH_PETICIONID_MESSAGE_LOOP
	if (peticiones ==0)
		return 0;
	id_free = get_indexID();
	for (i=0;i<solicitantesID.size;i++){		
		add_respuestaID_message (id_free,solicitantesID.array[i],get_cID());
		id_free ++;
	}
	set_indexID(id_free);
	free_int_array(&solicitantesID);
	return 0;	
}
//-----------------------------------------------------------

