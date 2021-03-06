/**
 * \file  memory.c
 * \brief Holds memory functions.
 */

#include "header.h"


void unittest_indvInformation_start_01()
{
	
	
	//return indvInformation();
}

void unittest_extractcalories_01_02()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_indgetcalories, &i_indgetcalories, &FLAME_filter_indv_extractcalories_01_02_indgetcalories, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'indgetcalories'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'indgetcalories' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'indgetcalories' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return extractcalories();
}

void unittest_getolder_02_03()
{
	
	
	//return getolder();
}

void unittest_idle_indv_02_03()
{
	
	
	//return idle_indv();
}

void unittest_freeIndv_03_04()
{
	
	
	//return freeIndv();
}

void unittest_idle_03_06()
{
	
	
	//return idle();
}

void unittest_casamiento_female_04_05()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_marriage, &i_marriage, &FLAME_filter_indv_casamiento_female_04_05_marriage, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'marriage'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'marriage' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'marriage' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return casamiento_female();
}

void unittest_casamiento_male_04_06()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_marriage, &i_marriage, &FLAME_filter_indv_casamiento_male_04_06_marriage, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'marriage'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'marriage' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'marriage' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return casamiento_male();
}

void unittest_info_husband_05_06()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_family, &i_family, &FLAME_filter_indv_info_husband_05_06_family, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'family'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'family' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'family' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return info_husband();
}

void unittest_idle_05_06()
{
	
	
	//return idle();
}

void unittest_pregnancy_06_09()
{
	
	
	//return pregnancy();
}

void unittest_idle_06_07()
{
	
	
	//return idle();
}

void unittest_child_inf_07_08()
{
	
	
	//return child_inf();
}

void unittest_idle_07_09()
{
	
	
	//return idle();
}

void unittest_birth_08_09()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_respuestaID, &i_respuestaID, &FLAME_filter_indv_birth_08_09_respuestaID, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'respuestaID'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'respuestaID' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'respuestaID' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return birth();
}

void unittest_survive_09_10()
{
	
	
	//return survive();
}

void unittest_update_status_10_11()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_death, &i_death, &FLAME_filter_indv_update_status_10_11_death, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'death'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'death' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'death' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return update_status();
}

void unittest_husband_request_11_12()
{
	
	
	//return husband_request();
}

void unittest_idle_11_12()
{
	
	
	//return idle();
}

void unittest_local_marriage_12_13()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_lmarriage, &i_lmarriage, &FLAME_filter_indv_local_marriage_12_13_lmarriage, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'lmarriage'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'lmarriage' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'lmarriage' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return local_marriage();
}

void unittest_idle_12_13()
{
	
	
	//return idle();
}

void unittest_dividir_info_13_14()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_warningDivide, &i_warningDivide, &FLAME_filter_indv_dividir_info_13_14_warningDivide, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'warningDivide'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'warningDivide' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'warningDivide' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return dividir_info();
}

void unittest_dividir_transfer_14_end()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_transfer, &i_transfer, &FLAME_filter_indv_dividir_transfer_14_end_transfer, current_xmachine_indv);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'transfer'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'transfer' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'transfer' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return dividir_transfer();
}

void unittest_clan_Information_start_01()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_information, &i_information, &FLAME_filter_clan_clan_Information_start_01_information, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'information'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'information' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'information' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return clan_Information();
}

void unittest_clan_extract_calories_01_02()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_clangetcalories, &i_clangetcalories, &FLAME_filter_clan_clan_extract_calories_01_02_clangetcalories, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'clangetcalories'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'clangetcalories' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clangetcalories' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return clan_extract_calories();
}

void unittest_distribute_calories_02_03()
{
	
	
	//return distribute_calories();
}

void unittest_start_cooperation_03_04()
{
	
	
	//return start_cooperation();
}

void unittest_idle_03_04()
{
	
	
	//return idle();
}

void unittest_send_proposal_04_05()
{
	int rc;
	
	
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'xxx'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'xxx' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'xxx' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return send_proposal();
}

void unittest_proposal_acceptation_05_06()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_yyy, &i_yyy, &FLAME_filter_clan_proposal_acceptation_05_06_yyy, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'yyy'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'yyy' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'yyy' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return proposal_acceptation();
}

void unittest_move_clan_06_07()
{
	int rc;
	
	
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'guanacospatch'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'guanacospatch' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'guanacospatch' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return move_clan();
}

void unittest_idle_clan_06_07()
{
	
	
	//return idle_clan();
}

void unittest_marriable_indv_07_08()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_ancestor, &i_ancestor, &FLAME_filter_clan_marriable_indv_07_08_ancestor, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'ancestor'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'ancestor' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'ancestor' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return marriable_indv();
}

void unittest_send_girls_08_09()
{
	
	
	//return send_girls();
}

void unittest_match_09_10()
{
	int rc;
	
	
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'freeGirls'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'freeGirls' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'freeGirls' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return match();
}

void unittest_aceptar_prop_10_11()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_propuesta, &i_propuesta, &FLAME_filter_clan_aceptar_prop_10_11_propuesta, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'propuesta'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'propuesta' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'propuesta' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return aceptar_prop();
}

void unittest_recive_conf_11_12()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_confirProp, &i_confirProp, &FLAME_filter_clan_recive_conf_11_12_confirProp, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'confirProp'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'confirProp' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'confirProp' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return recive_conf();
}

void unittest_repartir_id_12_13()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_peticionID, &i_peticionID, &FLAME_filter_clan_repartir_id_12_13_peticionID, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'peticionID'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'peticionID' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'peticionID' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return repartir_id();
}

void unittest_new_leader_13_14()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_leader, &i_leader, &FLAME_filter_clan_new_leader_13_14_leader, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'leader'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'leader' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'leader' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return new_leader();
}

void unittest_again_marriable_14_15()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_widow, &i_widow, &FLAME_filter_clan_again_marriable_14_15_widow, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'widow'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'widow' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'widow' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return again_marriable();
}

void unittest_dividir_clan_15_16()
{
	
	
	//return dividir_clan();
}

void unittest_idle_15_17()
{
	
	
	//return idle();
}

void unittest_creacion_clan_16_17()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_informationDivide, &i_informationDivide, &FLAME_filter_clan_creacion_clan_16_17_informationDivide, current_xmachine_clan);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'informationDivide'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'informationDivide' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'informationDivide' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return creacion_clan();
}

void unittest_vocabulary_review_17_end()
{
	
	
	//return vocabulary_review();
}

void unittest_idle_15_end()
{
	
	
	//return idle();
}

void unittest_patchtype_start_1()
{
	
	
	//return patchtype();
}

void unittest_infoClansInPatch_start_1()
{
	
	
	//return infoClansInPatch();
}

void unittest_idle_patch_1_2()
{
	
	
	//return idle_patch();
}

void unittest_infoGuanacosPatch_1_2()
{
	
	
	//return infoGuanacosPatch();
}

void unittest_patchcalories_2_3()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_clan_info, &i_clan_info, &FLAME_filter_patch_patchcalories_2_3_clan_info, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'clan_info'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'clan_info' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clan_info' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return patchcalories();
}

void unittest_regenerate_3_4()
{
	
	
	//return regenerate();
}

void unittest_idle_patch_3_4()
{
	
	
	//return idle_patch();
}

void unittest_snregenerate_4_5()
{
	
	
	//return snregenerate();
}

void unittest_idle_patch_4_5()
{
	
	
	//return idle_patch();
}

void unittest_guanacos_move_5_6()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_adultospatch, &i_adultospatch, &FLAME_filter_patch_guanacos_move_5_6_adultospatch, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'adultospatch'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'adultospatch' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'adultospatch' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return guanacos_move();
}

void unittest_clans_move_6_7()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_clanmove, &i_clanmove, &FLAME_filter_patch_clans_move_6_7_clanmove, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'clanmove'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'clanmove' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanmove' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return clans_move();
}

void unittest_reproduccion_guanacos_7_8()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_reproduccionguanacos, &i_reproduccionguanacos, &FLAME_filter_patch_reproduccion_guanacos_7_8_reproduccionguanacos, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'reproduccionguanacos'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'reproduccionguanacos' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return reproduccion_guanacos();
}

void unittest_idle_patch_7_8()
{
	
	
	//return idle_patch();
}

void unittest_info_hunters_8_9()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_numGuanacos, &i_numGuanacos, &FLAME_filter_patch_info_hunters_8_9_numGuanacos, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'numGuanacos'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'numGuanacos' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'numGuanacos' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return info_hunters();
}

void unittest_give_calHunters_9_end()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_infoHunter, &i_infoHunter, &FLAME_filter_patch_give_calHunters_9_end_infoHunter, current_xmachine_patch);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'infoHunter'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'infoHunter' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoHunter' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return give_calHunters();
}

void unittest_manadaInfo_start_1()
{
	
	
	//return manadaInfo();
}

void unittest_seasonSwitch_start_1()
{
	
	
	//return seasonSwitch();
}

void unittest_manada_idle_1_2()
{
	
	
	//return manada_idle();
}

void unittest_move_1_2()
{
	int rc;
	
	
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'clanspatch'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'clanspatch' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanspatch' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return move();
}

void unittest_reproduccion_2_3()
{
	
	
	//return reproduccion();
}

void unittest_manada_idle2_2_3()
{
	
	
	//return manada_idle2();
}

void unittest_surviveGuanacos_3_end()
{
	
	
	//return surviveGuanacos();
}

void unittest_idle_3_end()
{
	
	
	//return idle();
}

void unittest_get_hunters_start_1()
{
	
	
	//return get_hunters();
}

void unittest_move_hunters_1_2()
{
	
	
	//return move_hunters();
}

void unittest_idle_hunting_1_3()
{
	
	
	//return idle_hunting();
}

void unittest_get_numGuanacos_2_3()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_infoGuanacos, &i_infoGuanacos, &FLAME_filter_hunting_get_numGuanacos_2_3_infoGuanacos, current_xmachine_hunting);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'infoGuanacos'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'infoGuanacos' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoGuanacos' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return get_numGuanacos();
}

void unittest_hunting_3_4()
{
	
	
	//return hunting();
}

void unittest_idle_hunting_3_end()
{
	
	
	//return idle_hunting();
}

void unittest_comprove_end_4_end()
{
	int rc;
	
	rc = MB_Iterator_CreateFiltered(b_repCal, &i_repCal, &FLAME_filter_hunting_comprove_end_4_end_repCal, current_xmachine_hunting);
	
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Could not create Iterator for 'repCal'\n");
	   switch(rc) {
	       case MB_ERR_INVALID:
	           fprintf(stderr, "\t reason: 'repCal' board is invalid\n");
	           break;
	       case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'repCal' board is locked\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	   }
	}
	#endif
	
	//return comprove_end();
}

void unittest_idle_hunting_4_end()
{
	
	
	//return idle_hunting();
}


void free_messages()
{
	int rc;
	
	    rc = MB_Clear(b_information);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'information' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'information' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'information' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_indgetcalories);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'indgetcalories' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'indgetcalories' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'indgetcalories' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_leader);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'leader' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'leader' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'leader' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_ancestor);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'ancestor' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'ancestor' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'ancestor' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_peticionID);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'peticionID' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'peticionID' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'peticionID' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_family);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'family' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'family' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'family' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_death);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'death' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'death' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'death' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_widow);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'widow' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'widow' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'widow' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_informationDivide);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'informationDivide' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'informationDivide' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'informationDivide' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_clan_info);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'clan_info' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'clan_info' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'clan_info' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_clangetcalories);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'clangetcalories' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'clangetcalories' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'clangetcalories' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_freeGirls);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'freeGirls' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'freeGirls' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'freeGirls' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_propuesta);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'propuesta' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'propuesta' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'propuesta' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_confirProp);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'confirProp' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'confirProp' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'confirProp' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_marriage);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'marriage' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'marriage' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'marriage' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_respuestaID);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'respuestaID' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'respuestaID' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'respuestaID' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_lmarriage);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'lmarriage' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'lmarriage' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'lmarriage' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_warningDivide);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'warningDivide' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'warningDivide' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'warningDivide' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_transfer);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'transfer' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'transfer' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'transfer' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_clanmove);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'clanmove' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'clanmove' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'clanmove' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_xxx);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'xxx' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'xxx' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'xxx' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_yyy);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'yyy' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'yyy' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'yyy' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_clanspatch);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'clanspatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'clanspatch' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'clanspatch' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_guanacospatch);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'guanacospatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'guanacospatch' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'guanacospatch' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_infoGuanacos);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'infoGuanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'infoGuanacos' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'infoGuanacos' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_repCal);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'repCal' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'repCal' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'repCal' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_adultospatch);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'adultospatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'adultospatch' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'adultospatch' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_reproduccionguanacos);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'reproduccionguanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'reproduccionguanacos' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'reproduccionguanacos' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_numGuanacos);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'numGuanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'numGuanacos' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'numGuanacos' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	    rc = MB_Clear(b_infoHunter);
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not clear 'infoHunter' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: 'infoHunter' board is invalid\n");
	               break;
	           case MB_ERR_LOCKED:
	               fprintf(stderr, "\t reason: 'infoHunter' board is locked\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Clear returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
}

/** \fn void initialise_pointers()
 * \brief Initialises pointers to xmachine, message, and node lists.
 */
void initialise_pointers()
{
int rc;

	/* Initialise message sync composite params as NULL */
	FLAME_m_information_composite_params = NULL;

	    rc = MB_Create(&b_information, sizeof(m_information));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'information' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_indgetcalories_composite_params = NULL;

	    rc = MB_Create(&b_indgetcalories, sizeof(m_indgetcalories));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'indgetcalories' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_leader_composite_params = NULL;

	    rc = MB_Create(&b_leader, sizeof(m_leader));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'leader' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_ancestor_composite_params = NULL;

	    rc = MB_Create(&b_ancestor, sizeof(m_ancestor));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'ancestor' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_peticionID_composite_params = NULL;

	    rc = MB_Create(&b_peticionID, sizeof(m_peticionID));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'peticionID' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_family_composite_params = NULL;

	    rc = MB_Create(&b_family, sizeof(m_family));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'family' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_death_composite_params = NULL;

	    rc = MB_Create(&b_death, sizeof(m_death));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'death' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_widow_composite_params = NULL;

	    rc = MB_Create(&b_widow, sizeof(m_widow));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'widow' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_informationDivide_composite_params = NULL;

	    rc = MB_Create(&b_informationDivide, sizeof(m_informationDivide));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'informationDivide' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_clan_info_composite_params = NULL;

	    rc = MB_Create(&b_clan_info, sizeof(m_clan_info));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'clan_info' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_clangetcalories_composite_params = NULL;

	    rc = MB_Create(&b_clangetcalories, sizeof(m_clangetcalories));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'clangetcalories' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_freeGirls_composite_params = NULL;

	    rc = MB_Create(&b_freeGirls, sizeof(m_freeGirls));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'freeGirls' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_propuesta_composite_params = NULL;

	    rc = MB_Create(&b_propuesta, sizeof(m_propuesta));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'propuesta' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_confirProp_composite_params = NULL;

	    rc = MB_Create(&b_confirProp, sizeof(m_confirProp));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'confirProp' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_marriage_composite_params = NULL;

	    rc = MB_Create(&b_marriage, sizeof(m_marriage));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'marriage' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_respuestaID_composite_params = NULL;

	    rc = MB_Create(&b_respuestaID, sizeof(m_respuestaID));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'respuestaID' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_lmarriage_composite_params = NULL;

	    rc = MB_Create(&b_lmarriage, sizeof(m_lmarriage));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'lmarriage' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_warningDivide_composite_params = NULL;

	    rc = MB_Create(&b_warningDivide, sizeof(m_warningDivide));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'warningDivide' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_transfer_composite_params = NULL;

	    rc = MB_Create(&b_transfer, sizeof(m_transfer));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'transfer' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_clanmove_composite_params = NULL;

	    rc = MB_Create(&b_clanmove, sizeof(m_clanmove));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'clanmove' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_xxx_composite_params = NULL;

	    rc = MB_Create(&b_xxx, sizeof(m_xxx));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'xxx' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_yyy_composite_params = NULL;

	    rc = MB_Create(&b_yyy, sizeof(m_yyy));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'yyy' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_clanspatch_composite_params = NULL;

	    rc = MB_Create(&b_clanspatch, sizeof(m_clanspatch));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'clanspatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_guanacospatch_composite_params = NULL;

	    rc = MB_Create(&b_guanacospatch, sizeof(m_guanacospatch));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'guanacospatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_infoGuanacos_composite_params = NULL;

	    rc = MB_Create(&b_infoGuanacos, sizeof(m_infoGuanacos));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'infoGuanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_repCal_composite_params = NULL;

	    rc = MB_Create(&b_repCal, sizeof(m_repCal));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'repCal' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_adultospatch_composite_params = NULL;

	    rc = MB_Create(&b_adultospatch, sizeof(m_adultospatch));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'adultospatch' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_reproduccionguanacos_composite_params = NULL;

	    rc = MB_Create(&b_reproduccionguanacos, sizeof(m_reproduccionguanacos));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'reproduccionguanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_numGuanacos_composite_params = NULL;

	    rc = MB_Create(&b_numGuanacos, sizeof(m_numGuanacos));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'numGuanacos' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	/* Initialise message sync composite params as NULL */
	FLAME_m_infoHunter_composite_params = NULL;

	    rc = MB_Create(&b_infoHunter, sizeof(m_infoHunter));
	    #ifdef ERRCHECK
	    if (rc != MB_SUCCESS)
	    {
	       fprintf(stderr, "ERROR: Could not create 'infoHunter' board\n");
	       switch(rc) {
	           case MB_ERR_INVALID:
	               fprintf(stderr, "\t reason: Invalid message size\n");
	               break;
	           case MB_ERR_MEMALLOC:
	               fprintf(stderr, "\t reason: out of memory\n");
	               break;
	           case MB_ERR_INTERNAL:
	               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
	               break;
	           default:
                   fprintf(stderr, "\t MB_Create returned error code: %d (see libmboard docs for details)\n", rc);
                   break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
	    }
	    #endif
	
	indv_end_state = init_indv_state();

	indv_14_state = init_indv_state();

	indv_13_state = init_indv_state();

	indv_12_state = init_indv_state();

	indv_11_state = init_indv_state();

	indv_10_state = init_indv_state();

	indv_08_state = init_indv_state();

	indv_07_state = init_indv_state();

	indv_09_state = init_indv_state();

	indv_05_state = init_indv_state();

	indv_06_state = init_indv_state();

	indv_04_state = init_indv_state();

	indv_03_state = init_indv_state();

	indv_02_state = init_indv_state();

	indv_01_state = init_indv_state();

	indv_start_state = init_indv_state();

	clan_end_state = init_clan_state();

	clan_17_state = init_clan_state();

	clan_16_state = init_clan_state();

	clan_15_state = init_clan_state();

	clan_14_state = init_clan_state();

	clan_13_state = init_clan_state();

	clan_12_state = init_clan_state();

	clan_11_state = init_clan_state();

	clan_10_state = init_clan_state();

	clan_09_state = init_clan_state();

	clan_08_state = init_clan_state();

	clan_07_state = init_clan_state();

	clan_06_state = init_clan_state();

	clan_05_state = init_clan_state();

	clan_04_state = init_clan_state();

	clan_03_state = init_clan_state();

	clan_02_state = init_clan_state();

	clan_01_state = init_clan_state();

	clan_start_state = init_clan_state();

	patch_end_state = init_patch_state();

	patch_9_state = init_patch_state();

	patch_8_state = init_patch_state();

	patch_7_state = init_patch_state();

	patch_6_state = init_patch_state();

	patch_5_state = init_patch_state();

	patch_4_state = init_patch_state();

	patch_3_state = init_patch_state();

	patch_2_state = init_patch_state();

	patch_1_state = init_patch_state();

	patch_start_state = init_patch_state();

	manada_guanacos_end_state = init_manada_guanacos_state();

	manada_guanacos_3_state = init_manada_guanacos_state();

	manada_guanacos_2_state = init_manada_guanacos_state();

	manada_guanacos_1_state = init_manada_guanacos_state();

	manada_guanacos_start_state = init_manada_guanacos_state();

	hunting_end_state = init_hunting_state();

	hunting_4_state = init_hunting_state();

	hunting_3_state = init_hunting_state();

	hunting_2_state = init_hunting_state();

	hunting_1_state = init_hunting_state();

	hunting_start_state = init_hunting_state();

	temp_node_info = NULL;
	p_node_info = &temp_node_info;
}

/** \fn void initialise_unit_testing()
 * \brief Initialises framework for unit testing.
 */
void initialise_unit_testing()
{
	int rc;

	rc = MB_Env_Init();
	#ifdef ERRCHECK
	if (rc != MB_SUCCESS)
	{
	   fprintf(stderr, "ERROR: Failed to initialise Message Board environment\n");
	   switch(rc) {
	       case MB_ERR_MPI:
	           fprintf(stderr, "\t reason: MPI library not initialised\n");
	           break;
	       case MB_ERR_MEMALLOC:
	           fprintf(stderr, "\t reason: out of memory\n");
	           break;
	       default:
               fprintf(stderr, "\t MB_Env_Init returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);

	}
	#endif

	initialise_pointers();
}

FLAME_output * add_FLAME_output(FLAME_output ** outputs)
{
	FLAME_output * current;

	current = (FLAME_output *)malloc(sizeof(FLAME_output));
	CHECK_POINTER(current);
	current->next = *outputs;
	*outputs = current;

	current->type = -1;
	current->format = -1;
	current->location = NULL;
	current->period = -1;
	current->phase = -1;
	current->flag = 0;

	return current;
}

void free_FLAME_outputs(FLAME_output ** outputs)
{
	FLAME_output * current, * next;

	current = *outputs;
	while(current)
	{
		next = current->next;
		free(current->location);
		free(current);
		current = next;
	}
	*outputs = NULL;
}

/* add_location */
/** \fn void add_location(double point, location ** p_location)
 * \brief Adds a location in order into the location list.
 * \param point Position of an agent.
 * \param p_location Pointer Pointer to the location list.
 */
void add_location(double point, location ** p_location)
{
	location * current = *p_location;
	location * tmp = NULL;
	location * newlocation = NULL;
	int found = 0;

	while(found == 0)
	{
		if(current == NULL) found = 1;
		else if(point > current->point) found = 1;
		else
		{
			tmp = current;
			current = current->next;
		}
	}

	newlocation = (location *)malloc(sizeof(location));
	CHECK_POINTER(newlocation);
	if(tmp)
	{
		tmp->next = newlocation;
	}
	else
	{
		*p_location = newlocation;
	}

	newlocation->next = current;
	newlocation->point = point;
}

/* freelocations */
/** \fn void freelocations(location ** p_location)
 * \brief Free locations from the location list.
 * \param p_location Pointer Pointer to the location list.
 */
void freelocations(location ** p_location)
{
	location * head = *p_location;
	location * tmp = NULL;

	while(head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	*p_location = NULL;
}

void init_int_static_array(/*@out@*/ int * array, int size)
{
	int i;

	for(i = 0; i < size; i++) array[i] = 0;
}

void init_float_static_array(/*@out@*/ float * array, int size)
{
	int i;

	for(i = 0; i < size; i++) array[i] = 0.0;
}

void init_double_static_array(/*@out@*/ double* array, int size)
{
	int i;

	for(i = 0; i < size; i++) array[i] = 0.0;
}

void init_char_static_array(/*@out@*/ char * array, int size)
{
	int i;

	for(i = 0; i < size; i++) array[i] = '\0';
}



void init_members_needs(/*@out@*/ members_needs * temp)
{
	init_int_static_array((*temp).id_list, 100);
	init_int_static_array((*temp).cal_list, 100);
	init_int_static_array((*temp).age, 100);

}

void init_members_needs_static_array(/*@out@*/ members_needs * array, int size)
{
	int i;

	for(i = 0; i < size; i++) init_members_needs(&array[i]);
}

void free_members_needs(members_needs * temp)
{

}

void free_members_needs_static_array(members_needs * array, int size)
{
	int i;

	for(i = 0; i < size; i++) free_members_needs(&array[i]);
}

void copy_members_needs(members_needs * from, members_needs * to)
{
	memcpy((*to).id_list, (*from).id_list, 100*sizeof(int));
	memcpy((*to).cal_list, (*from).cal_list, 100*sizeof(int));
	memcpy((*to).age, (*from).age, 100*sizeof(int));
}

void copy_members_needs_static_array(members_needs * from, members_needs * to, int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		copy_members_needs(&from[i], &to[i]);
	}
}


void init_indv_free(/*@out@*/ indv_free * temp)
{
	init_int_static_array((*temp).male_list, 100);
	init_int_static_array((*temp).female_list, 100);
	init_int_static_array((*temp).mancestor_list, 700);
	init_int_static_array((*temp).fancestor_list, 700);
	init_int_static_array((*temp).mancestorClan_list, 700);
	init_int_static_array((*temp).fancestorClan_list, 700);
	(*temp).numMale = 0;
	(*temp).numFemale = 0;

}

void init_indv_free_static_array(/*@out@*/ indv_free * array, int size)
{
	int i;

	for(i = 0; i < size; i++) init_indv_free(&array[i]);
}

void free_indv_free(indv_free * temp)
{

}

void free_indv_free_static_array(indv_free * array, int size)
{
	int i;

	for(i = 0; i < size; i++) free_indv_free(&array[i]);
}

void copy_indv_free(indv_free * from, indv_free * to)
{
	memcpy((*to).male_list, (*from).male_list, 100*sizeof(int));
	memcpy((*to).female_list, (*from).female_list, 100*sizeof(int));
	memcpy((*to).mancestor_list, (*from).mancestor_list, 700*sizeof(int));
	memcpy((*to).fancestor_list, (*from).fancestor_list, 700*sizeof(int));
	memcpy((*to).mancestorClan_list, (*from).mancestorClan_list, 700*sizeof(int));
	memcpy((*to).fancestorClan_list, (*from).fancestorClan_list, 700*sizeof(int));
	(*to).numMale = (*from).numMale;
	(*to).numFemale = (*from).numFemale;
}

void copy_indv_free_static_array(indv_free * from, indv_free * to, int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		copy_indv_free(&from[i], &to[i]);
	}
}



xmachine_memory_indv_state * init_indv_state()
{
	xmachine_memory_indv_state * current = (xmachine_memory_indv_state *)malloc(sizeof(xmachine_memory_indv_state));
	CHECK_POINTER(current);

	current->agents = NULL;
	current->count = 0;

	return current;
}

xmachine_memory_indv * init_indv_agent()
{
	xmachine_memory_indv * current = (xmachine_memory_indv *)malloc(sizeof(xmachine_memory_indv));
	CHECK_POINTER(current);

	current->indvID = 0;
	current->cID = 0;
	current->cal_needs = 0;
	current->icalories = 0;
	current->patchID = 0;
	current->age = 0;
	current->sex = 0;
	current->pregnant = 0;
	current->lead = 0;
	current->marriable = 0;
	init_int_static_array(current->ancestors, 7);
	init_int_static_array(current->ancestorsClan, 7);
	current->married = 0;
	current->pareja = 0;
	current->embarazable = 0;
	current->month = 0;
	current->motherID = 0;
	init_int_static_array(current->husband_info, 4);
	current->widow = 0;

	return current;
}

void free_indv_agent(xmachine_memory_indv_holder * tmp, xmachine_memory_indv_state * state)
{
	if(tmp->prev == NULL) state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	

	free(tmp->agent);
	free(tmp);
}

void unittest_init_indv_agent()
{
	current_xmachine_indv = (xmachine_memory_indv *)malloc(sizeof(xmachine_memory_indv));
	CHECK_POINTER(current);

		current_xmachine_indv->indvID = 0;
		current_xmachine_indv->cID = 0;
		current_xmachine_indv->cal_needs = 0;
		current_xmachine_indv->icalories = 0;
		current_xmachine_indv->patchID = 0;
		current_xmachine_indv->age = 0;
		current_xmachine_indv->sex = 0;
		current_xmachine_indv->pregnant = 0;
		current_xmachine_indv->lead = 0;
		current_xmachine_indv->marriable = 0;
		init_int_static_array(current_xmachine_indv->ancestors, 7);
		init_int_static_array(current_xmachine_indv->ancestorsClan, 7);
		current_xmachine_indv->married = 0;
		current_xmachine_indv->pareja = 0;
		current_xmachine_indv->embarazable = 0;
		current_xmachine_indv->month = 0;
		current_xmachine_indv->motherID = 0;
		init_int_static_array(current_xmachine_indv->husband_info, 4);
		current_xmachine_indv->widow = 0;
	
}

void unittest_free_indv_agent()
{
	
	free(current_xmachine_indv);
}

void free_indv_agents()
{
	current_xmachine_indv_holder = indv_end_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_end_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_end_state->count = 0;
	current_xmachine_indv_holder = indv_14_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_14_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_14_state->count = 0;
	current_xmachine_indv_holder = indv_13_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_13_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_13_state->count = 0;
	current_xmachine_indv_holder = indv_12_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_12_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_12_state->count = 0;
	current_xmachine_indv_holder = indv_11_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_11_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_11_state->count = 0;
	current_xmachine_indv_holder = indv_10_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_10_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_10_state->count = 0;
	current_xmachine_indv_holder = indv_08_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_08_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_08_state->count = 0;
	current_xmachine_indv_holder = indv_07_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_07_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_07_state->count = 0;
	current_xmachine_indv_holder = indv_09_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_09_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_09_state->count = 0;
	current_xmachine_indv_holder = indv_05_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_05_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_05_state->count = 0;
	current_xmachine_indv_holder = indv_06_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_06_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_06_state->count = 0;
	current_xmachine_indv_holder = indv_04_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_04_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_04_state->count = 0;
	current_xmachine_indv_holder = indv_03_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_03_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_03_state->count = 0;
	current_xmachine_indv_holder = indv_02_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_02_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_02_state->count = 0;
	current_xmachine_indv_holder = indv_01_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_01_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_01_state->count = 0;
	current_xmachine_indv_holder = indv_start_state->agents;
	while(current_xmachine_indv_holder)
	{
		temp_xmachine_indv_holder = current_xmachine_indv_holder->next;
		free_indv_agent(current_xmachine_indv_holder, indv_start_state);
		current_xmachine_indv_holder = temp_xmachine_indv_holder;
	}
	indv_start_state->count = 0;
}

void free_indv_states()
{
	free(indv_end_state);
	free(indv_14_state);
	free(indv_13_state);
	free(indv_12_state);
	free(indv_11_state);
	free(indv_10_state);
	free(indv_08_state);
	free(indv_07_state);
	free(indv_09_state);
	free(indv_05_state);
	free(indv_06_state);
	free(indv_04_state);
	free(indv_03_state);
	free(indv_02_state);
	free(indv_01_state);
	free(indv_start_state);
}

void transition_indv_agent(xmachine_memory_indv_holder * tmp, xmachine_memory_indv_state * from_state, xmachine_memory_indv_state * to_state)
{
	if(tmp->prev == NULL) from_state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	add_indv_agent_internal(tmp->agent, to_state);
	free(tmp);
}

void add_indv_agent_internal(xmachine_memory_indv * agent, xmachine_memory_indv_state * state)
{
	xmachine_memory_indv_holder * current = (xmachine_memory_indv_holder *)malloc(sizeof(xmachine_memory_indv_holder));
	CHECK_POINTER(current);

	current->next = state->agents;
	current->prev = NULL;
	state->agents = current;
	if(current->next != NULL) current->next->prev = current;
	current->agent = agent;

	state->count++;
    current_node->agent_total++;
}

/** \fn void add_indv_agent(int indvID, int cID, int cal_needs, int icalories, int patchID, int age, int sex, int pregnant, int lead, int marriable, int ancestors[], int ancestorsClan[], int married, int pareja, int embarazable, int month, int motherID, int husband_info[], int widow)
 * \brief Add indv X-machine to the current being used X-machine list.
 * \param indvID Variable for the X-machine memory.
 * \param cID Variable for the X-machine memory.
 * \param cal_needs Variable for the X-machine memory.
 * \param icalories Variable for the X-machine memory.
 * \param patchID Variable for the X-machine memory.
 * \param age Variable for the X-machine memory.
 * \param sex Variable for the X-machine memory.
 * \param pregnant Variable for the X-machine memory.
 * \param lead Variable for the X-machine memory.
 * \param marriable Variable for the X-machine memory.
 * \param ancestors Variable for the X-machine memory.
 * \param ancestorsClan Variable for the X-machine memory.
 * \param married Variable for the X-machine memory.
 * \param pareja Variable for the X-machine memory.
 * \param embarazable Variable for the X-machine memory.
 * \param month Variable for the X-machine memory.
 * \param motherID Variable for the X-machine memory.
 * \param husband_info Variable for the X-machine memory.
 * \param widow Variable for the X-machine memory.
 */
void add_indv_agent(int indvID, int cID, int cal_needs, int icalories, int patchID, int age, int sex, int pregnant, int lead, int marriable, int ancestors[], int ancestorsClan[], int married, int pareja, int embarazable, int month, int motherID, int husband_info[], int widow)
{
	xmachine_memory_indv * current;

	current = init_indv_agent();
	/* new line added to handle dynamic agent creation*/
	current_xmachine_indv_next_state = indv_start_state;
	add_indv_agent_internal(current, current_xmachine_indv_next_state);

	current->indvID = indvID;
	current->cID = cID;
	current->cal_needs = cal_needs;
	current->icalories = icalories;
	current->patchID = patchID;
	current->age = age;
	current->sex = sex;
	current->pregnant = pregnant;
	current->lead = lead;
	current->marriable = marriable;
	memcpy(current->ancestors, ancestors, 7*sizeof(int));
	memcpy(current->ancestorsClan, ancestorsClan, 7*sizeof(int));
	current->married = married;
	current->pareja = pareja;
	current->embarazable = embarazable;
	current->month = month;
	current->motherID = motherID;
	memcpy(current->husband_info, husband_info, 4*sizeof(int));
	current->widow = widow;
}

xmachine_memory_clan_state * init_clan_state()
{
	xmachine_memory_clan_state * current = (xmachine_memory_clan_state *)malloc(sizeof(xmachine_memory_clan_state));
	CHECK_POINTER(current);

	current->agents = NULL;
	current->count = 0;

	return current;
}

xmachine_memory_clan * init_clan_agent()
{
	xmachine_memory_clan * current = (xmachine_memory_clan *)malloc(sizeof(xmachine_memory_clan));
	CHECK_POINTER(current);

	current->cID = 0;
	current->cal_need = 0;
	current->cal_got = 0;
	current->cal_stored = 0;
	current->x = 0;
	current->y = 0;
	current->tcalories = 0;
	current->leaderID = 0;
	init_members_needs(&current->mneeds);
	init_indv_free(&current->ifree);
	current->indexID = 0;
	current->members = 0;
	init_int_static_array(current->linguistics, 100);
	init_int_static_array(current->exchange_record, 10);
	current->irecord = 0;
	current->targetX = 0;
	current->targetY = 0;
	current->cooperation = 0;
	current->hunting = 0;
	init_int_static_array(current->guanacos_record, 15);
	current->igrecord = 0;

	return current;
}

void free_clan_agent(xmachine_memory_clan_holder * tmp, xmachine_memory_clan_state * state)
{
	if(tmp->prev == NULL) state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	free_members_needs(&tmp->agent->mneeds);
	free_indv_free(&tmp->agent->ifree);
	

	free(tmp->agent);
	free(tmp);
}

void unittest_init_clan_agent()
{
	current_xmachine_clan = (xmachine_memory_clan *)malloc(sizeof(xmachine_memory_clan));
	CHECK_POINTER(current);

		current_xmachine_clan->cID = 0;
		current_xmachine_clan->cal_need = 0;
		current_xmachine_clan->cal_got = 0;
		current_xmachine_clan->cal_stored = 0;
		current_xmachine_clan->x = 0;
		current_xmachine_clan->y = 0;
		current_xmachine_clan->tcalories = 0;
		current_xmachine_clan->leaderID = 0;
		init_members_needs(&current_xmachine_clan->mneeds);
		init_indv_free(&current_xmachine_clan->ifree);
		current_xmachine_clan->indexID = 0;
		current_xmachine_clan->members = 0;
		init_int_static_array(current_xmachine_clan->linguistics, 100);
		init_int_static_array(current_xmachine_clan->exchange_record, 10);
		current_xmachine_clan->irecord = 0;
		current_xmachine_clan->targetX = 0;
		current_xmachine_clan->targetY = 0;
		current_xmachine_clan->cooperation = 0;
		current_xmachine_clan->hunting = 0;
		init_int_static_array(current_xmachine_clan->guanacos_record, 15);
		current_xmachine_clan->igrecord = 0;
	
}

void unittest_free_clan_agent()
{
	free_members_needs(&current_xmachine_clan->mneeds);
	free_indv_free(&current_xmachine_clan->ifree);
	
	free(current_xmachine_clan);
}

void free_clan_agents()
{
	current_xmachine_clan_holder = clan_end_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_end_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_end_state->count = 0;
	current_xmachine_clan_holder = clan_17_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_17_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_17_state->count = 0;
	current_xmachine_clan_holder = clan_16_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_16_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_16_state->count = 0;
	current_xmachine_clan_holder = clan_15_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_15_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_15_state->count = 0;
	current_xmachine_clan_holder = clan_14_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_14_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_14_state->count = 0;
	current_xmachine_clan_holder = clan_13_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_13_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_13_state->count = 0;
	current_xmachine_clan_holder = clan_12_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_12_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_12_state->count = 0;
	current_xmachine_clan_holder = clan_11_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_11_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_11_state->count = 0;
	current_xmachine_clan_holder = clan_10_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_10_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_10_state->count = 0;
	current_xmachine_clan_holder = clan_09_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_09_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_09_state->count = 0;
	current_xmachine_clan_holder = clan_08_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_08_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_08_state->count = 0;
	current_xmachine_clan_holder = clan_07_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_07_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_07_state->count = 0;
	current_xmachine_clan_holder = clan_06_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_06_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_06_state->count = 0;
	current_xmachine_clan_holder = clan_05_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_05_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_05_state->count = 0;
	current_xmachine_clan_holder = clan_04_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_04_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_04_state->count = 0;
	current_xmachine_clan_holder = clan_03_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_03_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_03_state->count = 0;
	current_xmachine_clan_holder = clan_02_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_02_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_02_state->count = 0;
	current_xmachine_clan_holder = clan_01_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_01_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_01_state->count = 0;
	current_xmachine_clan_holder = clan_start_state->agents;
	while(current_xmachine_clan_holder)
	{
		temp_xmachine_clan_holder = current_xmachine_clan_holder->next;
		free_clan_agent(current_xmachine_clan_holder, clan_start_state);
		current_xmachine_clan_holder = temp_xmachine_clan_holder;
	}
	clan_start_state->count = 0;
}

void free_clan_states()
{
	free(clan_end_state);
	free(clan_17_state);
	free(clan_16_state);
	free(clan_15_state);
	free(clan_14_state);
	free(clan_13_state);
	free(clan_12_state);
	free(clan_11_state);
	free(clan_10_state);
	free(clan_09_state);
	free(clan_08_state);
	free(clan_07_state);
	free(clan_06_state);
	free(clan_05_state);
	free(clan_04_state);
	free(clan_03_state);
	free(clan_02_state);
	free(clan_01_state);
	free(clan_start_state);
}

void transition_clan_agent(xmachine_memory_clan_holder * tmp, xmachine_memory_clan_state * from_state, xmachine_memory_clan_state * to_state)
{
	if(tmp->prev == NULL) from_state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	add_clan_agent_internal(tmp->agent, to_state);
	free(tmp);
}

void add_clan_agent_internal(xmachine_memory_clan * agent, xmachine_memory_clan_state * state)
{
	xmachine_memory_clan_holder * current = (xmachine_memory_clan_holder *)malloc(sizeof(xmachine_memory_clan_holder));
	CHECK_POINTER(current);

	current->next = state->agents;
	current->prev = NULL;
	state->agents = current;
	if(current->next != NULL) current->next->prev = current;
	current->agent = agent;

	state->count++;
    current_node->agent_total++;
}

/** \fn void add_clan_agent(int cID, int cal_need, int cal_got, int cal_stored, int x, int y, int tcalories, int leaderID, members_needs * mneeds, indv_free * ifree, int indexID, int members, int linguistics[], int exchange_record[], int irecord, int targetX, int targetY, int cooperation, int hunting, int guanacos_record[], int igrecord)
 * \brief Add clan X-machine to the current being used X-machine list.
 * \param cID Variable for the X-machine memory.
 * \param cal_need Variable for the X-machine memory.
 * \param cal_got Variable for the X-machine memory.
 * \param cal_stored Variable for the X-machine memory.
 * \param x Variable for the X-machine memory.
 * \param y Variable for the X-machine memory.
 * \param tcalories Variable for the X-machine memory.
 * \param leaderID Variable for the X-machine memory.
 * \param mneeds Variable for the X-machine memory.
 * \param ifree Variable for the X-machine memory.
 * \param indexID Variable for the X-machine memory.
 * \param members Variable for the X-machine memory.
 * \param linguistics Variable for the X-machine memory.
 * \param exchange_record Variable for the X-machine memory.
 * \param irecord Variable for the X-machine memory.
 * \param targetX Variable for the X-machine memory.
 * \param targetY Variable for the X-machine memory.
 * \param cooperation Variable for the X-machine memory.
 * \param hunting Variable for the X-machine memory.
 * \param guanacos_record Variable for the X-machine memory.
 * \param igrecord Variable for the X-machine memory.
 */
void add_clan_agent(int cID, int cal_need, int cal_got, int cal_stored, int x, int y, int tcalories, int leaderID, members_needs mneeds, indv_free ifree, int indexID, int members, int linguistics[], int exchange_record[], int irecord, int targetX, int targetY, int cooperation, int hunting, int guanacos_record[], int igrecord)
{
	xmachine_memory_clan * current;

	current = init_clan_agent();
	/* new line added to handle dynamic agent creation*/
	current_xmachine_clan_next_state = clan_start_state;
	add_clan_agent_internal(current, current_xmachine_clan_next_state);

	current->cID = cID;
	current->cal_need = cal_need;
	current->cal_got = cal_got;
	current->cal_stored = cal_stored;
	current->x = x;
	current->y = y;
	current->tcalories = tcalories;
	current->leaderID = leaderID;
	copy_members_needs(&mneeds, &current->mneeds);
	copy_indv_free(&ifree, &current->ifree);
	current->indexID = indexID;
	current->members = members;
	memcpy(current->linguistics, linguistics, 100*sizeof(int));
	memcpy(current->exchange_record, exchange_record, 10*sizeof(int));
	current->irecord = irecord;
	current->targetX = targetX;
	current->targetY = targetY;
	current->cooperation = cooperation;
	current->hunting = hunting;
	memcpy(current->guanacos_record, guanacos_record, 15*sizeof(int));
	current->igrecord = igrecord;
}

xmachine_memory_patch_state * init_patch_state()
{
	xmachine_memory_patch_state * current = (xmachine_memory_patch_state *)malloc(sizeof(xmachine_memory_patch_state));
	CHECK_POINTER(current);

	current->agents = NULL;
	current->count = 0;

	return current;
}

xmachine_memory_patch * init_patch_agent()
{
	xmachine_memory_patch * current = (xmachine_memory_patch *)malloc(sizeof(xmachine_memory_patch));
	CHECK_POINTER(current);

	current->patchID = 0;
	current->pcalories = 0;
	current->gcalories = 0;
	current->repo = 0.0;
	current->tpatch = 0;
	current->x = 0;
	current->y = 0;
	current->repows = 0.0;
	current->repods = 0.0;
	current->season = 0;
	current->adultos = 0;
	current->pclans = 0;

	return current;
}

void free_patch_agent(xmachine_memory_patch_holder * tmp, xmachine_memory_patch_state * state)
{
	if(tmp->prev == NULL) state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	

	free(tmp->agent);
	free(tmp);
}

void unittest_init_patch_agent()
{
	current_xmachine_patch = (xmachine_memory_patch *)malloc(sizeof(xmachine_memory_patch));
	CHECK_POINTER(current);

		current_xmachine_patch->patchID = 0;
		current_xmachine_patch->pcalories = 0;
		current_xmachine_patch->gcalories = 0;
		current_xmachine_patch->repo = 0.0;
		current_xmachine_patch->tpatch = 0;
		current_xmachine_patch->x = 0;
		current_xmachine_patch->y = 0;
		current_xmachine_patch->repows = 0.0;
		current_xmachine_patch->repods = 0.0;
		current_xmachine_patch->season = 0;
		current_xmachine_patch->adultos = 0;
		current_xmachine_patch->pclans = 0;
	
}

void unittest_free_patch_agent()
{
	
	free(current_xmachine_patch);
}

void free_patch_agents()
{
	current_xmachine_patch_holder = patch_end_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_end_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_end_state->count = 0;
	current_xmachine_patch_holder = patch_9_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_9_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_9_state->count = 0;
	current_xmachine_patch_holder = patch_8_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_8_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_8_state->count = 0;
	current_xmachine_patch_holder = patch_7_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_7_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_7_state->count = 0;
	current_xmachine_patch_holder = patch_6_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_6_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_6_state->count = 0;
	current_xmachine_patch_holder = patch_5_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_5_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_5_state->count = 0;
	current_xmachine_patch_holder = patch_4_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_4_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_4_state->count = 0;
	current_xmachine_patch_holder = patch_3_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_3_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_3_state->count = 0;
	current_xmachine_patch_holder = patch_2_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_2_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_2_state->count = 0;
	current_xmachine_patch_holder = patch_1_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_1_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_1_state->count = 0;
	current_xmachine_patch_holder = patch_start_state->agents;
	while(current_xmachine_patch_holder)
	{
		temp_xmachine_patch_holder = current_xmachine_patch_holder->next;
		free_patch_agent(current_xmachine_patch_holder, patch_start_state);
		current_xmachine_patch_holder = temp_xmachine_patch_holder;
	}
	patch_start_state->count = 0;
}

void free_patch_states()
{
	free(patch_end_state);
	free(patch_9_state);
	free(patch_8_state);
	free(patch_7_state);
	free(patch_6_state);
	free(patch_5_state);
	free(patch_4_state);
	free(patch_3_state);
	free(patch_2_state);
	free(patch_1_state);
	free(patch_start_state);
}

void transition_patch_agent(xmachine_memory_patch_holder * tmp, xmachine_memory_patch_state * from_state, xmachine_memory_patch_state * to_state)
{
	if(tmp->prev == NULL) from_state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	add_patch_agent_internal(tmp->agent, to_state);
	free(tmp);
}

void add_patch_agent_internal(xmachine_memory_patch * agent, xmachine_memory_patch_state * state)
{
	xmachine_memory_patch_holder * current = (xmachine_memory_patch_holder *)malloc(sizeof(xmachine_memory_patch_holder));
	CHECK_POINTER(current);

	current->next = state->agents;
	current->prev = NULL;
	state->agents = current;
	if(current->next != NULL) current->next->prev = current;
	current->agent = agent;

	state->count++;
    current_node->agent_total++;
}

/** \fn void add_patch_agent(int patchID, int pcalories, int gcalories, float repo, int tpatch, int x, int y, float repows, float repods, int season, int adultos, int pclans)
 * \brief Add patch X-machine to the current being used X-machine list.
 * \param patchID Variable for the X-machine memory.
 * \param pcalories Variable for the X-machine memory.
 * \param gcalories Variable for the X-machine memory.
 * \param repo Variable for the X-machine memory.
 * \param tpatch Variable for the X-machine memory.
 * \param x Variable for the X-machine memory.
 * \param y Variable for the X-machine memory.
 * \param repows Variable for the X-machine memory.
 * \param repods Variable for the X-machine memory.
 * \param season Variable for the X-machine memory.
 * \param adultos Variable for the X-machine memory.
 * \param pclans Variable for the X-machine memory.
 */
void add_patch_agent(int patchID, int pcalories, int gcalories, float repo, int tpatch, int x, int y, float repows, float repods, int season, int adultos, int pclans)
{
	xmachine_memory_patch * current;

	current = init_patch_agent();
	/* new line added to handle dynamic agent creation*/
	current_xmachine_patch_next_state = patch_start_state;
	add_patch_agent_internal(current, current_xmachine_patch_next_state);

	current->patchID = patchID;
	current->pcalories = pcalories;
	current->gcalories = gcalories;
	current->repo = repo;
	current->tpatch = tpatch;
	current->x = x;
	current->y = y;
	current->repows = repows;
	current->repods = repods;
	current->season = season;
	current->adultos = adultos;
	current->pclans = pclans;
}

xmachine_memory_manada_guanacos_state * init_manada_guanacos_state()
{
	xmachine_memory_manada_guanacos_state * current = (xmachine_memory_manada_guanacos_state *)malloc(sizeof(xmachine_memory_manada_guanacos_state));
	CHECK_POINTER(current);

	current->agents = NULL;
	current->count = 0;

	return current;
}

xmachine_memory_manada_guanacos * init_manada_guanacos_agent()
{
	xmachine_memory_manada_guanacos * current = (xmachine_memory_manada_guanacos *)malloc(sizeof(xmachine_memory_manada_guanacos));
	CHECK_POINTER(current);

	current->familia = 0;
	current->x = 0;
	current->y = 0;
	current->targetX = 0;
	current->targetY = 0;
	current->count = 0;
	current->calorias = 0;
	current->adultos = 0;
	current->season = 0;

	return current;
}

void free_manada_guanacos_agent(xmachine_memory_manada_guanacos_holder * tmp, xmachine_memory_manada_guanacos_state * state)
{
	if(tmp->prev == NULL) state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	

	free(tmp->agent);
	free(tmp);
}

void unittest_init_manada_guanacos_agent()
{
	current_xmachine_manada_guanacos = (xmachine_memory_manada_guanacos *)malloc(sizeof(xmachine_memory_manada_guanacos));
	CHECK_POINTER(current);

		current_xmachine_manada_guanacos->familia = 0;
		current_xmachine_manada_guanacos->x = 0;
		current_xmachine_manada_guanacos->y = 0;
		current_xmachine_manada_guanacos->targetX = 0;
		current_xmachine_manada_guanacos->targetY = 0;
		current_xmachine_manada_guanacos->count = 0;
		current_xmachine_manada_guanacos->calorias = 0;
		current_xmachine_manada_guanacos->adultos = 0;
		current_xmachine_manada_guanacos->season = 0;
	
}

void unittest_free_manada_guanacos_agent()
{
	
	free(current_xmachine_manada_guanacos);
}

void free_manada_guanacos_agents()
{
	current_xmachine_manada_guanacos_holder = manada_guanacos_end_state->agents;
	while(current_xmachine_manada_guanacos_holder)
	{
		temp_xmachine_manada_guanacos_holder = current_xmachine_manada_guanacos_holder->next;
		free_manada_guanacos_agent(current_xmachine_manada_guanacos_holder, manada_guanacos_end_state);
		current_xmachine_manada_guanacos_holder = temp_xmachine_manada_guanacos_holder;
	}
	manada_guanacos_end_state->count = 0;
	current_xmachine_manada_guanacos_holder = manada_guanacos_3_state->agents;
	while(current_xmachine_manada_guanacos_holder)
	{
		temp_xmachine_manada_guanacos_holder = current_xmachine_manada_guanacos_holder->next;
		free_manada_guanacos_agent(current_xmachine_manada_guanacos_holder, manada_guanacos_3_state);
		current_xmachine_manada_guanacos_holder = temp_xmachine_manada_guanacos_holder;
	}
	manada_guanacos_3_state->count = 0;
	current_xmachine_manada_guanacos_holder = manada_guanacos_2_state->agents;
	while(current_xmachine_manada_guanacos_holder)
	{
		temp_xmachine_manada_guanacos_holder = current_xmachine_manada_guanacos_holder->next;
		free_manada_guanacos_agent(current_xmachine_manada_guanacos_holder, manada_guanacos_2_state);
		current_xmachine_manada_guanacos_holder = temp_xmachine_manada_guanacos_holder;
	}
	manada_guanacos_2_state->count = 0;
	current_xmachine_manada_guanacos_holder = manada_guanacos_1_state->agents;
	while(current_xmachine_manada_guanacos_holder)
	{
		temp_xmachine_manada_guanacos_holder = current_xmachine_manada_guanacos_holder->next;
		free_manada_guanacos_agent(current_xmachine_manada_guanacos_holder, manada_guanacos_1_state);
		current_xmachine_manada_guanacos_holder = temp_xmachine_manada_guanacos_holder;
	}
	manada_guanacos_1_state->count = 0;
	current_xmachine_manada_guanacos_holder = manada_guanacos_start_state->agents;
	while(current_xmachine_manada_guanacos_holder)
	{
		temp_xmachine_manada_guanacos_holder = current_xmachine_manada_guanacos_holder->next;
		free_manada_guanacos_agent(current_xmachine_manada_guanacos_holder, manada_guanacos_start_state);
		current_xmachine_manada_guanacos_holder = temp_xmachine_manada_guanacos_holder;
	}
	manada_guanacos_start_state->count = 0;
}

void free_manada_guanacos_states()
{
	free(manada_guanacos_end_state);
	free(manada_guanacos_3_state);
	free(manada_guanacos_2_state);
	free(manada_guanacos_1_state);
	free(manada_guanacos_start_state);
}

void transition_manada_guanacos_agent(xmachine_memory_manada_guanacos_holder * tmp, xmachine_memory_manada_guanacos_state * from_state, xmachine_memory_manada_guanacos_state * to_state)
{
	if(tmp->prev == NULL) from_state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	add_manada_guanacos_agent_internal(tmp->agent, to_state);
	free(tmp);
}

void add_manada_guanacos_agent_internal(xmachine_memory_manada_guanacos * agent, xmachine_memory_manada_guanacos_state * state)
{
	xmachine_memory_manada_guanacos_holder * current = (xmachine_memory_manada_guanacos_holder *)malloc(sizeof(xmachine_memory_manada_guanacos_holder));
	CHECK_POINTER(current);

	current->next = state->agents;
	current->prev = NULL;
	state->agents = current;
	if(current->next != NULL) current->next->prev = current;
	current->agent = agent;

	state->count++;
    current_node->agent_total++;
}

/** \fn void add_manada_guanacos_agent(int familia, int x, int y, int targetX, int targetY, int count, int calorias, int adultos, int season)
 * \brief Add manada_guanacos X-machine to the current being used X-machine list.
 * \param familia Variable for the X-machine memory.
 * \param x Variable for the X-machine memory.
 * \param y Variable for the X-machine memory.
 * \param targetX Variable for the X-machine memory.
 * \param targetY Variable for the X-machine memory.
 * \param count Variable for the X-machine memory.
 * \param calorias Variable for the X-machine memory.
 * \param adultos Variable for the X-machine memory.
 * \param season Variable for the X-machine memory.
 */
void add_manada_guanacos_agent(int familia, int x, int y, int targetX, int targetY, int count, int calorias, int adultos, int season)
{
	xmachine_memory_manada_guanacos * current;

	current = init_manada_guanacos_agent();
	/* new line added to handle dynamic agent creation*/
	current_xmachine_manada_guanacos_next_state = manada_guanacos_start_state;
	add_manada_guanacos_agent_internal(current, current_xmachine_manada_guanacos_next_state);

	current->familia = familia;
	current->x = x;
	current->y = y;
	current->targetX = targetX;
	current->targetY = targetY;
	current->count = count;
	current->calorias = calorias;
	current->adultos = adultos;
	current->season = season;
}

xmachine_memory_hunting_state * init_hunting_state()
{
	xmachine_memory_hunting_state * current = (xmachine_memory_hunting_state *)malloc(sizeof(xmachine_memory_hunting_state));
	CHECK_POINTER(current);

	current->agents = NULL;
	current->count = 0;

	return current;
}

xmachine_memory_hunting * init_hunting_agent()
{
	xmachine_memory_hunting * current = (xmachine_memory_hunting *)malloc(sizeof(xmachine_memory_hunting));
	CHECK_POINTER(current);

	current->calores = 0;
	current->isuccess = 0;
	current->skill_level = 0;
	init_int_static_array(current->clans, 2);
	current->x = 0;
	current->y = 0;
	init_int_static_array(current->guanacos, 30);
	init_int_static_array(current->destiny, 2);
	current->arrive = 0;
	current->start = 0;
	current->end = 0;

	return current;
}

void free_hunting_agent(xmachine_memory_hunting_holder * tmp, xmachine_memory_hunting_state * state)
{
	if(tmp->prev == NULL) state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	

	free(tmp->agent);
	free(tmp);
}

void unittest_init_hunting_agent()
{
	current_xmachine_hunting = (xmachine_memory_hunting *)malloc(sizeof(xmachine_memory_hunting));
	CHECK_POINTER(current);

		current_xmachine_hunting->calores = 0;
		current_xmachine_hunting->isuccess = 0;
		current_xmachine_hunting->skill_level = 0;
		init_int_static_array(current_xmachine_hunting->clans, 2);
		current_xmachine_hunting->x = 0;
		current_xmachine_hunting->y = 0;
		init_int_static_array(current_xmachine_hunting->guanacos, 30);
		init_int_static_array(current_xmachine_hunting->destiny, 2);
		current_xmachine_hunting->arrive = 0;
		current_xmachine_hunting->start = 0;
		current_xmachine_hunting->end = 0;
	
}

void unittest_free_hunting_agent()
{
	
	free(current_xmachine_hunting);
}

void free_hunting_agents()
{
	current_xmachine_hunting_holder = hunting_end_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_end_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_end_state->count = 0;
	current_xmachine_hunting_holder = hunting_4_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_4_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_4_state->count = 0;
	current_xmachine_hunting_holder = hunting_3_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_3_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_3_state->count = 0;
	current_xmachine_hunting_holder = hunting_2_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_2_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_2_state->count = 0;
	current_xmachine_hunting_holder = hunting_1_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_1_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_1_state->count = 0;
	current_xmachine_hunting_holder = hunting_start_state->agents;
	while(current_xmachine_hunting_holder)
	{
		temp_xmachine_hunting_holder = current_xmachine_hunting_holder->next;
		free_hunting_agent(current_xmachine_hunting_holder, hunting_start_state);
		current_xmachine_hunting_holder = temp_xmachine_hunting_holder;
	}
	hunting_start_state->count = 0;
}

void free_hunting_states()
{
	free(hunting_end_state);
	free(hunting_4_state);
	free(hunting_3_state);
	free(hunting_2_state);
	free(hunting_1_state);
	free(hunting_start_state);
}

void transition_hunting_agent(xmachine_memory_hunting_holder * tmp, xmachine_memory_hunting_state * from_state, xmachine_memory_hunting_state * to_state)
{
	if(tmp->prev == NULL) from_state->agents = tmp->next;
	else tmp->prev->next = tmp->next;
	if(tmp->next != NULL) tmp->next->prev = tmp->prev;

	add_hunting_agent_internal(tmp->agent, to_state);
	free(tmp);
}

void add_hunting_agent_internal(xmachine_memory_hunting * agent, xmachine_memory_hunting_state * state)
{
	xmachine_memory_hunting_holder * current = (xmachine_memory_hunting_holder *)malloc(sizeof(xmachine_memory_hunting_holder));
	CHECK_POINTER(current);

	current->next = state->agents;
	current->prev = NULL;
	state->agents = current;
	if(current->next != NULL) current->next->prev = current;
	current->agent = agent;

	state->count++;
    current_node->agent_total++;
}

/** \fn void add_hunting_agent(int calores, int isuccess, int skill_level, int clans[], int x, int y, int guanacos[], int destiny[], int arrive, int start, int end)
 * \brief Add hunting X-machine to the current being used X-machine list.
 * \param calores Variable for the X-machine memory.
 * \param isuccess Variable for the X-machine memory.
 * \param skill_level Variable for the X-machine memory.
 * \param clans Variable for the X-machine memory.
 * \param x Variable for the X-machine memory.
 * \param y Variable for the X-machine memory.
 * \param guanacos Variable for the X-machine memory.
 * \param destiny Variable for the X-machine memory.
 * \param arrive Variable for the X-machine memory.
 * \param start Variable for the X-machine memory.
 * \param end Variable for the X-machine memory.
 */
void add_hunting_agent(int calores, int isuccess, int skill_level, int clans[], int x, int y, int guanacos[], int destiny[], int arrive, int start, int end)
{
	xmachine_memory_hunting * current;

	current = init_hunting_agent();
	/* new line added to handle dynamic agent creation*/
	current_xmachine_hunting_next_state = hunting_start_state;
	add_hunting_agent_internal(current, current_xmachine_hunting_next_state);

	current->calores = calores;
	current->isuccess = isuccess;
	current->skill_level = skill_level;
	memcpy(current->clans, clans, 2*sizeof(int));
	current->x = x;
	current->y = y;
	memcpy(current->guanacos, guanacos, 30*sizeof(int));
	memcpy(current->destiny, destiny, 2*sizeof(int));
	current->arrive = arrive;
	current->start = start;
	current->end = end;
}


/* freexmachines */
/** \fn void freexmachines()
 * \brief Free the currently being used X-machine list.
 */
void freexmachines()
{
	free_indv_agents();
	free_clan_agents();
	free_patch_agents();
	free_manada_guanacos_agents();
	free_hunting_agents();
	
}


/** \fn void set_indvID(int indvID)
 * \brief Set indvID memory variable for current X-machine.
 * \param indvID New value for variable.
 */
void set_indvID(int indvID)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).indvID = indvID;
}

/** \fn int get_indvID()
 * \brief Get indvID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_indvID()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).indvID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cID(int cID)
 * \brief Set cID memory variable for current X-machine.
 * \param cID New value for variable.
 */
void set_cID(int cID)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).cID = cID;
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).cID = cID;
}

/** \fn int get_cID()
 * \brief Get cID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cID()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).cID;
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).cID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cal_needs(int cal_needs)
 * \brief Set cal_needs memory variable for current X-machine.
 * \param cal_needs New value for variable.
 */
void set_cal_needs(int cal_needs)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).cal_needs = cal_needs;
}

/** \fn int get_cal_needs()
 * \brief Get cal_needs memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cal_needs()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).cal_needs;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_icalories(int icalories)
 * \brief Set icalories memory variable for current X-machine.
 * \param icalories New value for variable.
 */
void set_icalories(int icalories)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).icalories = icalories;
}

/** \fn int get_icalories()
 * \brief Get icalories memory variable from current X-machine.
 * \return Value for variable.
 */
int get_icalories()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).icalories;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_patchID(int patchID)
 * \brief Set patchID memory variable for current X-machine.
 * \param patchID New value for variable.
 */
void set_patchID(int patchID)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).patchID = patchID;
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).patchID = patchID;
}

/** \fn int get_patchID()
 * \brief Get patchID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_patchID()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).patchID;
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).patchID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_age(int age)
 * \brief Set age memory variable for current X-machine.
 * \param age New value for variable.
 */
void set_age(int age)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).age = age;
}

/** \fn int get_age()
 * \brief Get age memory variable from current X-machine.
 * \return Value for variable.
 */
int get_age()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).age;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_sex(int sex)
 * \brief Set sex memory variable for current X-machine.
 * \param sex New value for variable.
 */
void set_sex(int sex)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).sex = sex;
}

/** \fn int get_sex()
 * \brief Get sex memory variable from current X-machine.
 * \return Value for variable.
 */
int get_sex()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).sex;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_pregnant(int pregnant)
 * \brief Set pregnant memory variable for current X-machine.
 * \param pregnant New value for variable.
 */
void set_pregnant(int pregnant)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).pregnant = pregnant;
}

/** \fn int get_pregnant()
 * \brief Get pregnant memory variable from current X-machine.
 * \return Value for variable.
 */
int get_pregnant()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).pregnant;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_lead(int lead)
 * \brief Set lead memory variable for current X-machine.
 * \param lead New value for variable.
 */
void set_lead(int lead)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).lead = lead;
}

/** \fn int get_lead()
 * \brief Get lead memory variable from current X-machine.
 * \return Value for variable.
 */
int get_lead()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).lead;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_marriable(int marriable)
 * \brief Set marriable memory variable for current X-machine.
 * \param marriable New value for variable.
 */
void set_marriable(int marriable)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).marriable = marriable;
}

/** \fn int get_marriable()
 * \brief Get marriable memory variable from current X-machine.
 * \return Value for variable.
 */
int get_marriable()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).marriable;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn int get_ancestors()
 * \brief Get ancestors memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_ancestors()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).ancestors;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn int get_ancestorsClan()
 * \brief Get ancestorsClan memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_ancestorsClan()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).ancestorsClan;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_married(int married)
 * \brief Set married memory variable for current X-machine.
 * \param married New value for variable.
 */
void set_married(int married)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).married = married;
}

/** \fn int get_married()
 * \brief Get married memory variable from current X-machine.
 * \return Value for variable.
 */
int get_married()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).married;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_pareja(int pareja)
 * \brief Set pareja memory variable for current X-machine.
 * \param pareja New value for variable.
 */
void set_pareja(int pareja)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).pareja = pareja;
}

/** \fn int get_pareja()
 * \brief Get pareja memory variable from current X-machine.
 * \return Value for variable.
 */
int get_pareja()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).pareja;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_embarazable(int embarazable)
 * \brief Set embarazable memory variable for current X-machine.
 * \param embarazable New value for variable.
 */
void set_embarazable(int embarazable)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).embarazable = embarazable;
}

/** \fn int get_embarazable()
 * \brief Get embarazable memory variable from current X-machine.
 * \return Value for variable.
 */
int get_embarazable()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).embarazable;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_month(int month)
 * \brief Set month memory variable for current X-machine.
 * \param month New value for variable.
 */
void set_month(int month)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).month = month;
}

/** \fn int get_month()
 * \brief Get month memory variable from current X-machine.
 * \return Value for variable.
 */
int get_month()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).month;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_motherID(int motherID)
 * \brief Set motherID memory variable for current X-machine.
 * \param motherID New value for variable.
 */
void set_motherID(int motherID)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).motherID = motherID;
}

/** \fn int get_motherID()
 * \brief Get motherID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_motherID()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).motherID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn int get_husband_info()
 * \brief Get husband_info memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_husband_info()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).husband_info;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_widow(int widow)
 * \brief Set widow memory variable for current X-machine.
 * \param widow New value for variable.
 */
void set_widow(int widow)
{
	if(current_xmachine->xmachine_indv) (*current_xmachine->xmachine_indv).widow = widow;
}

/** \fn int get_widow()
 * \brief Get widow memory variable from current X-machine.
 * \return Value for variable.
 */
int get_widow()
{
	if(current_xmachine->xmachine_indv) return (*current_xmachine->xmachine_indv).widow;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cal_need(int cal_need)
 * \brief Set cal_need memory variable for current X-machine.
 * \param cal_need New value for variable.
 */
void set_cal_need(int cal_need)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).cal_need = cal_need;
}

/** \fn int get_cal_need()
 * \brief Get cal_need memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cal_need()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).cal_need;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cal_got(int cal_got)
 * \brief Set cal_got memory variable for current X-machine.
 * \param cal_got New value for variable.
 */
void set_cal_got(int cal_got)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).cal_got = cal_got;
}

/** \fn int get_cal_got()
 * \brief Get cal_got memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cal_got()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).cal_got;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cal_stored(int cal_stored)
 * \brief Set cal_stored memory variable for current X-machine.
 * \param cal_stored New value for variable.
 */
void set_cal_stored(int cal_stored)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).cal_stored = cal_stored;
}

/** \fn int get_cal_stored()
 * \brief Get cal_stored memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cal_stored()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).cal_stored;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_x(int x)
 * \brief Set x memory variable for current X-machine.
 * \param x New value for variable.
 */
void set_x(int x)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).x = x;
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).x = x;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).x = x;
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).x = x;
}

/** \fn int get_x()
 * \brief Get x memory variable from current X-machine.
 * \return Value for variable.
 */
int get_x()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).x;
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).x;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).x;
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).x;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_y(int y)
 * \brief Set y memory variable for current X-machine.
 * \param y New value for variable.
 */
void set_y(int y)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).y = y;
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).y = y;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).y = y;
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).y = y;
}

/** \fn int get_y()
 * \brief Get y memory variable from current X-machine.
 * \return Value for variable.
 */
int get_y()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).y;
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).y;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).y;
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).y;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_tcalories(int tcalories)
 * \brief Set tcalories memory variable for current X-machine.
 * \param tcalories New value for variable.
 */
void set_tcalories(int tcalories)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).tcalories = tcalories;
}

/** \fn int get_tcalories()
 * \brief Get tcalories memory variable from current X-machine.
 * \return Value for variable.
 */
int get_tcalories()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).tcalories;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_leaderID(int leaderID)
 * \brief Set leaderID memory variable for current X-machine.
 * \param leaderID New value for variable.
 */
void set_leaderID(int leaderID)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).leaderID = leaderID;
}

/** \fn int get_leaderID()
 * \brief Get leaderID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_leaderID()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).leaderID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn members_needs get_mneeds()
 * \brief Get mneeds memory variable from current X-machine.
 * \return Value for variable.
 */
members_needs * get_mneeds()
{
	if(current_xmachine->xmachine_clan) return &(*current_xmachine->xmachine_clan).mneeds;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn indv_free get_ifree()
 * \brief Get ifree memory variable from current X-machine.
 * \return Value for variable.
 */
indv_free * get_ifree()
{
	if(current_xmachine->xmachine_clan) return &(*current_xmachine->xmachine_clan).ifree;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_indexID(int indexID)
 * \brief Set indexID memory variable for current X-machine.
 * \param indexID New value for variable.
 */
void set_indexID(int indexID)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).indexID = indexID;
}

/** \fn int get_indexID()
 * \brief Get indexID memory variable from current X-machine.
 * \return Value for variable.
 */
int get_indexID()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).indexID;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_members(int members)
 * \brief Set members memory variable for current X-machine.
 * \param members New value for variable.
 */
void set_members(int members)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).members = members;
}

/** \fn int get_members()
 * \brief Get members memory variable from current X-machine.
 * \return Value for variable.
 */
int get_members()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).members;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn int get_linguistics()
 * \brief Get linguistics memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_linguistics()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).linguistics;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn int get_exchange_record()
 * \brief Get exchange_record memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_exchange_record()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).exchange_record;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_irecord(int irecord)
 * \brief Set irecord memory variable for current X-machine.
 * \param irecord New value for variable.
 */
void set_irecord(int irecord)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).irecord = irecord;
}

/** \fn int get_irecord()
 * \brief Get irecord memory variable from current X-machine.
 * \return Value for variable.
 */
int get_irecord()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).irecord;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_targetX(int targetX)
 * \brief Set targetX memory variable for current X-machine.
 * \param targetX New value for variable.
 */
void set_targetX(int targetX)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).targetX = targetX;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).targetX = targetX;
}

/** \fn int get_targetX()
 * \brief Get targetX memory variable from current X-machine.
 * \return Value for variable.
 */
int get_targetX()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).targetX;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).targetX;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_targetY(int targetY)
 * \brief Set targetY memory variable for current X-machine.
 * \param targetY New value for variable.
 */
void set_targetY(int targetY)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).targetY = targetY;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).targetY = targetY;
}

/** \fn int get_targetY()
 * \brief Get targetY memory variable from current X-machine.
 * \return Value for variable.
 */
int get_targetY()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).targetY;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).targetY;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_cooperation(int cooperation)
 * \brief Set cooperation memory variable for current X-machine.
 * \param cooperation New value for variable.
 */
void set_cooperation(int cooperation)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).cooperation = cooperation;
}

/** \fn int get_cooperation()
 * \brief Get cooperation memory variable from current X-machine.
 * \return Value for variable.
 */
int get_cooperation()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).cooperation;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_hunting(int hunting)
 * \brief Set hunting memory variable for current X-machine.
 * \param hunting New value for variable.
 */
void set_hunting(int hunting)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).hunting = hunting;
}

/** \fn int get_hunting()
 * \brief Get hunting memory variable from current X-machine.
 * \return Value for variable.
 */
int get_hunting()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).hunting;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn int get_guanacos_record()
 * \brief Get guanacos_record memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_guanacos_record()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).guanacos_record;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_igrecord(int igrecord)
 * \brief Set igrecord memory variable for current X-machine.
 * \param igrecord New value for variable.
 */
void set_igrecord(int igrecord)
{
	if(current_xmachine->xmachine_clan) (*current_xmachine->xmachine_clan).igrecord = igrecord;
}

/** \fn int get_igrecord()
 * \brief Get igrecord memory variable from current X-machine.
 * \return Value for variable.
 */
int get_igrecord()
{
	if(current_xmachine->xmachine_clan) return (*current_xmachine->xmachine_clan).igrecord;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_pcalories(int pcalories)
 * \brief Set pcalories memory variable for current X-machine.
 * \param pcalories New value for variable.
 */
void set_pcalories(int pcalories)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).pcalories = pcalories;
}

/** \fn int get_pcalories()
 * \brief Get pcalories memory variable from current X-machine.
 * \return Value for variable.
 */
int get_pcalories()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).pcalories;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_gcalories(int gcalories)
 * \brief Set gcalories memory variable for current X-machine.
 * \param gcalories New value for variable.
 */
void set_gcalories(int gcalories)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).gcalories = gcalories;
}

/** \fn int get_gcalories()
 * \brief Get gcalories memory variable from current X-machine.
 * \return Value for variable.
 */
int get_gcalories()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).gcalories;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_repo(float repo)
 * \brief Set repo memory variable for current X-machine.
 * \param repo New value for variable.
 */
void set_repo(float repo)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).repo = repo;
}

/** \fn float get_repo()
 * \brief Get repo memory variable from current X-machine.
 * \return Value for variable.
 */
float get_repo()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).repo;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (float)0;
}

/** \fn void set_tpatch(int tpatch)
 * \brief Set tpatch memory variable for current X-machine.
 * \param tpatch New value for variable.
 */
void set_tpatch(int tpatch)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).tpatch = tpatch;
}

/** \fn int get_tpatch()
 * \brief Get tpatch memory variable from current X-machine.
 * \return Value for variable.
 */
int get_tpatch()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).tpatch;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_repows(float repows)
 * \brief Set repows memory variable for current X-machine.
 * \param repows New value for variable.
 */
void set_repows(float repows)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).repows = repows;
}

/** \fn float get_repows()
 * \brief Get repows memory variable from current X-machine.
 * \return Value for variable.
 */
float get_repows()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).repows;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (float)0;
}

/** \fn void set_repods(float repods)
 * \brief Set repods memory variable for current X-machine.
 * \param repods New value for variable.
 */
void set_repods(float repods)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).repods = repods;
}

/** \fn float get_repods()
 * \brief Get repods memory variable from current X-machine.
 * \return Value for variable.
 */
float get_repods()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).repods;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (float)0;
}

/** \fn void set_season(int season)
 * \brief Set season memory variable for current X-machine.
 * \param season New value for variable.
 */
void set_season(int season)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).season = season;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).season = season;
}

/** \fn int get_season()
 * \brief Get season memory variable from current X-machine.
 * \return Value for variable.
 */
int get_season()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).season;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).season;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_adultos(int adultos)
 * \brief Set adultos memory variable for current X-machine.
 * \param adultos New value for variable.
 */
void set_adultos(int adultos)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).adultos = adultos;
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).adultos = adultos;
}

/** \fn int get_adultos()
 * \brief Get adultos memory variable from current X-machine.
 * \return Value for variable.
 */
int get_adultos()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).adultos;
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).adultos;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_pclans(int pclans)
 * \brief Set pclans memory variable for current X-machine.
 * \param pclans New value for variable.
 */
void set_pclans(int pclans)
{
	if(current_xmachine->xmachine_patch) (*current_xmachine->xmachine_patch).pclans = pclans;
}

/** \fn int get_pclans()
 * \brief Get pclans memory variable from current X-machine.
 * \return Value for variable.
 */
int get_pclans()
{
	if(current_xmachine->xmachine_patch) return (*current_xmachine->xmachine_patch).pclans;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_familia(int familia)
 * \brief Set familia memory variable for current X-machine.
 * \param familia New value for variable.
 */
void set_familia(int familia)
{
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).familia = familia;
}

/** \fn int get_familia()
 * \brief Get familia memory variable from current X-machine.
 * \return Value for variable.
 */
int get_familia()
{
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).familia;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_count(int count)
 * \brief Set count memory variable for current X-machine.
 * \param count New value for variable.
 */
void set_count(int count)
{
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).count = count;
}

/** \fn int get_count()
 * \brief Get count memory variable from current X-machine.
 * \return Value for variable.
 */
int get_count()
{
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).count;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_calorias(int calorias)
 * \brief Set calorias memory variable for current X-machine.
 * \param calorias New value for variable.
 */
void set_calorias(int calorias)
{
	if(current_xmachine->xmachine_manada_guanacos) (*current_xmachine->xmachine_manada_guanacos).calorias = calorias;
}

/** \fn int get_calorias()
 * \brief Get calorias memory variable from current X-machine.
 * \return Value for variable.
 */
int get_calorias()
{
	if(current_xmachine->xmachine_manada_guanacos) return (*current_xmachine->xmachine_manada_guanacos).calorias;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_calores(int calores)
 * \brief Set calores memory variable for current X-machine.
 * \param calores New value for variable.
 */
void set_calores(int calores)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).calores = calores;
}

/** \fn int get_calores()
 * \brief Get calores memory variable from current X-machine.
 * \return Value for variable.
 */
int get_calores()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).calores;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_isuccess(int isuccess)
 * \brief Set isuccess memory variable for current X-machine.
 * \param isuccess New value for variable.
 */
void set_isuccess(int isuccess)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).isuccess = isuccess;
}

/** \fn int get_isuccess()
 * \brief Get isuccess memory variable from current X-machine.
 * \return Value for variable.
 */
int get_isuccess()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).isuccess;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_skill_level(int skill_level)
 * \brief Set skill_level memory variable for current X-machine.
 * \param skill_level New value for variable.
 */
void set_skill_level(int skill_level)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).skill_level = skill_level;
}

/** \fn int get_skill_level()
 * \brief Get skill_level memory variable from current X-machine.
 * \return Value for variable.
 */
int get_skill_level()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).skill_level;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn int get_clans()
 * \brief Get clans memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_clans()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).clans;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn int get_guanacos()
 * \brief Get guanacos memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_guanacos()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).guanacos;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn int get_destiny()
 * \brief Get destiny memory variable from current X-machine.
 * \return Value for variable.
 */
int * get_destiny()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).destiny;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return NULL;
}

/** \fn void set_arrive(int arrive)
 * \brief Set arrive memory variable for current X-machine.
 * \param arrive New value for variable.
 */
void set_arrive(int arrive)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).arrive = arrive;
}

/** \fn int get_arrive()
 * \brief Get arrive memory variable from current X-machine.
 * \return Value for variable.
 */
int get_arrive()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).arrive;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_start(int start)
 * \brief Set start memory variable for current X-machine.
 * \param start New value for variable.
 */
void set_start(int start)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).start = start;
}

/** \fn int get_start()
 * \brief Get start memory variable from current X-machine.
 * \return Value for variable.
 */
int get_start()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).start;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}

/** \fn void set_end(int end)
 * \brief Set end memory variable for current X-machine.
 * \param end New value for variable.
 */
void set_end(int end)
{
	if(current_xmachine->xmachine_hunting) (*current_xmachine->xmachine_hunting).end = end;
}

/** \fn int get_end()
 * \brief Get end memory variable from current X-machine.
 * \return Value for variable.
 */
int get_end()
{
	if(current_xmachine->xmachine_hunting) return (*current_xmachine->xmachine_hunting).end;

    // suppress compiler warning by returning dummy value /
    // this statement should rightfully NEVER be reached /
    return (int)0;
}


/** \fn double agent_get_range()
 * \brief Fixed routine to get the range from current X-machine
  * \return Value of range
  */
double agent_get_range()
{
    double value = 0.0;
    /*if (current_xmachine->xmachine_indv) value = current_xmachine->xmachine_indv->;*/
    /*if (current_xmachine->xmachine_clan) value = current_xmachine->xmachine_clan->;*/
    /*if (current_xmachine->xmachine_patch) value = current_xmachine->xmachine_patch->;*/
    /*if (current_xmachine->xmachine_manada_guanacos) value = current_xmachine->xmachine_manada_guanacos->;*/
    /*if (current_xmachine->xmachine_hunting) value = current_xmachine->xmachine_hunting->;*/

    return value;
}

/** \fn int agent_get_id()
 * \brief Fixed routine to get the id for the current X-machine
  * \return Value of agent id
  */
int agent_get_id()
{
    int value = 0;
    /*if (current_xmachine->xmachine_indv) value = current_xmachine->xmachine_indv->;*/
    /*if (current_xmachine->xmachine_clan) value = current_xmachine->xmachine_clan->;*/
    /*if (current_xmachine->xmachine_patch) value = current_xmachine->xmachine_patch->;*/
    /*if (current_xmachine->xmachine_manada_guanacos) value = current_xmachine->xmachine_manada_guanacos->;*/
    /*if (current_xmachine->xmachine_hunting) value = current_xmachine->xmachine_hunting->;*/

    return value;
}

/** \fn double agent_get_x()
 * \brief Fixed routine to get the x coordinate from current X-machine
  * \return Value of x coordinate
  */
double agent_get_x()
{
    double value = 0.0;
    /*if (current_xmachine->xmachine_indv) value = current_xmachine->xmachine_indv->0.0;*/
    /*if (current_xmachine->xmachine_clan) value = current_xmachine->xmachine_clan->x;*/
    /*if (current_xmachine->xmachine_patch) value = current_xmachine->xmachine_patch->x;*/
    /*if (current_xmachine->xmachine_manada_guanacos) value = current_xmachine->xmachine_manada_guanacos->x;*/
    /*if (current_xmachine->xmachine_hunting) value = current_xmachine->xmachine_hunting->x;*/

    return value;
}
/** \fn double agent_get_y()
 * \brief Fixed routine to get the y coordinate from current X-machine
  * \return Value of y coordinate
  */
double agent_get_y()
{
    double value = 0.0;
    /*if (current_xmachine->xmachine_indv) value = current_xmachine->xmachine_indv->0.0;*/
    /*if (current_xmachine->xmachine_clan) value = current_xmachine->xmachine_clan->y;*/
    /*if (current_xmachine->xmachine_patch) value = current_xmachine->xmachine_patch->y;*/
    /*if (current_xmachine->xmachine_manada_guanacos) value = current_xmachine->xmachine_manada_guanacos->y;*/
    /*if (current_xmachine->xmachine_hunting) value = current_xmachine->xmachine_hunting->y;*/

    return value;
}
/** \fn double agent_get_z()
 * \brief Fixed routine to get the z coordinate from current X-machine
  * \return Value of z coordinate
  */
double agent_get_z()
{
    double value = 0.0;

    return value;
}

/** \fn void add_node(int node_id, double minx, double maxx, double miny, double maxy, double minz, double maxz)
 * \brief Add a node to the node list.
 * \param node_id The node ID.
 * \param minx The minumum value on the x-axis of the bounding volume.
 * \param maxx The maximum value on the x-axis of the bounding volume.
 * \param miny The minumum value on the y-axis of the bounding volume.
 * \param maxy The maximum value on the y-axis of the bounding volume.
 * \param minz The minumum value on the z-axis of the bounding volume.
 * \param maxz The maximum value on the z-axis of the bounding volume.
 */
void add_node(int node_id, double minx, double maxx, double miny, double maxy, double minz, double maxz)
{
	node_information * current = *p_node_info;
	node_information * tmp = NULL;

	while(current)
	{
		tmp = current;
		current = current->next;
	}

	current = (node_information *)malloc(sizeof(node_information));
		CHECK_POINTER(current);
	if(node_id == node_number) current_node = current;
	if(tmp)
	{
		tmp->next = current;
	}
	else
	{
		*p_node_info = current;
	}

	current->next = NULL;
	current->node_id = node_id;
	current->agents_in_halo = 0;
	current->agent_total = 0;
	current->agents = NULL;
	current->information_messages = NULL;
	current->indgetcalories_messages = NULL;
	current->leader_messages = NULL;
	current->ancestor_messages = NULL;
	current->peticionID_messages = NULL;
	current->family_messages = NULL;
	current->death_messages = NULL;
	current->widow_messages = NULL;
	current->informationDivide_messages = NULL;
	current->clan_info_messages = NULL;
	current->clangetcalories_messages = NULL;
	current->freeGirls_messages = NULL;
	current->propuesta_messages = NULL;
	current->confirProp_messages = NULL;
	current->marriage_messages = NULL;
	current->respuestaID_messages = NULL;
	current->lmarriage_messages = NULL;
	current->warningDivide_messages = NULL;
	current->transfer_messages = NULL;
	current->clanmove_messages = NULL;
	current->xxx_messages = NULL;
	current->yyy_messages = NULL;
	current->clanspatch_messages = NULL;
	current->guanacospatch_messages = NULL;
	current->infoGuanacos_messages = NULL;
	current->repCal_messages = NULL;
	current->adultospatch_messages = NULL;
	current->reproduccionguanacos_messages = NULL;
	current->numGuanacos_messages = NULL;
	current->infoHunter_messages = NULL;

	current->information_message_no = 0;
	current->indgetcalories_message_no = 0;
	current->leader_message_no = 0;
	current->ancestor_message_no = 0;
	current->peticionID_message_no = 0;
	current->family_message_no = 0;
	current->death_message_no = 0;
	current->widow_message_no = 0;
	current->informationDivide_message_no = 0;
	current->clan_info_message_no = 0;
	current->clangetcalories_message_no = 0;
	current->freeGirls_message_no = 0;
	current->propuesta_message_no = 0;
	current->confirProp_message_no = 0;
	current->marriage_message_no = 0;
	current->respuestaID_message_no = 0;
	current->lmarriage_message_no = 0;
	current->warningDivide_message_no = 0;
	current->transfer_message_no = 0;
	current->clanmove_message_no = 0;
	current->xxx_message_no = 0;
	current->yyy_message_no = 0;
	current->clanspatch_message_no = 0;
	current->guanacospatch_message_no = 0;
	current->infoGuanacos_message_no = 0;
	current->repCal_message_no = 0;
	current->adultospatch_message_no = 0;
	current->reproduccionguanacos_message_no = 0;
	current->numGuanacos_message_no = 0;
	current->infoHunter_message_no = 0;
	current->indv_agents = NULL;
	current->indv_agent_no = 0;
	current->clan_agents = NULL;
	current->clan_agent_no = 0;
	current->patch_agents = NULL;
	current->patch_agent_no = 0;
	current->manada_guanacos_agents = NULL;
	current->manada_guanacos_agent_no = 0;
	current->hunting_agents = NULL;
	current->hunting_agent_no = 0;


	current->partition_data[0] = minx;
	current->partition_data[1] = maxx;
	current->partition_data[2] = miny;
	current->partition_data[3] = maxy;
	current->partition_data[4] = minz;
	current->partition_data[5] = maxz;
}

/**\fn void free_node_info()
 * \brief Free the node list.
 */
void free_node_info()
{
	node_information * tmp, * head;
	head = *p_node_info;

	while(head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	*p_node_info = NULL;
}

/** \fn void clean_up(int code)
 * \brief Add a node to the node list.
 * \param code The error code (zero is no error).
 */
void clean_up(int code)
{
    int rc;
	FILE *file;
	char data[100];

	free(current_xmachine);
	/* Free x-machine memory */
	freexmachines();
	/* Free space partitions linked list */
	free_node_info();
	/* Free output list */
	free_FLAME_outputs(&FLAME_outputs);
	/* Free agent states */
	free_indv_states();
	free_clan_states();
	free_patch_states();
	free_manada_guanacos_states();
	free_hunting_states();


	/* Free index maps */


	/* Free message boards */

	rc = MB_Delete(&b_information);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'information' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'information' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'information' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_indgetcalories);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'indgetcalories' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'indgetcalories' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'indgetcalories' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_leader);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'leader' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'leader' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'leader' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_ancestor);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'ancestor' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'ancestor' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'ancestor' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_peticionID);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'peticionID' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'peticionID' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'peticionID' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_family);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'family' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'family' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'family' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_death);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'death' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'death' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'death' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_widow);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'widow' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'widow' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'widow' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_informationDivide);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'informationDivide' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'informationDivide' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'informationDivide' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_clan_info);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'clan_info' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clan_info' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clan_info' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_clangetcalories);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'clangetcalories' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clangetcalories' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clangetcalories' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_freeGirls);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'freeGirls' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'freeGirls' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'freeGirls' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_propuesta);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'propuesta' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'propuesta' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'propuesta' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_confirProp);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'confirProp' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'confirProp' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'confirProp' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_marriage);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'marriage' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'marriage' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'marriage' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_respuestaID);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'respuestaID' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'respuestaID' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'respuestaID' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_lmarriage);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'lmarriage' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'lmarriage' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'lmarriage' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_warningDivide);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'warningDivide' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'warningDivide' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'warningDivide' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_transfer);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'transfer' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'transfer' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'transfer' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_clanmove);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'clanmove' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanmove' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanmove' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_xxx);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'xxx' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'xxx' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'xxx' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_yyy);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'yyy' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'yyy' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'yyy' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_clanspatch);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'clanspatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanspatch' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanspatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_guanacospatch);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'guanacospatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'guanacospatch' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'guanacospatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_infoGuanacos);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'infoGuanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoGuanacos' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoGuanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_repCal);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'repCal' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'repCal' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'repCal' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_adultospatch);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'adultospatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'adultospatch' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'adultospatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_reproduccionguanacos);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'reproduccionguanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_numGuanacos);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'numGuanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'numGuanacos' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'numGuanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif

	rc = MB_Delete(&b_infoHunter);
	#ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not delete 'infoHunter' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoHunter' board has not been created?\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoHunter' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_Delete returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif


    rc = MB_Env_Finalise();
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not finalise MB environment\n");
       switch(rc) {
           case MB_ERR_ENV:
               fprintf(stderr, "\t reason: MB environment not yet started?\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Env_Finalise returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }

	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif



        /* Clear MPI_Datatypes */
        MPI_Type_free(&spacePartitionType);
        
        /* MPI_Type_free(&xmachineindvType); */
        
        /* MPI_Type_free(&xmachineclanType); */
        
        /* MPI_Type_free(&xmachinepatchType); */
        
        /* MPI_Type_free(&xmachinemanada_guanacosType); */
        
        /* MPI_Type_free(&xmachinehuntingType); */
        
        
        /* MPI_Type_free(&messageinformationType); */
        
        /* MPI_Type_free(&messageindgetcaloriesType); */
        
        /* MPI_Type_free(&messageleaderType); */
        
        /* MPI_Type_free(&messageancestorType); */
        
        /* MPI_Type_free(&messagepeticionIDType); */
        
        /* MPI_Type_free(&messagefamilyType); */
        
        /* MPI_Type_free(&messagedeathType); */
        
        /* MPI_Type_free(&messagewidowType); */
        
        /* MPI_Type_free(&messageinformationDivideType); */
        
        /* MPI_Type_free(&messageclan_infoType); */
        
        /* MPI_Type_free(&messageclangetcaloriesType); */
        
        /* MPI_Type_free(&messagefreeGirlsType); */
        
        /* MPI_Type_free(&messagepropuestaType); */
        
        /* MPI_Type_free(&messageconfirPropType); */
        
        /* MPI_Type_free(&messagemarriageType); */
        
        /* MPI_Type_free(&messagerespuestaIDType); */
        
        /* MPI_Type_free(&messagelmarriageType); */
        
        /* MPI_Type_free(&messagewarningDivideType); */
        
        /* MPI_Type_free(&messagetransferType); */
        
        /* MPI_Type_free(&messageclanmoveType); */
        
        /* MPI_Type_free(&messagexxxType); */
        
        /* MPI_Type_free(&messageyyyType); */
        
        /* MPI_Type_free(&messageclanspatchType); */
        
        /* MPI_Type_free(&messageguanacospatchType); */
        
        /* MPI_Type_free(&messageinfoGuanacosType); */
        
        /* MPI_Type_free(&messagerepCalType); */
        
        /* MPI_Type_free(&messageadultospatchType); */
        
        /* MPI_Type_free(&messagereproduccionguanacosType); */
        
        /* MPI_Type_free(&messagenumGuanacosType); */
        
        /* MPI_Type_free(&messageinfoHunterType); */
        


		/* MPI finalise routine */
		MPI_Finalize();

		if(node_number == 0)
		{

	/* Write log file */
	sprintf(data, "%slog.xml", outputpath);
	file = fopen(data, "a");
	fputs("<!-- <totaltime> unit: seconds -->\n", file);
	fputs("<totaltime>", file);
	sprintf(data, "%.3f", total_time);
	fputs(data, file);
	fputs("</totaltime>\n", file);
	/*fputs("<totalmessages>", file);
	sprintf(data, "%i", total_messages);
	fputs(data, file);
	fputs("</totalmessages>", file);*/
	fputs("</model_run>", file);
	fclose(file);
	}

	if(code != 0)
	{
		printf("*** Error: ");
		if(code == 100) printf("cannot handle specified number of space partitions");
		if(code == 101) printf("could not find number of space partitions config in file");

		printf(" ***");
		exit(0);
	}
}



/** \fn int_array * init_int_array()
 * \brief Allocate memory for a dynamic integer array.
 * \return int_array Pointer to the new dynamic integer array.
 */
void init_int_array(int_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (int *)malloc(ARRAY_BLOCK_SIZE * sizeof(int));
	CHECK_POINTER((*array).array);
}

/** \fn void reset_int_array(int_array * array)
* \brief Reset the int array to hold nothing.
* \param array Pointer to the dynamic integer array.
*/
void reset_int_array(int_array * array)
{
	(*array).size = 0;
}

/** \fn void free_int_array(int_array * array)
* \brief Free the memory of a dynamic integer array.
* \param array Pointer to the dynamic integer array.
*/
void free_int_array(int_array * array)
{
	free((*array).array);
}

void copy_int_array(int_array * from, int_array * to)
{
	int i;
	//to = init_int_array();

	for (i = 0; i < (*from).size; i++)
	{
		add_int(to, (*from).array[i]);
	}
}

/** \fn void sort_int_array(int_array * array)
* \brief Sort the elements of a dynamic integer array with smallest first.
* \param array Pointer to the dynamic integer array.
*/
/*void sort_int_array(int_array * array)
{
	int i, j, temp;

	for(i=0; i<((*array).size-1); i++)
	{
		for(j=0; j<((*array).size-1)-i; j++)
		{
			if(*((*array).array+j+1) < *((*array).array+j))
			{
                temp = *((*array).(*array)+j);
                *((*array).array+j) = *((*array).array+j+1);
                *((*array).array+j+1) = temp;
			}
		}
	}
}*/

/** \fn int quicksort_int(int *array, int elements)
 *  \brief Sorts the elements of the integer array in ascending order.
 *  \param Pointer to integer array
 *  \param Number of elements that must be sorted
 *  \return integer value indicating success(0) or failure(1)
 */
/*int quicksort_int(int array, int elements)
{
	#define  LEVEL  1000
	int  pivot, begin[LEVEL], end[LEVEL], i=0, left, right ;
	begin[0]=0; end[0]=elements;
	while (i>=0)
	{
		left=begin[i]; right=end[i]-1;
		if (left<right)
		{
			pivot=array[left]; if (i==LEVEL-1) return 1;
			while (left<right)
			{
				while (array[right]>=pivot && left<right) right--;
				if (left<right) array[left++]=array[right];
				while (array[left]<=pivot && left<right) left++;
				if (left<right) array[right--]=array[left];
			}
			array[left]=pivot;
			begin[i+1]=left+1;
			end[i+1]=end[i];
			end[i++]=left;
		}
	    else
	    {
	      i--;
	    }
	}
	return 0;
}*/

/** \fn void add_int(int_array * array, int new_int)
* \brief Add an integer to the dynamic integer array.
* \param array Pointer to the dynamic integer array.
* \param new_int The integer to add
*/
void add_int(int_array * array, int new_int)
{
	if((*array).size == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (int *)realloc((*array).array, ((*array).total_size * sizeof(int)));
	}
	(*array).array[(*array).size] = new_int;
	(*array).size++;
}

/** \fn void remove_int(int_array * array, int index)
 * \brief Remove an integer from a dynamic integer array.
 * \param array Pointer to the dynamic integer array.
 * \param index The index of the integer to remove.
 */
void remove_int(int_array * array, int index)
{
	int i;

	if(index < (*array).size)
	{
		/* memcopy?? */
		for(i = index; i < (*array).size - 1; i++)
		{
			(*array).array[i] = (*array).array[i+1];
		}
		(*array).size--;
	}
}

/** \fn void print_int_array(int_array * array)
 * \brief Print the elements of a dynamic integer array.
 * \param array Pointer to the dynamic integer array.
 */
void print_int_array(int_array * array)
{
	int i;

	for(i=0; i<(*array).size; i++)
	{
		printf("%d> %d", i, (*array).array[i]);
	}
}

/** \fn float_array * init_float_array()
 * \brief Allocate memory for a dynamic float array.
 * \return float_array Pointer to the new dynamic float array.
 */
void init_float_array(float_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (float *)malloc(ARRAY_BLOCK_SIZE * sizeof(float));
	CHECK_POINTER((*array).array);
}

/** \fn void reset_float_array(float_array * array)
* \brief Reset the float array to hold nothing.
* \param array Pointer to the dynamic float array.
*/
void reset_float_array(float_array * array)
{
	(*array).size = 0;
}

/** \fn void free_float_array(float_array * array)
* \brief Free the memory of a dynamic float array.
* \param array Pointer to the dynamic float array.
*/
void free_float_array(float_array * array)
{
	free((*array).array);
}

void copy_float_array(float_array * from, float_array * to)
{
	int i;
	//to = init_float_array();

	for (i = 0; i < (*from).size; i++)
	{
		add_float(to, (*from).array[i]);
	}
}

/** \fn void sort_float_array(float_array * array)
* \brief Sort the elements of a dynamic float array with smallest first.
* \param array Pointer to the dynamic float array.
*/
/*void sort_float_array(float_array array)
{
	int i, j;
	float temp;
	// Using bubble sorts nested loops //
	for(i=0; i<(array.size-1); i++)
	{
		for(j=0; j<(array.size-1)-i; j++)
		{
			// Comparing the values between neighbours //
			if(*(array.array+j+1) < *(array.array+j))
			{
                // Swap neighbours //
                temp = *(array.array+j);
                *(array.array+j) = *(array.array+j+1);
                *(array.array+j+1) = temp;
			}
		}
	}
}*/

/** \fn int quicksort_float(float *array, int elements)
 *  \brief Sorts the elements of the float array in ascending order.
 *  \param Pointer to float array
 *  \param Number of elements that must be sorted
 *  \return integer value indicating success(0) or failure(1)
 */
/*int quicksort_float(float array, int elements)
{
	#define  LEVEL  1000
	int i=0, left, right ;
	float pivot, begin[LEVEL], end[LEVEL];
	begin[0]=0; end[0]=elements;
	while (i>=0)
	{
		left=begin[i]; right=end[i]-1;
		if (left<right)
		{
			pivot=array[left]; if (i==LEVEL-1) return 1;
			while (left<right)
			{
				while (array[right]>=pivot && left<right) right--;
				if (left<right) array[left++]=array[right];
				while (array[left]<=pivot && left<right) left++;
				if (left<right) array[right--]=array[left];
			}
			array[left]=pivot;
			begin[i+1]=left+1;
			end[i+1]=end[i];
			end[i++]=left;
		}
	    else
	    {
	      i--;
	    }
	}
	return 0;
}*/

/** \fn void add_float(float_array * array, float new_float)
* \brief Add an floateger to the dynamic float array.
* \param array Pointer to the dynamic float array.
* \param new_float The float to add
*/
void add_float(float_array * array, float new_float)
{
	if((*array).size == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (float *)realloc((*array).array, ((*array).total_size * sizeof(float)));
	}
	(*array).array[(*array).size] = new_float;
	(*array).size++;
}

/** \fn void remove_float(float_array * array, int index)
 * \brief Remove an floateger from a dynamic float array.
 * \param array Pointer to the dynamic float array.
 * \param index The index of the float to remove.
 */
void remove_float(float_array * array, int index)
{
	int i;

	if(index < (*array).size)
	{
		/* memcopy?? */
		for(i = index; i < (*array).size - 1; i++)
		{
			(*array).array[i] = (*array).array[i+1];
		}
		(*array).size--;
	}
}

/** \fn void print_float_array(float_array * array)
 * \brief Print the elements of a dynamic float array.
 * \param array Pointer to the dynamic float array.
 */
void print_float_array(float_array * array)
{
	int i;
	/* printf(""); // compiler does not like empty prfloats */
	for(i=0; i<(*array).size; i++)
	{
		printf("%d> %f", i, (*array).array[i]);
	}
}

/** \fn double_array * init_double_array()
 * \brief Allocate memory for a dynamic double array.
 * \return double_array Pointer to the new dynamic double array.
 */
void init_double_array(double_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (double *)malloc(ARRAY_BLOCK_SIZE * sizeof(double));
	CHECK_POINTER((*array).array);
}

/** \fn void reset_double_array(double_array * array)
* \brief Reset the double array to hold nothing.
* \param array Pointer to the dynamic double array.
*/
void reset_double_array(double_array * array)
{
	(*array).size = 0;
}

/** \fn void free_double_array(double_array * array)
 * \brief Free the memory of a dynamic double array.
 * \param array Pointer to the dynamic double array.
 */
void free_double_array(double_array * array)
{
	free((*array).array);
}

void copy_double_array(double_array * from, double_array * to)
{
	int i;
	//to = init_double_array();

	for (i = 0; i < (*from).size; i++)
	{
		add_double(to, (*from).array[i]);
	}
}

/** \fn void sort_double_array(double_array * array)
 * \brief Sort the elements of a dynamic double array with smallest first.
 * \param array Pointer to the dynamic double array.
 */
/*void sort_double_array(double_array array)
{
	int i, j;
	double temp;

	// Using bubble sorts nested loops //
	for(i=0; i<(array.size-1); i++)
	{
		for(j=0; j<(array.size-1)-i; j++)
		{
			// Comparing the values between neighbours //
			if(*(array.array+j+1) < *(array.array+j))
			{
                // Swap neighbours //
                temp = *(array.array+j);
                *(array.array+j) = *(array.array+j+1);
                *(array.array+j+1) = temp;
			}
		}
	}
}*/

/** \fn int quicksort_double(double *array, int elements)
 *  \brief Sorts the elements of the double array in ascending order.
 *  \param Pointer to double array
 *  \param Number of elements that must be sorted
 *  \return integer value indicating success(0) or failure(1)
 */
/*int quicksort_double(double array, int elements)
{
	#define  LEVEL  1000
	double pivot, begin[LEVEL], end[LEVEL];
	int  i=0, left, right ;
	begin[0]=0; end[0]=elements;
	while (i>=0)
	{
		left=begin[i]; right=end[i]-1;
		if (left<right)
		{
			pivot=array[left]; if (i==LEVEL-1) return 1;
			while (left<right)
			{
				while (array[right]>=pivot && left<right) right--;
				if (left<right) array[left++]=array[right];
				while (array[left]<=pivot && left<right) left++;
				if (left<right) array[right--]=array[left];
			}
			array[left]=pivot;
			begin[i+1]=left+1;
			end[i+1]=end[i];
			end[i++]=left;
		}
	    else
	    {
	      i--;
	    }
	}
	return 0;
}*/

/** \fn void add_double(double_array * array, double new_double)
 * \brief Add an double to the dynamic double array.
 * \param array Pointer to the dynamic double array.
 * \param new_double The double to add
 */
void add_double(double_array * array, double new_double)
{
	if((*array).size == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (double *)realloc((*array).array, ((*array).total_size * sizeof(double)));
	}
	(*array).array[(*array).size] = new_double;
	(*array).size++;
}

/** \fn void remove_double(double_array * array, int index)
 * \brief Remove an double from a dynamic double array.
 * \param array Pointer to the dynamic double array.
 * \param index The index of the double to remove.
 */
void remove_double(double_array * array, int index)
{
	int i;
	if(index < (*array).size)
	{
		/* memcopy?? */
		for(i = index; i < (*array).size - 1; i++)
		{
			(*array).array[i] = (*array).array[i+1];
		}
		(*array).size--;
	}
}

/** \fn void print_double_array(double_array * array)
 * \brief Print the elements of a dynamic double array.
 * \param array Pointer to the dynamic double array.
 */
void print_double_array(double_array * array)
{
	int i;

	for(i=0; i<(*array).size; i++)
	{
		printf("%d> %f", i, (*array).array[i]);
	}
}

/** \fn char_array * init_char_array()
 * \brief Allocate memory for a dynamic char array.
 * \return char_array Pointer to the new dynamic char array.
 */
void init_char_array(char_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (char *)malloc(ARRAY_BLOCK_SIZE * sizeof(char));
	CHECK_POINTER((*array).array);
	(*array).array[0] = '\0';
}

/** \fn void reset_char_array(char_array * array)
* \brief Reset the char array to hold nothing.
* \param array Pointer to the dynamic char array.
*/
void reset_char_array(char_array * array)
{
	(*array).size = 0;
}

/** \fn void free_char_array(char_array * array)
 * \brief Free the memory of a dynamic char array.
 * \param array Pointer to the dynamic char array.
 */
void free_char_array(char_array * array)
{
	free((*array).array);
}

void copy_char_array(char_array * from, char_array * to)
{
	int i;

	for (i = 0; i < (*from).size; i++)
	{
		add_char(to, (*from).array[i]);
	}
}

/** \fn void add_char(char_array * array, char new_char)
 * \brief Add an char to the dynamic char array.
 * \param array Pointer to the dynamic char array.
 * \param new_char The char to add
 */
void add_char(char_array * array, char new_char)
{
	if((*array).size + 1 == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (char *)realloc((*array).array, ((*array).total_size * sizeof(char)));
	}
	(*array).array[(*array).size] = new_char;
	(*array).array[(*array).size + 1] = '\0';
	(*array).size++;
}

/** \fn void remove_char(char_array * array, int index)
 * \brief Remove an char from a dynamic char array.
 * \param array Pointer to the dynamic char array.
 * \param index The index of the char to remove.
 */
void remove_char(char_array * array, int index)
{
	int i;
	if(index < (*array).size)
	{
		/* memcopy?? */
		for(i = index; i < (*array).size - 1; i++)
		{
			(*array).array[i] = (*array).array[i+1];
		}
		(*array).size--;
	}
}

/** \fn char * copy_array_to_str(char_array * array)
 * \brief Return pointer to string from a char_array.
 * \param array Pointer to the dynamic integer array.
 * \return char Pointer to the new string.
 */
char * copy_array_to_str(char_array * array)
{
	char * new_string = (char *)malloc( ((*array).size + 1) * sizeof(char));
	CHECK_POINTER(new_string);
	return strcpy(new_string, (*array).array);
}

/** \fn void print_char_array(char_array * array)
 * \brief Print the elements of a dynamic char array.
 * \param array Pointer to the dynamic char array.
 */
void print_char_array(char_array * array)
{
	printf("%s", (*array).array);
}

/* Functions for the members_needs datatype */
/** \fn members_needs_array * init_members_needs_array()
 * \brief Allocate memory for a dynamic members_needs array.
 * \return members_needs_array Pointer to the new dynamic members_needs array.
 */
void init_members_needs_array(members_needs_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (members_needs *)malloc(ARRAY_BLOCK_SIZE * sizeof(members_needs));
	CHECK_POINTER((*array).array);
}

/** \fn void reset_members_needs_array(members_needs_array* array)
* \brief Reset the members_needs array to hold nothing.
* \param array Pointer to the dynamic members_needs array.
*/
void reset_members_needs_array(members_needs_array * array)
{
	(*array).size = 0;
}

/** \fn void free_members_needs_array(members_needs_array * array)
* \brief Free the memory of a dynamic members_needs array.
* \param array Pointer to the dynamic members_needs array.
*/
void free_members_needs_array(members_needs_array * array)
{
	int i;
	
	for(i = 0; i < array->size; i++)
	{
		free_members_needs(&(*array).array[i]);
	}
	
	free((*array).array);
}

void copy_members_needs_array(members_needs_array * from, members_needs_array * to)
{
	int i;

	//to = init_members_needs_array();

	for(i = 0; i < (*from).size; i++)
	{
		add_members_needs(to, (*from).array[i].id_list, (*from).array[i].cal_list, (*from).array[i].age);
	}
}

/** \fn void add_members_needs(members_needs_array * array, int id_list, int cal_list, int age)
* \brief Add an members_needs to the dynamic members_needs array.
* \param array Pointer to the dynamic members_needs array.
* \param new_int The members_needs to add
*/
void add_members_needs(members_needs_array * array, /*@out@*/ int * id_list, /*@out@*/ int * cal_list, /*@out@*/ int * age)
{
	if((*array).size == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (members_needs *)realloc((*array).array, ((*array).total_size * sizeof(members_needs)));
	}
	init_members_needs(&(*array).array[(*array).size]);
	if(id_list != NULL) memcpy((*array).array[(*array).size].id_list, id_list, 100*sizeof(int));
	if(cal_list != NULL) memcpy((*array).array[(*array).size].cal_list, cal_list, 100*sizeof(int));
	if(age != NULL) memcpy((*array).array[(*array).size].age, age, 100*sizeof(int));

	(*array).size++;
}

/** \fn void remove_members_needs(members_needs_array * array, int index)
 * \brief Remove an members_needs from a dynamic members_needs array.
 * \param array Pointer to the dynamic members_needs array.
 * \param index The index of the members_needs to remove.
 */
void remove_members_needs(members_needs_array * array, int index)
{
	int i;

	/* Free element at index index */
	free_members_needs(&(*array).array[index]);

	/* Copy all elements up by one */
	if(index < (*array).size)
	{
		for(i = index; i < (*array).size - 1; i++)
		{
			copy_members_needs(&(*array).array[i+1], &(*array).array[i]);
		}
		(*array).size--;
	}
}
/* Functions for the indv_free datatype */
/** \fn indv_free_array * init_indv_free_array()
 * \brief Allocate memory for a dynamic indv_free array.
 * \return indv_free_array Pointer to the new dynamic indv_free array.
 */
void init_indv_free_array(indv_free_array * array)
{
	(*array).size = 0;
	(*array).total_size = ARRAY_BLOCK_SIZE;
	(*array).array = (indv_free *)malloc(ARRAY_BLOCK_SIZE * sizeof(indv_free));
	CHECK_POINTER((*array).array);
}

/** \fn void reset_indv_free_array(indv_free_array* array)
* \brief Reset the indv_free array to hold nothing.
* \param array Pointer to the dynamic indv_free array.
*/
void reset_indv_free_array(indv_free_array * array)
{
	(*array).size = 0;
}

/** \fn void free_indv_free_array(indv_free_array * array)
* \brief Free the memory of a dynamic indv_free array.
* \param array Pointer to the dynamic indv_free array.
*/
void free_indv_free_array(indv_free_array * array)
{
	int i;
	
	for(i = 0; i < array->size; i++)
	{
		free_indv_free(&(*array).array[i]);
	}
	
	free((*array).array);
}

void copy_indv_free_array(indv_free_array * from, indv_free_array * to)
{
	int i;

	//to = init_indv_free_array();

	for(i = 0; i < (*from).size; i++)
	{
		add_indv_free(to, (*from).array[i].male_list, (*from).array[i].female_list, (*from).array[i].mancestor_list, (*from).array[i].fancestor_list, (*from).array[i].mancestorClan_list, (*from).array[i].fancestorClan_list, (*from).array[i].numMale, (*from).array[i].numFemale);
	}
}

/** \fn void add_indv_free(indv_free_array * array, int male_list, int female_list, int mancestor_list, int fancestor_list, int mancestorClan_list, int fancestorClan_list, int numMale, int numFemale)
* \brief Add an indv_free to the dynamic indv_free array.
* \param array Pointer to the dynamic indv_free array.
* \param new_int The indv_free to add
*/
void add_indv_free(indv_free_array * array, /*@out@*/ int * male_list, /*@out@*/ int * female_list, /*@out@*/ int * mancestor_list, /*@out@*/ int * fancestor_list, /*@out@*/ int * mancestorClan_list, /*@out@*/ int * fancestorClan_list,  int numMale,  int numFemale)
{
	if((*array).size == (*array).total_size)
	{
		(*array).total_size = (int)((*array).total_size * ARRAY_GROWTH_RATE);
		(*array).array = (indv_free *)realloc((*array).array, ((*array).total_size * sizeof(indv_free)));
	}
	init_indv_free(&(*array).array[(*array).size]);
	if(male_list != NULL) memcpy((*array).array[(*array).size].male_list, male_list, 100*sizeof(int));
	if(female_list != NULL) memcpy((*array).array[(*array).size].female_list, female_list, 100*sizeof(int));
	if(mancestor_list != NULL) memcpy((*array).array[(*array).size].mancestor_list, mancestor_list, 700*sizeof(int));
	if(fancestor_list != NULL) memcpy((*array).array[(*array).size].fancestor_list, fancestor_list, 700*sizeof(int));
	if(mancestorClan_list != NULL) memcpy((*array).array[(*array).size].mancestorClan_list, mancestorClan_list, 700*sizeof(int));
	if(fancestorClan_list != NULL) memcpy((*array).array[(*array).size].fancestorClan_list, fancestorClan_list, 700*sizeof(int));
	(*array).array[(*array).size].numMale = numMale;
	(*array).array[(*array).size].numFemale = numFemale;

	(*array).size++;
}

/** \fn void remove_indv_free(indv_free_array * array, int index)
 * \brief Remove an indv_free from a dynamic indv_free array.
 * \param array Pointer to the dynamic indv_free array.
 * \param index The index of the indv_free to remove.
 */
void remove_indv_free(indv_free_array * array, int index)
{
	int i;

	/* Free element at index index */
	free_indv_free(&(*array).array[index]);

	/* Copy all elements up by one */
	if(index < (*array).size)
	{
		for(i = index; i < (*array).size - 1; i++)
		{
			copy_indv_free(&(*array).array[i+1], &(*array).array[i]);
		}
		(*array).size--;
	}
}

/** \fn int idle()
 * \brief an idle function for use by agents.
 */
int idle()
{
	return 0;
}

int FLAME_get_environment_variable_propegnant()
{
	return FLAME_environment_variable_propegnant;
}
int FLAME_get_environment_variable_nancestors()
{
	return FLAME_environment_variable_nancestors;
}
int FLAME_get_environment_variable_learn()
{
	return FLAME_environment_variable_learn;
}
int FLAME_get_environment_variable_forget()
{
	return FLAME_environment_variable_forget;
}
int FLAME_get_environment_variable_lang_threshold()
{
	return FLAME_environment_variable_lang_threshold;
}
int FLAME_get_environment_variable_genoma()
{
	return FLAME_environment_variable_genoma;
}
int FLAME_get_environment_variable_record_size()
{
	return FLAME_environment_variable_record_size;
}
int FLAME_get_environment_variable_grecord_size()
{
	return FLAME_environment_variable_grecord_size;
}
int FLAME_get_environment_variable_max_manada()
{
	return FLAME_environment_variable_max_manada;
}
int FLAME_get_environment_variable_max_familia()
{
	return FLAME_environment_variable_max_familia;
}
int FLAME_get_environment_variable_cal_adulto()
{
	return FLAME_environment_variable_cal_adulto;
}
int FLAME_get_environment_variable_surviveChanceAdult()
{
	return FLAME_environment_variable_surviveChanceAdult;
}
int FLAME_get_environment_variable_surviveChanceChild()
{
	return FLAME_environment_variable_surviveChanceChild;
}
int FLAME_get_environment_variable_speed()
{
	return FLAME_environment_variable_speed;
}


