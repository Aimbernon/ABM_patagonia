#include <math.h>
#include "commons.h"
#include "header.h"
#include "clan_agent_header.h"


/* posting individual information*/
int clan_Information()
{
	int cal, nmem, i, ID=get_cID(), x=get_xcord(), y=get_ycord();

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
	int i=0,j;
	START_ANCESTOR_MESSAGE_LOOP
		for (j=0;j<NANCESTORS;j++)
			IFREE.ancestor_list[i].col[j] = ancestor_message->ancest[j];
		IFREE.id_list[i]= ancestor_message->indvID;
		IFREE.sex_list[i] = ancestor_message->sex;
		i++;
	FINISH_ANCESTOR_MESSAGE_LOOP
	return 0;
}
/*each clan seeks its females and sends it to others clans */
int send_girls ()
{
	int i,girls=0,female_list[100];
	//look for female
	for (i=0;i<100;i++)
	{
		if (IFREE.sex_list[i] == 1)
		{
			female_list[girls] = IFREE.id_list[i];
			girls++;
		}
	}
	// ver si hay chicas disponibles
	if (girls != 0)
		//send females to other good clans
		add_freeGirls_message (female_list,girls,get_cID());

	return 0;
}
int match ()
{
	int_array chicas;
	int num_chicas[100], clanes[100],j=0,i;
	init_int_array(&chicas);
	START_FREEGIRLS_MESSAGE_LOOP
		for (i=0;i<100;i++){
			if (freeGirls_message->girls[i]!=0)
				add_int(&chicas,freeGirls_message->girls[i]);	
		}
		num_chicas[j] = freeGirls_message->num_chicas;
		clanes [j] = freeGirls_message->clanID;
		j++;
	FINISH_FREEGIRLS_MESSAGE_LOOP
	//proponer
	/*for (i=0;i<100;i++)
		if (IFREE.sex_list[i] ==0)
			prop_list[j] = chicas.array[z];
			if (clanes[j] != clanes[j+1])
				enviar a clanes[j]*/
	free_int_array(&chicas);
	return 0;
}
//-----------------------------------------------------------

