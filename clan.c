#include <math.h>
#include <time.h>
#include "commons.h"
#include "header.h"
#include "clan_agent_header.h"

struct guanacosAround {
	int x;
	int y;
	int guanacos;
};

/* posting individual information*/
int clan_Information()
{
	int cal, nmem, i, x=get_x(), y=get_y(), ID=get_cID();

	for ( i = 0; i < 100; i++) MNEEDS.id_list[i] = MNEEDS.cal_list[i] = -1;

	i = 0;
	nmem = 0;
	START_INFORMATION_MESSAGE_LOOP
		MNEEDS.id_list[i] = information_message->id;
		MNEEDS.cal_list[i] = information_message->cal;
		MNEEDS.age[i] = information_message->age;
		cal += information_message->cal;
		i++;
		if ((information_message->age > 12) && (information_message->age < 45) && !(information_message->pregnant)) nmem++;
	FINISH_INFORMATION_MESSAGE_LOOP
	set_cal_need(cal);
	set_members(i);
    add_clan_info_message(x, y, ID, nmem, cal + get_tcalories() - get_cal_stored() );

    return 0;
}

/* extracting calories */
int clan_extract_calories()
{
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

	/* if clan not have enough calories, clan seek to cooperation */
	if (need > ( got + extra) && get_hunting () == 0)
	{
			set_cooperation(1);
	}
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
		add_freeGirls_message (IFREE.female_list,IFREE.numFemale,get_y(),get_x(),get_cID(),IFREE.fancestor_list,IFREE.fancestorClan_list,get_linguistics());
	return 0;
}
/*recive las chicas disponibles para emparejarse de otros clanes y a partir de la compatibilidad
se decide hacer propuestas de emparejamiento*/
int match ()
{
	int_array chicas,ancestors,ancestorsClan,clanes;
	int num_chicas[100],mensajes=0,i,z,equal =0;
	init_int_array(&chicas);
	init_int_array(&ancestors);
	init_int_array(&ancestorsClan);
	init_int_array(&clanes);
	//reciviendo informacion de las chicas de otros clanes
	START_FREEGIRLS_MESSAGE_LOOP
	if (freeGirls_message->clanID != get_cID()){
		//mirar si se "entienden" los dos clanes
		for (i=0;i<100;i++)
			if (get_linguistics()[i] == freeGirls_message->linguistic[i])
				equal ++;
		if (equal > LANG_THRESHOLD)
		{
			for (i=0;i<100;i++){
				if (freeGirls_message->girls[i]!=0){
					add_int(&chicas,freeGirls_message->girls[i]);
					add_int(&clanes,freeGirls_message->clanID);
					for (z=i*NANCESTORS;z<(NANCESTORS*i)+NANCESTORS;z++){
						add_int(&ancestors,freeGirls_message->lancestors[z]);
						add_int(&ancestorsClan,freeGirls_message->lancestorsClan[z]);
					}
				}
			}
			num_chicas[mensajes] = freeGirls_message->num_chicas;
			mensajes++;
		}
	}
	FINISH_FREEGIRLS_MESSAGE_LOOP
	if (mensajes==0)
		return 0;

	//proponer emparejamiento
	int emparejado,familia,iman=0,ichica=0,ag=0,am=0;
	// por cada chico libre de mi clan miro si es compatible con cada chica, la primera chica
	// compatible es la elegida
	while (iman<IFREE.numMale && chicas.size >0){
		emparejado =0;
		ichica =0;
		while (ichica < chicas.size && emparejado == 0){
			familia =0;
			ag=0;
			// comprobacion de si son familiares
			while (ag< NANCESTORS && familia ==0){
				am=0;
				while (am < NANCESTORS && familia ==0){
					if (IFREE.mancestor_list[(iman*NANCESTORS)+am] == ancestors.array[(ichica*NANCESTORS)+ag] 
					&& IFREE.mancestorClan_list[(iman*NANCESTORS)+am] == ancestorsClan.array[(ichica*NANCESTORS)+ag])
						familia =1;
					am++;
				}
				ag++;
			}
			//en caso de no ser familia, se formaliza la propuesta
			if (familia == 0){
				emparejado =1;
				add_propuesta_message (chicas.array[ichica],IFREE.male_list[iman],get_cID(),clanes.array[ichica]);
				remove_int(&chicas,ichica);
				remove_int (&clanes,ichica);
				for (i =0; i<NANCESTORS;i++)
					remove_int (&ancestors,(ichica*NANCESTORS)+i);
					remove_int (&ancestorsClan,(ichica*NANCESTORS)+i);
				IFREE.male_list[iman]=-1;
			}
			ichica++;
		}
		iman++;
	}
	free_int_array(&chicas);
	free_int_array(&ancestors);
	free_int_array(&ancestorsClan);
	free_int_array(&clanes);
						
	return 0;
}
//No estado: funcion que trata el buffer circular de las chicas que comparto con otros clanes
void update_record (int clanID)
{
	int i,irecord = get_irecord();
		// En el caso de que el clan no este referenciado ya en el buffer, se añade
		for (i =0; i<RECORD_SIZE; i++)
		{
			if (clanID != get_exchange_record()[i]){
				EXCHANGE_RECORD[get_irecord()]= clanID;
				irecord ++;
				if (irecord ==RECORD_SIZE)
					irecord =0;
				set_irecord(irecord); 
			}
		}
}
/*Se asigna a cada clan la chica/s que han pedido, en caso de peticion doble, la preferencia la
tiene el clan cuya peticion llegara antes */
int aceptar_prop ()
{
	int j,i,encontrado;
	int_array peticiones,pretendientes,clanes;

	init_int_array(&peticiones);
	init_int_array(&clanes);
	init_int_array(&pretendientes);
	START_PROPUESTA_MESSAGE_LOOP
		encontrado =0;
		j=0;
		while (j<peticiones.size && encontrado ==0){
			if (propuesta_message->id_list == peticiones.array[j])
				encontrado =1;
			j++;
		}
		if (encontrado ==0){
			add_int(&peticiones,propuesta_message->id_list);
			add_int (&pretendientes,propuesta_message->id_man);
			add_int (&clanes,propuesta_message->oclanID);
		}
	FINISH_PROPUESTA_MESSAGE_LOOP
	//se envia la confirmacion al clan que pertenece el chico
	for (i=0;i<peticiones.size;i++){
		add_confirProp_message(peticiones.array[i],clanes.array[i],pretendientes.array[i],get_cID(),get_linguistics());
		update_record (clanes.array[i]);
	}
	//free memory
	free_int_array(&peticiones);
	free_int_array(&clanes);
	free_int_array(&pretendientes);
	return 0;
}
int recive_conf ()
{
	int wife, husband, clanID,nextID,random,i;
	nextID= get_indexID();

	START_CONFIRPROP_MESSAGE_LOOP
		wife = confirProp_message->girlID;
		husband = confirProp_message->manID;
		clanID = confirProp_message->oclanID;
		add_marriage_message(wife,get_cID(),husband,clanID,nextID);
		nextID ++;
		//Modificación del genoma linguistico al llegar una chica al clan
		for (i=0;i<GENOMA;i++)
			if (get_linguistics()[i] == 0 && confirProp_message->linguistic[i] ==1)
			{
				random = rand () % 2;
				if (random > 0)
					LINGUISTICS[i]=1;
			}
		update_record (clanID);
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
//busca parejas a las chicas que han quedado viudas
int again_marriable ()
{
	int i,messages=0,n=0,find =0,familia,ag,am;
	int_array id,ancestors,Cancestors;
	init_int_array (&id);
	init_int_array (&ancestors);
	init_int_array (&Cancestors);

	START_WIDOW_MESSAGE_LOOP
		add_int (&id,widow_message->indvID);
		for (i=0;i<NANCESTORS;i++)
		{
			add_int (&ancestors,widow_message->ancestors[i]);
			add_int (&Cancestors,widow_message->Cancestors[i]);
		}
		messages ++;
	FINISH_WIDOW_MESSAGE_LOOP
	//si hay chicos y ha recibido viudas se intenta emparejarla
	if (messages >0){
		while (find < messages && n< IFREE.numMale)
		{
			if (IFREE.male_list[n] != -1){
				// comprobacion de si son familiares
				familia=0;
				ag=0;
				while (ag< NANCESTORS && familia ==0){
					am=0;
					while (am < NANCESTORS && familia ==0){
						if (IFREE.mancestor_list[(n*NANCESTORS)+am] == ancestors.array[(find*NANCESTORS)+ag] 
						&& IFREE.mancestorClan_list[(n*NANCESTORS)+am] == Cancestors.array[(find*NANCESTORS)+ag])
							familia =1;
						am++;
					}
					ag++;
				}
				//si no son familia se envia el mensaje de casamiento
				if (familia ==0){
					add_lmarriage_message (IFREE.male_list[n],id.array[find],get_cID(),IFREE.mancestor_list+n*7,IFREE.mancestorClan_list+n*7);
					find ++;
				}
			}
			n ++;
		}
	}
	free_int_array(&id);
	free_int_array(&ancestors);
	free_int_array(&Cancestors);
	return 0;
}
//separación del clan
int dividir_clan ()
{
	add_warningDivide_message(get_cID());
	return 0;
}
//El clan al llegar a la capacidad maxima, divide sus miembros segun las regla:
//el hijo dependiente sigue a la madre y la esposa sigue al marrido
int creacion_clan ()
{
	int i,actual,pareja=-1,sex, mom,find,members;
	int_array ID_list,sex_list,mom_list,pareja_list,new_clan;
	init_int_array (&ID_list);
	init_int_array (&sex_list);
	init_int_array (&mom_list);
	init_int_array (&pareja_list);
	init_int_array (&new_clan);
	START_INFORMATIONDIVIDE_MESSAGE_LOOP
		add_int (&ID_list,informationDivide_message->indvID);
		add_int (&sex_list,informationDivide_message->sex);
		add_int (&mom_list,informationDivide_message->momID);
		add_int (&pareja_list,informationDivide_message->parejaID);
	FINISH_INFORMATIONDIVIDE_MESSAGE_LOOP
	//Mientras la capacidad del clan no supere un cierto limite, se añaden mas personas al
	// nuevo clan
	members = get_members();

	while (new_clan.size <5)
	{
		//se trata el primer individuo de la lista 
		actual = ID_list.array[0];
		sex = sex_list.array[0];
		add_int (&new_clan,actual);
		remove_int (&ID_list,0);
		remove_int (&sex_list,0);
		remove_int (&mom_list,0);
		members -=1;
		//Mirar si tiene pareja 
		if (pareja_list.array[0] != -1)
		{
			pareja = pareja_list.array[0];
			add_int (&new_clan,pareja);
			remove_int (&pareja_list,0);
			//Buscar la pareja
			i=0;
			find =0;
			while (find ==0){
				if (pareja == ID_list.array[i]){
					remove_int (&ID_list,i);
					remove_int (&sex_list,i);
					remove_int (&pareja_list,i);
					remove_int (&mom_list,i);
					members -=1;
					find =1;
				}
				i++;
			}
		}
		//buscar hijos
		if (sex == 1 || pareja != -1)
		{
			mom = pareja;
			if (sex == 1) // mujer
				mom = actual;
			for (i=0;i<mom_list.size;i++)
			{
				if (mom_list.array[i] == mom)
					//mirar si el hijo tiene pareja
					if (pareja_list.array[i] == -1) //si no tiene
					{
						add_int (&new_clan,ID_list.array[i]);
						remove_int (&ID_list,i);
						remove_int (&sex_list,i);
						remove_int (&pareja_list,i);
						remove_int (&mom_list,i);
						members -=1;
						i -=1;
					}
			}
		}	
	}
	//creacion del nuevo id a traves de la funcion time
	int newClanID = (int) (time (NULL));
	// creacion del nuevo clan y envia de mensaje a sus nuevos miembros
	for (i=0;i<new_clan.size;i++)
		add_transfer_message (get_cID(), newClanID,new_clan.array[i]);
	add_clan_agent (newClanID,0,0,0,get_x(),get_y(),0,new_clan.array[0],MNEEDS,IFREE,get_indexID(),new_clan.size,get_linguistics(),
	get_exchange_record(),get_irecord(),get_targetX(),get_targetY(),0,0,get_guanacos_record(),get_igrecord());

	free_int_array(&ID_list);
	free_int_array(&mom_list);
	free_int_array(&pareja_list);
	free_int_array(&sex_list);
	free_int_array(&new_clan);
	set_members (members);
	return 0;
}
//Anualmente se revisa las palabras conocidas por el clan
int vocabulary_review ()
{
	int i,random;

	for (i=0;i<GENOMA;i++)
	{
		random = rand() % 10;
		if (get_linguistics()[i] == 0){//aprender nueva palabra
			if (random > LEARN)
				LINGUISTICS[i]=1;
		}
		else {// olvidar una palabra conocida
			if (random > FORGET)
				LINGUISTICS[i]=0;
		}
	}
	return 0;
}

int move_clan()
{
	int season, targetX, targetY, nextX, nextY, max, i, j;
	struct guanacosAround guanacos[9] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
	nextX = get_x();
	nextY = get_y();
	targetX = get_targetX();
	targetY = get_targetY();

	add_clanmove_message(get_x(), get_y(), 0);

	START_GUANACOSPATCH_MESSAGE_LOOP
		if(guanacospatch_message->x == get_x() -1){
			if(guanacospatch_message->y == get_y() -1){
				guanacos[0].x = guanacospatch_message->x;
				guanacos[0].y = guanacospatch_message->y;
				guanacos[0].guanacos = guanacospatch_message->adultos;
			}if(guanacospatch_message->y == get_y()){
				guanacos[3].x = guanacospatch_message->x;
				guanacos[3].y = guanacospatch_message->y;
				guanacos[3].guanacos = guanacospatch_message->adultos;
			}if(guanacospatch_message->y == get_y() +1){
				guanacos[6].x = guanacospatch_message->x;
				guanacos[6].y = guanacospatch_message->y;
				guanacos[6].guanacos = guanacospatch_message->adultos;
			}
		}
		if(guanacospatch_message->x == get_x()){
			if(guanacospatch_message->y == get_y() -1){
				guanacos[1].x = guanacospatch_message->x;
				guanacos[1].y = guanacospatch_message->y;
				guanacos[1].guanacos = guanacospatch_message->adultos;
			}if(guanacospatch_message->y == get_y()){
				guanacos[4].x = guanacospatch_message->x;
				guanacos[4].y = guanacospatch_message->y;
				guanacos[4].guanacos = guanacospatch_message->adultos;
				// Obtener los guanacos que habian en mi patch y añadirlos en el buffer circular
				GUANACOS_RECORD[get_igrecord()]=get_x();
				GUANACOS_RECORD[get_igrecord()+1]=get_y();
				GUANACOS_RECORD[get_igrecord()+2]=guanacospatch_message->adultos;
				set_igrecord(get_irecord()+1);
			}if(guanacospatch_message->y == get_y() +1){
				guanacos[7].x = guanacospatch_message->x;
				guanacos[7].y = guanacospatch_message->y;
				guanacos[7].guanacos = guanacospatch_message->adultos;
			}
		}
		if(guanacospatch_message->x == get_x() +1){
			if(guanacospatch_message->y == get_y() -1){
				guanacos[2].x = guanacospatch_message->x;
				guanacos[2].y = guanacospatch_message->y;
				guanacos[2].guanacos = guanacospatch_message->adultos;
			}if(guanacospatch_message->y == get_y()){
				guanacos[5].x = guanacospatch_message->x;
				guanacos[5].y = guanacospatch_message->y;
				guanacos[5].guanacos = guanacospatch_message->adultos;
			}if(guanacospatch_message->y == get_y() +1){
				guanacos[8].x = guanacospatch_message->x;
				guanacos[8].y = guanacospatch_message->y;
				guanacos[8].guanacos = guanacospatch_message->adultos;
			}
		}
		season = guanacospatch_message->season;

	FINISH_GUANACOSPATCH_MESSAGE_LOOP

	max = 0;
	j = 0;
	for(i = 0; i < 9; i++){
		if(guanacos[i].guanacos > max){
			j = i;
			max = guanacos[i].guanacos;	
		}
	}
	if(max > 0){
		targetX = guanacos[j].x;
		targetY = guanacos[j].y;
		nextX = targetX;
		nextY = targetY;
	}
	else{
		if(leviflightclan(get_x(), get_y(), &targetX, &targetY)){
			//no estamos en la posicion, calcular nueva posicion segun target
			if(targetX < get_x()){
				nextX = get_x()-1;
			}else if(targetX > get_x()){
				nextX = get_x()+1;
			}
			if(targetY < get_y()){
				nextY = get_y()-1;
			}else if(targetY > get_y()){
				nextY = get_y()+1;
			}
		}else{ //movimiento corto
			if(targetY < 0){
				targetY = 0;
			}
			else if(targetY > GRIDSIZE-1){
				targetY = GRIDSIZE-1;
			}
			if(targetX < 1){
				targetX = 1;
			}
			else if(targetX > GRIDSIZE-1){
				targetX = GRIDSIZE-1;
			}
			nextX = targetX;
			nextY = targetY;
			//movernos a la posicion target
		}
		if (season==1){
			if(get_y() <= ((GRIDSIZE-1)/2)){
				i = get_y();
			}
			else i = (GRIDSIZE-1) - get_y();
			j = (GRIDSIZE-1) - get_x();
			if(i <= j){
				if(get_y() <= ((GRIDSIZE-1)/2)){
				targetY = 0;
				}
				else targetY = GRIDSIZE-1;
			}
			else targetX = GRIDSIZE-1;
		}
	}
	set_targetX(targetX);
	set_targetY(targetY);
	set_y(nextY);
	set_x(nextX);


	add_clanmove_message(get_x(), get_y(), 1);
	return 0;
}

int leviflightclan(int posX, int posY, int *targetX, int *targetY){
	int r;
	//si estamos en nuestro target recalcular nuevo target
	if(posX == *targetX && posY == *targetY){
		r = rand() % 100;
		//movimiento largo, aleatorio por todo el mapa
		if(r >= 90){
			r = rand()%GRIDSIZE;
			if(r < 1) r = 1; 
			*targetX = r;
			r = rand()%GRIDSIZE;
			*targetY = r;
			return 1;
		}
		else{//movimiento corto
			r = rand()%3;
			if(r == 0){
				if(posX > 1){
					*targetX = posX-1;
				}
			}
			else if(r == 1){
				*targetX = posX+1;
 			}else{ //si no cambiamos el targetX cambiamos si o si el targetY
 				r = rand()%2;
 				*targetX = posX;
 				if(r == 0){
 					*targetY = posY-1;
 					return 0;
 				}
 				else{
 					*targetY = posY+1;
 					return 0;
 				}
 			}
 			r = rand()%3;
 			if(r == 0){
 				*targetY = posY-1;
 				return 0;
 			}
 			else if(r == 1){
 				*targetY = posY+1;
 				return 0;
 			}
 			else{
 				*targetY = posY;
 				return 0;
 			}
		}
	}
	else return 1;
}

// clan seek other clans for cooperation
int start_cooperation ()
{
	int need = get_cal_need();
	printf ("comienza la busqueda de clanes para cooperar, calorias nesesarias: %d\n",get_cID());
	//clan sends requests to cooperate through box 2D
	add_xxx_message (get_cID(),get_x(),get_y(),get_linguistics(),get_cooperation());
	return 0;
}
// clan create a proposal 
int send_proposal ()
{
	int i,j,nproposals = 0,rep=0, find =0,id_clan,cooperation =0,prop=0,needCooperation,coop;
	int_array clanID_list, linguistics_list,ncooperation_list;
	init_int_array (&clanID_list);
	init_int_array (&linguistics_list);
	init_int_array (&ncooperation_list);

	START_XXX_MESSAGE_LOOP
	if (get_cID()!= xxx_message->clanID)
	{
		add_int (&clanID_list,xxx_message->clanID);
		add_int (&ncooperation_list, xxx_message->needCooperation);
		for (i=0;i<GENOMA;i++)
			add_int (&linguistics_list,xxx_message->linguistics[i]);
		nproposals += 1;
	}
	FINISH_XXX_MESSAGE_LOOP
	// if clan receives proposals, verifies the linguistic compatibility
	if (nproposals >0)
	{
		while ( prop <nproposals && find ==0)
		{
			rep =0;
			for (i=0;i<GENOMA;i++)
				if (get_linguistics()[i] == linguistics_list.array[i+(prop*GENOMA)])
					rep ++;
			// if clan understands to the other clan, verifies their relationship
			if (rep >= LANG_THRESHOLD)
			{
				cooperation = 1;
				//default: clan chosens the last clan
				id_clan = clanID_list.array[prop];
				coop = ncooperation_list.array[prop];
				for (j =0; j<RECORD_SIZE; j++)
					if (get_exchange_record()[j] == clanID_list.array[prop]){
						find = 1;
						id_clan = clanID_list.array[prop];
						coop = ncooperation_list.array [0];
					}
			}
			prop += 1;
		}
		// clan sends a proposal the cooperation to choosen clan
		if (cooperation == 1)
			add_yyy_message (get_cID(),id_clan,coop,get_guanacos_record());
	}
	free_int_array (&clanID_list);
	free_int_array (&linguistics_list);
	free_int_array (&ncooperation_list);
	return 0;
}
int proposal_acceptation ()
{
	int clansID[2],nacceptations=0,coop,r_guanacos[30],i,destiny[2];
	START_YYY_MESSAGE_LOOP
		clansID[0] = yyy_message->clanID; // ID other clan
		clansID[1] = yyy_message->coopClanID;// my ID
		coop = yyy_message->needCooperation;
		for (i=0;i<GRECORD_SIZE;i++)
			r_guanacos[i]= yyy_message->guanaco_record[i];
		nacceptations += 1;
	FINISH_YYY_MESSAGE_LOOP
	if (nacceptations > 0)
	{
		set_cooperation (0);
		set_hunting(1);
		if (coop == 1)// two clan needed cooperate
			if (clansID[0] < get_cID())
			{
   				memcpy(r_guanacos+GRECORD_SIZE,get_guanacos_record(), sizeof(int) * GRECORD_SIZE); 
				add_hunting_agent (0,0,0,clansID,get_x(),get_y(),r_guanacos,destiny,-1,-1,-1);
			}
	}
	return 0;
}
int idle_clan ()
{
	return 0;
}
