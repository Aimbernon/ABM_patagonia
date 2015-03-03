#include <math.h>
#include "header.h"
#include "indv_agent_header.h"

/* posting individual information*/
int indvInformation()
{
	int cal=get_cal_needs(), ID=get_indvID(), ageX=get_age(), cIDX=get_cID(), pregX=get_pregnant();


	set_icalories(cal);
        add_information_message(ID,cIDX,cal,ageX,pregX);
        return 0;
}

/* extracting calories */
int extractcalories()
{
	int cal, myneed=get_icalories();

	START_INDGETCALORIES_MESSAGE_LOOP

		cal=indgetcalories_message->icalories;
 		myneed=myneed-cal;
		set_icalories(myneed);

	FINISH_INDGETCALORIES_MESSAGE_LOOP

	return 0;
}

int getolder()
{
	int age = get_age(), caln = get_cal_needs(),sex=get_sex(),marriable = get_marriable(), month =get_month();

	age++;
	
	switch( age ){
		case 1: //toddler?
			break;
		case 36: //child?
			break;
		case 144: //fertile girls - marriable girls and boys?
			set_cal_needs( caln + 500 );
			break;
		// new/mod-------------------------------------------------
		case 156: // female is free
			if (sex == 1){
				marriable =1;
				set_marriable(marriable);
			}
			break;
		case 180: // male is free
			if (sex == 0){
				marriable =1;
				set_marriable(marriable);
			}
			break;
		case 240: //adult - male could be leader?
			set_cal_needs( caln + 1000 );
			break;
		case 480: //old?, female post-fertile
			set_cal_needs( caln - 500 );
			if (sex == 1){
				marriable =0;
				set_marriable(marriable);
				set_embarazable(0);
			}
			break;
		//-------------------------------------------------------------
		case 600: //very old?
			set_cal_needs( caln - 500 );
			break;
	}
	// se comprueba si hace 9 meses desde que esta embarazada la chica
	if (get_pregnant () ==1 ){
		month ++;
		set_month (month);
		// se mantiene el "estado de embarazo" 5 meses mas
		if (get_month() == 15){
			set_embarazable (1);
			set_pregnant (0);
			set_month (0);
		}
	}
	set_age(age);	
	return 0;
}

int idle_indv()
{
	return 0;
}
// se envia al clan todos los individuos que esten en edad de emparejarse para que
// el clan les busque pareja
int freeIndv ()
{	
	add_ancestor_message (get_ancestors(),get_ancestorsClan(),get_cID(),get_indvID(),get_sex());
	return 0;
}
// la chica recibe los datos del hombre con el que ha sido emparejada
int casamiento_female()
{
	int  next_clan,husband,men=0,new_id;
	START_MARRIAGE_MESSAGE_LOOP
		next_clan = marriage_message->clanID;
		husband = marriage_message->manID;
		new_id = marriage_message->newID;
		men++;
	FINISH_MARRIAGE_MESSAGE_LOOP
	// actualizacion de los datos del individuo
	if (men >0){
		//movimiento al clan del marrido
		set_cID(next_clan);
		// nuevo identificador
		set_indvID(new_id);
		set_married(1);
		set_pareja(husband);
		set_embarazable(1);
	}
	return 0;
}
// el hombre recive los datos de la chica con la que ha sido emparejado y envia a su esposa
// su parte de ancestros para un futuro hijo
int casamiento_male()
{
	int wife,message=0;
	START_MARRIAGE_MESSAGE_LOOP
		wife = marriage_message->newID;
		message++;
	FINISH_MARRIAGE_MESSAGE_LOOP
	if (message >0){
		set_married(1);
		set_pareja(wife);
		int info[4] = {get_ancestors()[1],get_ancestors()[2],get_ancestorsClan()[1],get_ancestorsClan()[2]};
		add_family_message (wife,get_cID(),get_indvID(),info);
	}
	return 0;
}

int info_husband ()
{
	START_FAMILY_MESSAGE_LOOP
		HUSBAND_INFO[0] = family_message->info[0];
		HUSBAND_INFO[1] = family_message->info[1];
		HUSBAND_INFO[2] = family_message->info[2];
		HUSBAND_INFO[3] = family_message->info[3];
	FINISH_FAMILY_MESSAGE_LOOP
	return 0;
}
// funcion donde la chica casada y fertil, comprueba si esta embarazada 
// a partir de una probabilidad
int pregnancy ()
{
	int probability;

 	probability= rand () % 11;
	if (probability > PROPEGNANT){
		set_pregnant (1);
		set_embarazable (0);
	}
	return 0;
}
// funcion que pide al clan un nuevo identificador para el hijo que nacera
int child_inf ()
{
	add_peticionID_message (get_cID(),get_indvID());
	return 0;
}
// creacion del nuevo individuo
int birth ()
{
	int id=-1, aux[4]={-1,-1,-1,-1};
	// se recive del clan un id libre para el hijo
	START_RESPUESTAID_MESSAGE_LOOP
		id = respuestaID_message->freeID;
	FINISH_RESPUESTAID_MESSAGE_LOOP
	// se crea el array ancestros que tendra el hijo
	int ancestors[7] = {id,get_pareja(),get_indvID(),get_husband_info()[0],get_husband_info()[1],get_ancestors()[0],get_ancestors()[1]};
	int ancestorsClan[7] ={get_cID(),get_cID(),get_cID(),get_husband_info()[2],get_husband_info()[3]};
	// se determina el genero del hijo
	int sex = rand () %2;
	add_indv_agent (id,get_cID(),0,0,0,1,sex,0,0,0,ancestors,ancestorsClan,0,-1,0,0,get_indvID(),aux,0);

	//inclemento un mes mas para que no vuelva a entrar y que comienze los 5 meses de reposo
	set_month (get_month()+1);
	return 0;
}

int survive()
{	
	int die, age = get_age(), sex = get_sex(), cal = get_icalories();
	float p = 0.001;

	if ( age <= 36 ) p += 0.005;
	if ( age >= 480 ) p += 0.005;
	if ( age >= 600 ) p += 0.01;
	if ( age >= 720 ) p += 0.1 + (age - 720)*0.01;
	if ( age >= 840 ) p += 0.2 + (age - 840)*0.01;

	if ( sex == 0 ) p += 0.005;

	if ( cal > 0 ) p = p + (0.000001 * cal);

        die = ((1.0*rand())/(RAND_MAX+1.0)) < p;

	if( !die ) add_leader_message( get_indvID(), get_cID(), get_lead(), get_sex(), get_age() );
	//mirar si tiene pareja para avisarla que he muerto
	if (die !=0)
	{
		if (get_married() == 1)
			add_death_message (get_pareja(),get_cID());
	}
	return die; 
}
// se comprueba si la pareja del indv ha muerto
int update_status ()
{
	START_DEATH_MESSAGE_LOOP
		if (get_sex()==1)
		{
			set_widow (1);
			set_embarazable(0);
		}
		set_married(0);
		//set_pareja (-1);
	FINISH_DEATH_MESSAGE_LOOP
	return 0;
}

int husband_request () //entrada solo viudas
{
	//pedir al clan una pareja local
	add_widow_message (get_ancestors(),get_ancestorsClan(),get_cID(),get_indvID());
	return 0;
}
// la chica viuda se empareja con un chico libre de su clan
int local_marriage ()
{
	START_LMARRIAGE_MESSAGE_LOOP
		if (get_sex()==1){//female case
			set_embarazable(1);
			set_pareja(lmarriage_message->manID);
			HUSBAND_INFO[0] = lmarriage_message->mancestorsID[0];
			HUSBAND_INFO[1] = lmarriage_message->mancestorsID[1];
			HUSBAND_INFO[2] = lmarriage_message->mancestorsCID[2];
			HUSBAND_INFO[3] = lmarriage_message->mancestorsCID[3];
		}
		else// male case
			set_pareja(lmarriage_message->girlID);
		set_married(1);
	FINISH_LMARRIAGE_MESSAGE_LOOP
	return 0;
}
// Se envia al clan toda la informacion nesesaria para dividir el clan
int dividir_info ()
{
	int mom = get_ancestors()[2];
	START_WARNINGDIVIDE_MESSAGE_LOOP
		add_informationDivide_message(get_cID(),get_indvID(),get_pareja(),get_sex(),mom,get_age());
	FINISH_WARNINGDIVIDE_MESSAGE_LOOP
	return 0;
}
// se comprueba si el indv tiene que cambiar de clan
int dividir_transfer()
{
	START_TRANSFER_MESSAGE_LOOP
		set_cID (transfer_message->newID);
	FINISH_TRANSFER_MESSAGE_LOOP
	return 0;
}

