/**
 * \file  messageboards.c
 * \brief Holds message board functions.
 */

#include "header.h"



/* Box filtering functions */




union pu_information 
{
    m_information *ptr;
    void *ptr_anon;
};

/** \fn void add_information_message(int id, int clanID, int cal, int age, int pregnant)
 * \brief Add information message by calling internal and processing.
 * \param id Message variable.
 * \param clanID Message variable.
 * \param cal Message variable.
 * \param age Message variable.
 * \param pregnant Message variable.
 */
void add_information_message(int id, int clanID, int cal, int age, int pregnant)
{
    int rc;
	m_information msg;
    
    msg.id = id;
    msg.clanID = clanID;
    msg.cal = cal;
    msg.age = age;
    msg.pregnant = pregnant;
    
    
    rc = MB_AddMessage(b_information, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'information' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'information' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'information' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_information* getInternalMessage_information(void)
{
    static m_information *msg_prev = NULL;
    union pu_information msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_information); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'information' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'information' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_information, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'information' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'information' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_information * get_first_information_message()
 * \brief Get the first information message in the information message list.
 * \return The first message in the list.
 */
m_information * get_first_information_message()
{
	return getInternalMessage_information();
}

/** \fn xmachine_message_information * get_next_information_message(xmachine_message_information * current)
 * \brief Get the next information message in the information message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_information * get_next_information_message(m_information * current)
{
	return getInternalMessage_information();
}


/* Box filtering functions */




union pu_indgetcalories 
{
    m_indgetcalories *ptr;
    void *ptr_anon;
};

/** \fn void add_indgetcalories_message(int icalories, int indvID)
 * \brief Add indgetcalories message by calling internal and processing.
 * \param icalories Message variable.
 * \param indvID Message variable.
 */
void add_indgetcalories_message(int icalories, int indvID)
{
    int rc;
	m_indgetcalories msg;
    
    msg.icalories = icalories;
    msg.indvID = indvID;
    
    
    rc = MB_AddMessage(b_indgetcalories, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'indgetcalories' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'indgetcalories' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'indgetcalories' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_indgetcalories* getInternalMessage_indgetcalories(void)
{
    static m_indgetcalories *msg_prev = NULL;
    union pu_indgetcalories msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_indgetcalories); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'indgetcalories' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'indgetcalories' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_indgetcalories, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'indgetcalories' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'indgetcalories' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_indgetcalories * get_first_indgetcalories_message()
 * \brief Get the first indgetcalories message in the indgetcalories message list.
 * \return The first message in the list.
 */
m_indgetcalories * get_first_indgetcalories_message()
{
	return getInternalMessage_indgetcalories();
}

/** \fn xmachine_message_indgetcalories * get_next_indgetcalories_message(xmachine_message_indgetcalories * current)
 * \brief Get the next indgetcalories message in the indgetcalories message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_indgetcalories * get_next_indgetcalories_message(m_indgetcalories * current)
{
	return getInternalMessage_indgetcalories();
}


/* Box filtering functions */




union pu_leader 
{
    m_leader *ptr;
    void *ptr_anon;
};

/** \fn void add_leader_message(int id, int clanID, int leader, int sex, int age)
 * \brief Add leader message by calling internal and processing.
 * \param id Message variable.
 * \param clanID Message variable.
 * \param leader Message variable.
 * \param sex Message variable.
 * \param age Message variable.
 */
void add_leader_message(int id, int clanID, int leader, int sex, int age)
{
    int rc;
	m_leader msg;
    
    msg.id = id;
    msg.clanID = clanID;
    msg.leader = leader;
    msg.sex = sex;
    msg.age = age;
    
    
    rc = MB_AddMessage(b_leader, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'leader' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'leader' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'leader' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_leader* getInternalMessage_leader(void)
{
    static m_leader *msg_prev = NULL;
    union pu_leader msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_leader); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'leader' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'leader' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_leader, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'leader' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'leader' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_leader * get_first_leader_message()
 * \brief Get the first leader message in the leader message list.
 * \return The first message in the list.
 */
m_leader * get_first_leader_message()
{
	return getInternalMessage_leader();
}

/** \fn xmachine_message_leader * get_next_leader_message(xmachine_message_leader * current)
 * \brief Get the next leader message in the leader message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_leader * get_next_leader_message(m_leader * current)
{
	return getInternalMessage_leader();
}


/* Box filtering functions */




union pu_ancestor 
{
    m_ancestor *ptr;
    void *ptr_anon;
};

/** \fn void add_ancestor_message(int ancest, int ancestClan, int clanID, int indvID, int sex)
 * \brief Add ancestor message by calling internal and processing.
 * \param ancest Message variable.
 * \param ancestClan Message variable.
 * \param clanID Message variable.
 * \param indvID Message variable.
 * \param sex Message variable.
 */
void add_ancestor_message(int ancest[], int ancestClan[], int clanID, int indvID, int sex)
{
    int rc;
	m_ancestor msg;
    
    memcpy(msg.ancest, ancest, 7*sizeof(int));
    memcpy(msg.ancestClan, ancestClan, 7*sizeof(int));
    msg.clanID = clanID;
    msg.indvID = indvID;
    msg.sex = sex;
    
    
    rc = MB_AddMessage(b_ancestor, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'ancestor' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'ancestor' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'ancestor' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_ancestor* getInternalMessage_ancestor(void)
{
    static m_ancestor *msg_prev = NULL;
    union pu_ancestor msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_ancestor); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'ancestor' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'ancestor' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_ancestor, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'ancestor' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'ancestor' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_ancestor * get_first_ancestor_message()
 * \brief Get the first ancestor message in the ancestor message list.
 * \return The first message in the list.
 */
m_ancestor * get_first_ancestor_message()
{
	return getInternalMessage_ancestor();
}

/** \fn xmachine_message_ancestor * get_next_ancestor_message(xmachine_message_ancestor * current)
 * \brief Get the next ancestor message in the ancestor message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_ancestor * get_next_ancestor_message(m_ancestor * current)
{
	return getInternalMessage_ancestor();
}


/* Box filtering functions */




union pu_peticionID 
{
    m_peticionID *ptr;
    void *ptr_anon;
};

/** \fn void add_peticionID_message(int clanID, int id)
 * \brief Add peticionID message by calling internal and processing.
 * \param clanID Message variable.
 * \param id Message variable.
 */
void add_peticionID_message(int clanID, int id)
{
    int rc;
	m_peticionID msg;
    
    msg.clanID = clanID;
    msg.id = id;
    
    
    rc = MB_AddMessage(b_peticionID, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'peticionID' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'peticionID' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'peticionID' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_peticionID* getInternalMessage_peticionID(void)
{
    static m_peticionID *msg_prev = NULL;
    union pu_peticionID msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_peticionID); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'peticionID' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'peticionID' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_peticionID, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'peticionID' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'peticionID' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_peticionID * get_first_peticionID_message()
 * \brief Get the first peticionID message in the peticionID message list.
 * \return The first message in the list.
 */
m_peticionID * get_first_peticionID_message()
{
	return getInternalMessage_peticionID();
}

/** \fn xmachine_message_peticionID * get_next_peticionID_message(xmachine_message_peticionID * current)
 * \brief Get the next peticionID message in the peticionID message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_peticionID * get_next_peticionID_message(m_peticionID * current)
{
	return getInternalMessage_peticionID();
}


/* Box filtering functions */




union pu_family 
{
    m_family *ptr;
    void *ptr_anon;
};

/** \fn void add_family_message(int wife, int clanID, int husband, int info)
 * \brief Add family message by calling internal and processing.
 * \param wife Message variable.
 * \param clanID Message variable.
 * \param husband Message variable.
 * \param info Message variable.
 */
void add_family_message(int wife, int clanID, int husband, int info[])
{
    int rc;
	m_family msg;
    
    msg.wife = wife;
    msg.clanID = clanID;
    msg.husband = husband;
    memcpy(msg.info, info, 4*sizeof(int));
    
    
    rc = MB_AddMessage(b_family, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'family' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'family' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'family' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_family* getInternalMessage_family(void)
{
    static m_family *msg_prev = NULL;
    union pu_family msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_family); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'family' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'family' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_family, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'family' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'family' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_family * get_first_family_message()
 * \brief Get the first family message in the family message list.
 * \return The first message in the list.
 */
m_family * get_first_family_message()
{
	return getInternalMessage_family();
}

/** \fn xmachine_message_family * get_next_family_message(xmachine_message_family * current)
 * \brief Get the next family message in the family message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_family * get_next_family_message(m_family * current)
{
	return getInternalMessage_family();
}


/* Box filtering functions */




union pu_death 
{
    m_death *ptr;
    void *ptr_anon;
};

/** \fn void add_death_message(int parejaID, int clanID)
 * \brief Add death message by calling internal and processing.
 * \param parejaID Message variable.
 * \param clanID Message variable.
 */
void add_death_message(int parejaID, int clanID)
{
    int rc;
	m_death msg;
    
    msg.parejaID = parejaID;
    msg.clanID = clanID;
    
    
    rc = MB_AddMessage(b_death, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'death' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'death' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'death' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_death* getInternalMessage_death(void)
{
    static m_death *msg_prev = NULL;
    union pu_death msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_death); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'death' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'death' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_death, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'death' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'death' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_death * get_first_death_message()
 * \brief Get the first death message in the death message list.
 * \return The first message in the list.
 */
m_death * get_first_death_message()
{
	return getInternalMessage_death();
}

/** \fn xmachine_message_death * get_next_death_message(xmachine_message_death * current)
 * \brief Get the next death message in the death message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_death * get_next_death_message(m_death * current)
{
	return getInternalMessage_death();
}


/* Box filtering functions */




union pu_widow 
{
    m_widow *ptr;
    void *ptr_anon;
};

/** \fn void add_widow_message(int ancestors, int Cancestors, int clanID, int indvID)
 * \brief Add widow message by calling internal and processing.
 * \param ancestors Message variable.
 * \param Cancestors Message variable.
 * \param clanID Message variable.
 * \param indvID Message variable.
 */
void add_widow_message(int ancestors[], int Cancestors[], int clanID, int indvID)
{
    int rc;
	m_widow msg;
    
    memcpy(msg.ancestors, ancestors, 7*sizeof(int));
    memcpy(msg.Cancestors, Cancestors, 7*sizeof(int));
    msg.clanID = clanID;
    msg.indvID = indvID;
    
    
    rc = MB_AddMessage(b_widow, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'widow' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'widow' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'widow' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_widow* getInternalMessage_widow(void)
{
    static m_widow *msg_prev = NULL;
    union pu_widow msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_widow); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'widow' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'widow' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_widow, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'widow' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'widow' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_widow * get_first_widow_message()
 * \brief Get the first widow message in the widow message list.
 * \return The first message in the list.
 */
m_widow * get_first_widow_message()
{
	return getInternalMessage_widow();
}

/** \fn xmachine_message_widow * get_next_widow_message(xmachine_message_widow * current)
 * \brief Get the next widow message in the widow message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_widow * get_next_widow_message(m_widow * current)
{
	return getInternalMessage_widow();
}


/* Box filtering functions */




union pu_informationDivide 
{
    m_informationDivide *ptr;
    void *ptr_anon;
};

/** \fn void add_informationDivide_message(int clanID, int indvID, int parejaID, int sex, int momID, int age)
 * \brief Add informationDivide message by calling internal and processing.
 * \param clanID Message variable.
 * \param indvID Message variable.
 * \param parejaID Message variable.
 * \param sex Message variable.
 * \param momID Message variable.
 * \param age Message variable.
 */
void add_informationDivide_message(int clanID, int indvID, int parejaID, int sex, int momID, int age)
{
    int rc;
	m_informationDivide msg;
    
    msg.clanID = clanID;
    msg.indvID = indvID;
    msg.parejaID = parejaID;
    msg.sex = sex;
    msg.momID = momID;
    msg.age = age;
    
    
    rc = MB_AddMessage(b_informationDivide, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'informationDivide' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'informationDivide' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'informationDivide' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_informationDivide* getInternalMessage_informationDivide(void)
{
    static m_informationDivide *msg_prev = NULL;
    union pu_informationDivide msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_informationDivide); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'informationDivide' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'informationDivide' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_informationDivide, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'informationDivide' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'informationDivide' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_informationDivide * get_first_informationDivide_message()
 * \brief Get the first informationDivide message in the informationDivide message list.
 * \return The first message in the list.
 */
m_informationDivide * get_first_informationDivide_message()
{
	return getInternalMessage_informationDivide();
}

/** \fn xmachine_message_informationDivide * get_next_informationDivide_message(xmachine_message_informationDivide * current)
 * \brief Get the next informationDivide message in the informationDivide message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_informationDivide * get_next_informationDivide_message(m_informationDivide * current)
{
	return getInternalMessage_informationDivide();
}


/* Box filtering functions */




union pu_clan_info 
{
    m_clan_info *ptr;
    void *ptr_anon;
};

/** \fn void add_clan_info_message(int px, int py, int cID, int wf, int maxcc)
 * \brief Add clan_info message by calling internal and processing.
 * \param px Message variable.
 * \param py Message variable.
 * \param cID Message variable.
 * \param wf Message variable.
 * \param maxcc Message variable.
 */
void add_clan_info_message(int px, int py, int cID, int wf, int maxcc)
{
    int rc;
	m_clan_info msg;
    
    msg.px = px;
    msg.py = py;
    msg.cID = cID;
    msg.wf = wf;
    msg.maxcc = maxcc;
    
    
    rc = MB_AddMessage(b_clan_info, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'clan_info' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clan_info' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clan_info' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_clan_info* getInternalMessage_clan_info(void)
{
    static m_clan_info *msg_prev = NULL;
    union pu_clan_info msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_clan_info); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'clan_info' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'clan_info' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_clan_info, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'clan_info' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clan_info' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_clan_info * get_first_clan_info_message()
 * \brief Get the first clan_info message in the clan_info message list.
 * \return The first message in the list.
 */
m_clan_info * get_first_clan_info_message()
{
	return getInternalMessage_clan_info();
}

/** \fn xmachine_message_clan_info * get_next_clan_info_message(xmachine_message_clan_info * current)
 * \brief Get the next clan_info message in the clan_info message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_clan_info * get_next_clan_info_message(m_clan_info * current)
{
	return getInternalMessage_clan_info();
}


/* Box filtering functions */




union pu_clangetcalories 
{
    m_clangetcalories *ptr;
    void *ptr_anon;
};

/** \fn void add_clangetcalories_message(int cID, int clcalories)
 * \brief Add clangetcalories message by calling internal and processing.
 * \param cID Message variable.
 * \param clcalories Message variable.
 */
void add_clangetcalories_message(int cID, int clcalories)
{
    int rc;
	m_clangetcalories msg;
    
    msg.cID = cID;
    msg.clcalories = clcalories;
    
    
    rc = MB_AddMessage(b_clangetcalories, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'clangetcalories' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clangetcalories' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clangetcalories' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_clangetcalories* getInternalMessage_clangetcalories(void)
{
    static m_clangetcalories *msg_prev = NULL;
    union pu_clangetcalories msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_clangetcalories); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'clangetcalories' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'clangetcalories' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_clangetcalories, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'clangetcalories' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clangetcalories' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_clangetcalories * get_first_clangetcalories_message()
 * \brief Get the first clangetcalories message in the clangetcalories message list.
 * \return The first message in the list.
 */
m_clangetcalories * get_first_clangetcalories_message()
{
	return getInternalMessage_clangetcalories();
}

/** \fn xmachine_message_clangetcalories * get_next_clangetcalories_message(xmachine_message_clangetcalories * current)
 * \brief Get the next clangetcalories message in the clangetcalories message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_clangetcalories * get_next_clangetcalories_message(m_clangetcalories * current)
{
	return getInternalMessage_clangetcalories();
}


/* Box filtering functions */
double freeGirls_message_extract_x(void *msg_ptr) { return (double)((m_freeGirls*)msg_ptr)->x; }
double freeGirls_message_extract_y(void *msg_ptr) { return (double)((m_freeGirls*)msg_ptr)->y; }


union pu_freeGirls 
{
    m_freeGirls *ptr;
    void *ptr_anon;
};

/** \fn void add_freeGirls_message(int girls, int num_chicas, int y, int x, int clanID, int lancestors, int lancestorsClan, int linguistic)
 * \brief Add freeGirls message by calling internal and processing.
 * \param girls Message variable.
 * \param num_chicas Message variable.
 * \param y Message variable.
 * \param x Message variable.
 * \param clanID Message variable.
 * \param lancestors Message variable.
 * \param lancestorsClan Message variable.
 * \param linguistic Message variable.
 */
void add_freeGirls_message(int girls[], int num_chicas, int y, int x, int clanID, int lancestors[], int lancestorsClan[], int linguistic[])
{
    int rc;
	m_freeGirls msg;
    
    memcpy(msg.girls, girls, 100*sizeof(int));
    msg.num_chicas = num_chicas;
    msg.y = y;
    msg.x = x;
    msg.clanID = clanID;
    memcpy(msg.lancestors, lancestors, 700*sizeof(int));
    memcpy(msg.lancestorsClan, lancestorsClan, 700*sizeof(int));
    memcpy(msg.linguistic, linguistic, 100*sizeof(int));
    
    
    rc = MB_AddMessage(b_freeGirls, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'freeGirls' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'freeGirls' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'freeGirls' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_freeGirls* getInternalMessage_freeGirls(void)
{
    static m_freeGirls *msg_prev = NULL;
    union pu_freeGirls msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_freeGirls); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'freeGirls' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'freeGirls' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_freeGirls, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'freeGirls' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'freeGirls' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_freeGirls * get_first_freeGirls_message()
 * \brief Get the first freeGirls message in the freeGirls message list.
 * \return The first message in the list.
 */
m_freeGirls * get_first_freeGirls_message()
{
	return getInternalMessage_freeGirls();
}

/** \fn xmachine_message_freeGirls * get_next_freeGirls_message(xmachine_message_freeGirls * current)
 * \brief Get the next freeGirls message in the freeGirls message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_freeGirls * get_next_freeGirls_message(m_freeGirls * current)
{
	return getInternalMessage_freeGirls();
}


/* Box filtering functions */




union pu_propuesta 
{
    m_propuesta *ptr;
    void *ptr_anon;
};

/** \fn void add_propuesta_message(int id_list, int id_man, int oclanID, int dclanID)
 * \brief Add propuesta message by calling internal and processing.
 * \param id_list Message variable.
 * \param id_man Message variable.
 * \param oclanID Message variable.
 * \param dclanID Message variable.
 */
void add_propuesta_message(int id_list, int id_man, int oclanID, int dclanID)
{
    int rc;
	m_propuesta msg;
    
    msg.id_list = id_list;
    msg.id_man = id_man;
    msg.oclanID = oclanID;
    msg.dclanID = dclanID;
    
    
    rc = MB_AddMessage(b_propuesta, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'propuesta' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'propuesta' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'propuesta' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_propuesta* getInternalMessage_propuesta(void)
{
    static m_propuesta *msg_prev = NULL;
    union pu_propuesta msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_propuesta); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'propuesta' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'propuesta' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_propuesta, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'propuesta' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'propuesta' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_propuesta * get_first_propuesta_message()
 * \brief Get the first propuesta message in the propuesta message list.
 * \return The first message in the list.
 */
m_propuesta * get_first_propuesta_message()
{
	return getInternalMessage_propuesta();
}

/** \fn xmachine_message_propuesta * get_next_propuesta_message(xmachine_message_propuesta * current)
 * \brief Get the next propuesta message in the propuesta message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_propuesta * get_next_propuesta_message(m_propuesta * current)
{
	return getInternalMessage_propuesta();
}


/* Box filtering functions */




union pu_confirProp 
{
    m_confirProp *ptr;
    void *ptr_anon;
};

/** \fn void add_confirProp_message(int girlID, int clanID, int manID, int oclanID, int linguistic)
 * \brief Add confirProp message by calling internal and processing.
 * \param girlID Message variable.
 * \param clanID Message variable.
 * \param manID Message variable.
 * \param oclanID Message variable.
 * \param linguistic Message variable.
 */
void add_confirProp_message(int girlID, int clanID, int manID, int oclanID, int linguistic[])
{
    int rc;
	m_confirProp msg;
    
    msg.girlID = girlID;
    msg.clanID = clanID;
    msg.manID = manID;
    msg.oclanID = oclanID;
    memcpy(msg.linguistic, linguistic, 100*sizeof(int));
    
    
    rc = MB_AddMessage(b_confirProp, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'confirProp' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'confirProp' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'confirProp' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_confirProp* getInternalMessage_confirProp(void)
{
    static m_confirProp *msg_prev = NULL;
    union pu_confirProp msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_confirProp); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'confirProp' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'confirProp' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_confirProp, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'confirProp' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'confirProp' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_confirProp * get_first_confirProp_message()
 * \brief Get the first confirProp message in the confirProp message list.
 * \return The first message in the list.
 */
m_confirProp * get_first_confirProp_message()
{
	return getInternalMessage_confirProp();
}

/** \fn xmachine_message_confirProp * get_next_confirProp_message(xmachine_message_confirProp * current)
 * \brief Get the next confirProp message in the confirProp message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_confirProp * get_next_confirProp_message(m_confirProp * current)
{
	return getInternalMessage_confirProp();
}


/* Box filtering functions */




union pu_marriage 
{
    m_marriage *ptr;
    void *ptr_anon;
};

/** \fn void add_marriage_message(int girlID, int clanID, int manID, int oclanID, int newID)
 * \brief Add marriage message by calling internal and processing.
 * \param girlID Message variable.
 * \param clanID Message variable.
 * \param manID Message variable.
 * \param oclanID Message variable.
 * \param newID Message variable.
 */
void add_marriage_message(int girlID, int clanID, int manID, int oclanID, int newID)
{
    int rc;
	m_marriage msg;
    
    msg.girlID = girlID;
    msg.clanID = clanID;
    msg.manID = manID;
    msg.oclanID = oclanID;
    msg.newID = newID;
    
    
    rc = MB_AddMessage(b_marriage, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'marriage' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'marriage' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'marriage' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_marriage* getInternalMessage_marriage(void)
{
    static m_marriage *msg_prev = NULL;
    union pu_marriage msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_marriage); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'marriage' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'marriage' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_marriage, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'marriage' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'marriage' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_marriage * get_first_marriage_message()
 * \brief Get the first marriage message in the marriage message list.
 * \return The first message in the list.
 */
m_marriage * get_first_marriage_message()
{
	return getInternalMessage_marriage();
}

/** \fn xmachine_message_marriage * get_next_marriage_message(xmachine_message_marriage * current)
 * \brief Get the next marriage message in the marriage message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_marriage * get_next_marriage_message(m_marriage * current)
{
	return getInternalMessage_marriage();
}


/* Box filtering functions */




union pu_respuestaID 
{
    m_respuestaID *ptr;
    void *ptr_anon;
};

/** \fn void add_respuestaID_message(int freeID, int indvID, int clanID)
 * \brief Add respuestaID message by calling internal and processing.
 * \param freeID Message variable.
 * \param indvID Message variable.
 * \param clanID Message variable.
 */
void add_respuestaID_message(int freeID, int indvID, int clanID)
{
    int rc;
	m_respuestaID msg;
    
    msg.freeID = freeID;
    msg.indvID = indvID;
    msg.clanID = clanID;
    
    
    rc = MB_AddMessage(b_respuestaID, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'respuestaID' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'respuestaID' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'respuestaID' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_respuestaID* getInternalMessage_respuestaID(void)
{
    static m_respuestaID *msg_prev = NULL;
    union pu_respuestaID msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_respuestaID); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'respuestaID' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'respuestaID' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_respuestaID, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'respuestaID' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'respuestaID' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_respuestaID * get_first_respuestaID_message()
 * \brief Get the first respuestaID message in the respuestaID message list.
 * \return The first message in the list.
 */
m_respuestaID * get_first_respuestaID_message()
{
	return getInternalMessage_respuestaID();
}

/** \fn xmachine_message_respuestaID * get_next_respuestaID_message(xmachine_message_respuestaID * current)
 * \brief Get the next respuestaID message in the respuestaID message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_respuestaID * get_next_respuestaID_message(m_respuestaID * current)
{
	return getInternalMessage_respuestaID();
}


/* Box filtering functions */




union pu_lmarriage 
{
    m_lmarriage *ptr;
    void *ptr_anon;
};

/** \fn void add_lmarriage_message(int manID, int girlID, int clanID, int mancestorsID, int mancestorsCID)
 * \brief Add lmarriage message by calling internal and processing.
 * \param manID Message variable.
 * \param girlID Message variable.
 * \param clanID Message variable.
 * \param mancestorsID Message variable.
 * \param mancestorsCID Message variable.
 */
void add_lmarriage_message(int manID, int girlID, int clanID, int mancestorsID[], int mancestorsCID[])
{
    int rc;
	m_lmarriage msg;
    
    msg.manID = manID;
    msg.girlID = girlID;
    msg.clanID = clanID;
    memcpy(msg.mancestorsID, mancestorsID, 2*sizeof(int));
    memcpy(msg.mancestorsCID, mancestorsCID, 2*sizeof(int));
    
    
    rc = MB_AddMessage(b_lmarriage, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'lmarriage' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'lmarriage' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'lmarriage' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_lmarriage* getInternalMessage_lmarriage(void)
{
    static m_lmarriage *msg_prev = NULL;
    union pu_lmarriage msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_lmarriage); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'lmarriage' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'lmarriage' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_lmarriage, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'lmarriage' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'lmarriage' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_lmarriage * get_first_lmarriage_message()
 * \brief Get the first lmarriage message in the lmarriage message list.
 * \return The first message in the list.
 */
m_lmarriage * get_first_lmarriage_message()
{
	return getInternalMessage_lmarriage();
}

/** \fn xmachine_message_lmarriage * get_next_lmarriage_message(xmachine_message_lmarriage * current)
 * \brief Get the next lmarriage message in the lmarriage message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_lmarriage * get_next_lmarriage_message(m_lmarriage * current)
{
	return getInternalMessage_lmarriage();
}


/* Box filtering functions */




union pu_warningDivide 
{
    m_warningDivide *ptr;
    void *ptr_anon;
};

/** \fn void add_warningDivide_message(int clanID)
 * \brief Add warningDivide message by calling internal and processing.
 * \param clanID Message variable.
 */
void add_warningDivide_message(int clanID)
{
    int rc;
	m_warningDivide msg;
    
    msg.clanID = clanID;
    
    
    rc = MB_AddMessage(b_warningDivide, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'warningDivide' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'warningDivide' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'warningDivide' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_warningDivide* getInternalMessage_warningDivide(void)
{
    static m_warningDivide *msg_prev = NULL;
    union pu_warningDivide msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_warningDivide); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'warningDivide' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'warningDivide' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_warningDivide, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'warningDivide' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'warningDivide' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_warningDivide * get_first_warningDivide_message()
 * \brief Get the first warningDivide message in the warningDivide message list.
 * \return The first message in the list.
 */
m_warningDivide * get_first_warningDivide_message()
{
	return getInternalMessage_warningDivide();
}

/** \fn xmachine_message_warningDivide * get_next_warningDivide_message(xmachine_message_warningDivide * current)
 * \brief Get the next warningDivide message in the warningDivide message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_warningDivide * get_next_warningDivide_message(m_warningDivide * current)
{
	return getInternalMessage_warningDivide();
}


/* Box filtering functions */




union pu_transfer 
{
    m_transfer *ptr;
    void *ptr_anon;
};

/** \fn void add_transfer_message(int clanID, int newID, int indvID)
 * \brief Add transfer message by calling internal and processing.
 * \param clanID Message variable.
 * \param newID Message variable.
 * \param indvID Message variable.
 */
void add_transfer_message(int clanID, int newID, int indvID)
{
    int rc;
	m_transfer msg;
    
    msg.clanID = clanID;
    msg.newID = newID;
    msg.indvID = indvID;
    
    
    rc = MB_AddMessage(b_transfer, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'transfer' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'transfer' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'transfer' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_transfer* getInternalMessage_transfer(void)
{
    static m_transfer *msg_prev = NULL;
    union pu_transfer msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_transfer); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'transfer' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'transfer' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_transfer, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'transfer' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'transfer' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_transfer * get_first_transfer_message()
 * \brief Get the first transfer message in the transfer message list.
 * \return The first message in the list.
 */
m_transfer * get_first_transfer_message()
{
	return getInternalMessage_transfer();
}

/** \fn xmachine_message_transfer * get_next_transfer_message(xmachine_message_transfer * current)
 * \brief Get the next transfer message in the transfer message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_transfer * get_next_transfer_message(m_transfer * current)
{
	return getInternalMessage_transfer();
}


/* Box filtering functions */




union pu_clanmove 
{
    m_clanmove *ptr;
    void *ptr_anon;
};

/** \fn void add_clanmove_message(int x, int y, int sentido)
 * \brief Add clanmove message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param sentido Message variable.
 */
void add_clanmove_message(int x, int y, int sentido)
{
    int rc;
	m_clanmove msg;
    
    msg.x = x;
    msg.y = y;
    msg.sentido = sentido;
    
    
    rc = MB_AddMessage(b_clanmove, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'clanmove' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanmove' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanmove' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_clanmove* getInternalMessage_clanmove(void)
{
    static m_clanmove *msg_prev = NULL;
    union pu_clanmove msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_clanmove); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'clanmove' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'clanmove' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_clanmove, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'clanmove' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanmove' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_clanmove * get_first_clanmove_message()
 * \brief Get the first clanmove message in the clanmove message list.
 * \return The first message in the list.
 */
m_clanmove * get_first_clanmove_message()
{
	return getInternalMessage_clanmove();
}

/** \fn xmachine_message_clanmove * get_next_clanmove_message(xmachine_message_clanmove * current)
 * \brief Get the next clanmove message in the clanmove message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_clanmove * get_next_clanmove_message(m_clanmove * current)
{
	return getInternalMessage_clanmove();
}


/* Box filtering functions */
double xxx_message_extract_x(void *msg_ptr) { return (double)((m_xxx*)msg_ptr)->x; }
double xxx_message_extract_y(void *msg_ptr) { return (double)((m_xxx*)msg_ptr)->y; }


union pu_xxx 
{
    m_xxx *ptr;
    void *ptr_anon;
};

/** \fn void add_xxx_message(int clanID, int x, int y, int linguistics, int needCooperation)
 * \brief Add xxx message by calling internal and processing.
 * \param clanID Message variable.
 * \param x Message variable.
 * \param y Message variable.
 * \param linguistics Message variable.
 * \param needCooperation Message variable.
 */
void add_xxx_message(int clanID, int x, int y, int linguistics[], int needCooperation)
{
    int rc;
	m_xxx msg;
    
    msg.clanID = clanID;
    msg.x = x;
    msg.y = y;
    memcpy(msg.linguistics, linguistics, 100*sizeof(int));
    msg.needCooperation = needCooperation;
    
    
    rc = MB_AddMessage(b_xxx, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'xxx' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'xxx' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'xxx' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_xxx* getInternalMessage_xxx(void)
{
    static m_xxx *msg_prev = NULL;
    union pu_xxx msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_xxx); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'xxx' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'xxx' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_xxx, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'xxx' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'xxx' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_xxx * get_first_xxx_message()
 * \brief Get the first xxx message in the xxx message list.
 * \return The first message in the list.
 */
m_xxx * get_first_xxx_message()
{
	return getInternalMessage_xxx();
}

/** \fn xmachine_message_xxx * get_next_xxx_message(xmachine_message_xxx * current)
 * \brief Get the next xxx message in the xxx message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_xxx * get_next_xxx_message(m_xxx * current)
{
	return getInternalMessage_xxx();
}


/* Box filtering functions */




union pu_yyy 
{
    m_yyy *ptr;
    void *ptr_anon;
};

/** \fn void add_yyy_message(int clanID, int coopClanID, int needCooperation, int guanaco_record)
 * \brief Add yyy message by calling internal and processing.
 * \param clanID Message variable.
 * \param coopClanID Message variable.
 * \param needCooperation Message variable.
 * \param guanaco_record Message variable.
 */
void add_yyy_message(int clanID, int coopClanID, int needCooperation, int guanaco_record[])
{
    int rc;
	m_yyy msg;
    
    msg.clanID = clanID;
    msg.coopClanID = coopClanID;
    msg.needCooperation = needCooperation;
    memcpy(msg.guanaco_record, guanaco_record, 15*sizeof(int));
    
    
    rc = MB_AddMessage(b_yyy, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'yyy' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'yyy' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'yyy' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_yyy* getInternalMessage_yyy(void)
{
    static m_yyy *msg_prev = NULL;
    union pu_yyy msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_yyy); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'yyy' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'yyy' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_yyy, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'yyy' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'yyy' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_yyy * get_first_yyy_message()
 * \brief Get the first yyy message in the yyy message list.
 * \return The first message in the list.
 */
m_yyy * get_first_yyy_message()
{
	return getInternalMessage_yyy();
}

/** \fn xmachine_message_yyy * get_next_yyy_message(xmachine_message_yyy * current)
 * \brief Get the next yyy message in the yyy message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_yyy * get_next_yyy_message(m_yyy * current)
{
	return getInternalMessage_yyy();
}


/* Box filtering functions */
double clanspatch_message_extract_x(void *msg_ptr) { return (double)((m_clanspatch*)msg_ptr)->x; }
double clanspatch_message_extract_y(void *msg_ptr) { return (double)((m_clanspatch*)msg_ptr)->y; }


union pu_clanspatch 
{
    m_clanspatch *ptr;
    void *ptr_anon;
};

/** \fn void add_clanspatch_message(int x, int y, int pclans)
 * \brief Add clanspatch message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param pclans Message variable.
 */
void add_clanspatch_message(int x, int y, int pclans)
{
    int rc;
	m_clanspatch msg;
    
    msg.x = x;
    msg.y = y;
    msg.pclans = pclans;
    
    
    rc = MB_AddMessage(b_clanspatch, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'clanspatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanspatch' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'clanspatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_clanspatch* getInternalMessage_clanspatch(void)
{
    static m_clanspatch *msg_prev = NULL;
    union pu_clanspatch msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_clanspatch); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'clanspatch' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'clanspatch' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_clanspatch, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'clanspatch' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'clanspatch' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_clanspatch * get_first_clanspatch_message()
 * \brief Get the first clanspatch message in the clanspatch message list.
 * \return The first message in the list.
 */
m_clanspatch * get_first_clanspatch_message()
{
	return getInternalMessage_clanspatch();
}

/** \fn xmachine_message_clanspatch * get_next_clanspatch_message(xmachine_message_clanspatch * current)
 * \brief Get the next clanspatch message in the clanspatch message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_clanspatch * get_next_clanspatch_message(m_clanspatch * current)
{
	return getInternalMessage_clanspatch();
}


/* Box filtering functions */
double guanacospatch_message_extract_x(void *msg_ptr) { return (double)((m_guanacospatch*)msg_ptr)->x; }
double guanacospatch_message_extract_y(void *msg_ptr) { return (double)((m_guanacospatch*)msg_ptr)->y; }


union pu_guanacospatch 
{
    m_guanacospatch *ptr;
    void *ptr_anon;
};

/** \fn void add_guanacospatch_message(int x, int y, int adultos, int season)
 * \brief Add guanacospatch message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param adultos Message variable.
 * \param season Message variable.
 */
void add_guanacospatch_message(int x, int y, int adultos, int season)
{
    int rc;
	m_guanacospatch msg;
    
    msg.x = x;
    msg.y = y;
    msg.adultos = adultos;
    msg.season = season;
    
    
    rc = MB_AddMessage(b_guanacospatch, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'guanacospatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'guanacospatch' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'guanacospatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_guanacospatch* getInternalMessage_guanacospatch(void)
{
    static m_guanacospatch *msg_prev = NULL;
    union pu_guanacospatch msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_guanacospatch); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'guanacospatch' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'guanacospatch' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_guanacospatch, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'guanacospatch' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'guanacospatch' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_guanacospatch * get_first_guanacospatch_message()
 * \brief Get the first guanacospatch message in the guanacospatch message list.
 * \return The first message in the list.
 */
m_guanacospatch * get_first_guanacospatch_message()
{
	return getInternalMessage_guanacospatch();
}

/** \fn xmachine_message_guanacospatch * get_next_guanacospatch_message(xmachine_message_guanacospatch * current)
 * \brief Get the next guanacospatch message in the guanacospatch message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_guanacospatch * get_next_guanacospatch_message(m_guanacospatch * current)
{
	return getInternalMessage_guanacospatch();
}


/* Box filtering functions */




union pu_infoGuanacos 
{
    m_infoGuanacos *ptr;
    void *ptr_anon;
};

/** \fn void add_infoGuanacos_message(int x, int y, int amount)
 * \brief Add infoGuanacos message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param amount Message variable.
 */
void add_infoGuanacos_message(int x, int y, int amount)
{
    int rc;
	m_infoGuanacos msg;
    
    msg.x = x;
    msg.y = y;
    msg.amount = amount;
    
    
    rc = MB_AddMessage(b_infoGuanacos, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'infoGuanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoGuanacos' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoGuanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_infoGuanacos* getInternalMessage_infoGuanacos(void)
{
    static m_infoGuanacos *msg_prev = NULL;
    union pu_infoGuanacos msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_infoGuanacos); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'infoGuanacos' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'infoGuanacos' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_infoGuanacos, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'infoGuanacos' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoGuanacos' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_infoGuanacos * get_first_infoGuanacos_message()
 * \brief Get the first infoGuanacos message in the infoGuanacos message list.
 * \return The first message in the list.
 */
m_infoGuanacos * get_first_infoGuanacos_message()
{
	return getInternalMessage_infoGuanacos();
}

/** \fn xmachine_message_infoGuanacos * get_next_infoGuanacos_message(xmachine_message_infoGuanacos * current)
 * \brief Get the next infoGuanacos message in the infoGuanacos message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_infoGuanacos * get_next_infoGuanacos_message(m_infoGuanacos * current)
{
	return getInternalMessage_infoGuanacos();
}


/* Box filtering functions */




union pu_repCal 
{
    m_repCal *ptr;
    void *ptr_anon;
};

/** \fn void add_repCal_message(int x, int y, int cal_per)
 * \brief Add repCal message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param cal_per Message variable.
 */
void add_repCal_message(int x, int y, int cal_per)
{
    int rc;
	m_repCal msg;
    
    msg.x = x;
    msg.y = y;
    msg.cal_per = cal_per;
    
    
    rc = MB_AddMessage(b_repCal, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'repCal' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'repCal' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'repCal' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_repCal* getInternalMessage_repCal(void)
{
    static m_repCal *msg_prev = NULL;
    union pu_repCal msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_repCal); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'repCal' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'repCal' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_repCal, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'repCal' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'repCal' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_repCal * get_first_repCal_message()
 * \brief Get the first repCal message in the repCal message list.
 * \return The first message in the list.
 */
m_repCal * get_first_repCal_message()
{
	return getInternalMessage_repCal();
}

/** \fn xmachine_message_repCal * get_next_repCal_message(xmachine_message_repCal * current)
 * \brief Get the next repCal message in the repCal message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_repCal * get_next_repCal_message(m_repCal * current)
{
	return getInternalMessage_repCal();
}


/* Box filtering functions */




union pu_adultospatch 
{
    m_adultospatch *ptr;
    void *ptr_anon;
};

/** \fn void add_adultospatch_message(int x, int y, int adultos, int sentido)
 * \brief Add adultospatch message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param adultos Message variable.
 * \param sentido Message variable.
 */
void add_adultospatch_message(int x, int y, int adultos, int sentido)
{
    int rc;
	m_adultospatch msg;
    
    msg.x = x;
    msg.y = y;
    msg.adultos = adultos;
    msg.sentido = sentido;
    
    
    rc = MB_AddMessage(b_adultospatch, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'adultospatch' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'adultospatch' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'adultospatch' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_adultospatch* getInternalMessage_adultospatch(void)
{
    static m_adultospatch *msg_prev = NULL;
    union pu_adultospatch msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_adultospatch); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'adultospatch' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'adultospatch' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_adultospatch, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'adultospatch' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'adultospatch' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_adultospatch * get_first_adultospatch_message()
 * \brief Get the first adultospatch message in the adultospatch message list.
 * \return The first message in the list.
 */
m_adultospatch * get_first_adultospatch_message()
{
	return getInternalMessage_adultospatch();
}

/** \fn xmachine_message_adultospatch * get_next_adultospatch_message(xmachine_message_adultospatch * current)
 * \brief Get the next adultospatch message in the adultospatch message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_adultospatch * get_next_adultospatch_message(m_adultospatch * current)
{
	return getInternalMessage_adultospatch();
}


/* Box filtering functions */




union pu_reproduccionguanacos 
{
    m_reproduccionguanacos *ptr;
    void *ptr_anon;
};

/** \fn void add_reproduccionguanacos_message(int x, int y, int count, int familia, int adultos)
 * \brief Add reproduccionguanacos message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param count Message variable.
 * \param familia Message variable.
 * \param adultos Message variable.
 */
void add_reproduccionguanacos_message(int x, int y, int count, int familia, int adultos)
{
    int rc;
	m_reproduccionguanacos msg;
    
    msg.x = x;
    msg.y = y;
    msg.count = count;
    msg.familia = familia;
    msg.adultos = adultos;
    
    
    rc = MB_AddMessage(b_reproduccionguanacos, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'reproduccionguanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_reproduccionguanacos* getInternalMessage_reproduccionguanacos(void)
{
    static m_reproduccionguanacos *msg_prev = NULL;
    union pu_reproduccionguanacos msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_reproduccionguanacos); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'reproduccionguanacos' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'reproduccionguanacos' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_reproduccionguanacos, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'reproduccionguanacos' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'reproduccionguanacos' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_reproduccionguanacos * get_first_reproduccionguanacos_message()
 * \brief Get the first reproduccionguanacos message in the reproduccionguanacos message list.
 * \return The first message in the list.
 */
m_reproduccionguanacos * get_first_reproduccionguanacos_message()
{
	return getInternalMessage_reproduccionguanacos();
}

/** \fn xmachine_message_reproduccionguanacos * get_next_reproduccionguanacos_message(xmachine_message_reproduccionguanacos * current)
 * \brief Get the next reproduccionguanacos message in the reproduccionguanacos message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_reproduccionguanacos * get_next_reproduccionguanacos_message(m_reproduccionguanacos * current)
{
	return getInternalMessage_reproduccionguanacos();
}


/* Box filtering functions */




union pu_numGuanacos 
{
    m_numGuanacos *ptr;
    void *ptr_anon;
};

/** \fn void add_numGuanacos_message(int x, int y)
 * \brief Add numGuanacos message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 */
void add_numGuanacos_message(int x, int y)
{
    int rc;
	m_numGuanacos msg;
    
    msg.x = x;
    msg.y = y;
    
    
    rc = MB_AddMessage(b_numGuanacos, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'numGuanacos' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'numGuanacos' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'numGuanacos' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_numGuanacos* getInternalMessage_numGuanacos(void)
{
    static m_numGuanacos *msg_prev = NULL;
    union pu_numGuanacos msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_numGuanacos); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'numGuanacos' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'numGuanacos' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_numGuanacos, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'numGuanacos' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'numGuanacos' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_numGuanacos * get_first_numGuanacos_message()
 * \brief Get the first numGuanacos message in the numGuanacos message list.
 * \return The first message in the list.
 */
m_numGuanacos * get_first_numGuanacos_message()
{
	return getInternalMessage_numGuanacos();
}

/** \fn xmachine_message_numGuanacos * get_next_numGuanacos_message(xmachine_message_numGuanacos * current)
 * \brief Get the next numGuanacos message in the numGuanacos message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_numGuanacos * get_next_numGuanacos_message(m_numGuanacos * current)
{
	return getInternalMessage_numGuanacos();
}


/* Box filtering functions */




union pu_infoHunter 
{
    m_infoHunter *ptr;
    void *ptr_anon;
};

/** \fn void add_infoHunter_message(int x, int y, int hunters, int clans)
 * \brief Add infoHunter message by calling internal and processing.
 * \param x Message variable.
 * \param y Message variable.
 * \param hunters Message variable.
 * \param clans Message variable.
 */
void add_infoHunter_message(int x, int y, int hunters, int clans[])
{
    int rc;
	m_infoHunter msg;
    
    msg.x = x;
    msg.y = y;
    msg.hunters = hunters;
    memcpy(msg.clans, clans, 2*sizeof(int));
    
    
    rc = MB_AddMessage(b_infoHunter, &msg);
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not add message to 'infoHunter' board\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoHunter' board has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
           case MB_ERR_LOCKED:
               fprintf(stderr, "\t reason: 'infoHunter' board is locked\n");
               break;
           case MB_ERR_INTERNAL:
               fprintf(stderr, "\t reason: internal error. Recompile libmoard in debug mode for more info \n");
               break;
	       default:
               fprintf(stderr, "\t MB_AddMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	   }
	      
	   MPI_Abort(MPI_COMM_WORLD, rc);
       exit(rc);
    }
    #endif
}

inline static m_infoHunter* getInternalMessage_infoHunter(void)
{
    static m_infoHunter *msg_prev = NULL;
    union pu_infoHunter msg_pu;
    int rc;
    
    /* deallocate previously returned message */
    if (msg_prev != NULL) 
    {
        free(msg_prev);
    }
    else 
    {
        rc = MB_Iterator_Rewind(i_infoHunter); 
        #ifdef ERRCHECK
        if (rc != MB_SUCCESS)
        {
            fprintf(stderr, "ERROR: Could not rewind 'infoHunter' Iterator\n");
            switch(rc) {
                case MB_ERR_INVALID:
                    fprintf(stderr, "\t reason: 'infoHunter' Iterator has not been created?\n");
                    break;
	            default:
                    fprintf(stderr, "\t MB_Iterator_Rewind returned error code: %d (see libmboard docs for details)\n", rc);
                    break;
	        }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
        }
        #endif
    }
    
    /* get next message from iterator */
    rc = MB_Iterator_GetMessage(i_infoHunter, &(msg_pu.ptr_anon));
    #ifdef ERRCHECK
    if (rc != MB_SUCCESS)
    {
       fprintf(stderr, "ERROR: Could not get message from 'infoHunter' Iterator\n");
       switch(rc) {
           case MB_ERR_INVALID:
               fprintf(stderr, "\t reason: 'infoHunter' Iterator has not been created?\n");
               break;
           case MB_ERR_MEMALLOC:
               fprintf(stderr, "\t reason: out of memory\n");
               break;
	       default:
               fprintf(stderr, "\t MB_Iterator_GetMessage returned error code: %d (see libmboard docs for details)\n", rc);
               break;
	       }
	       
	       MPI_Abort(MPI_COMM_WORLD, rc);
       	   exit(rc);
    }
    #endif
    
    /* store pointer so memory can be deallocated later */
    msg_prev = msg_pu.ptr;
    
    return msg_pu.ptr;
}

/** \fn xmachine_message_infoHunter * get_first_infoHunter_message()
 * \brief Get the first infoHunter message in the infoHunter message list.
 * \return The first message in the list.
 */
m_infoHunter * get_first_infoHunter_message()
{
	return getInternalMessage_infoHunter();
}

/** \fn xmachine_message_infoHunter * get_next_infoHunter_message(xmachine_message_infoHunter * current)
 * \brief Get the next infoHunter message in the infoHunter message list after the current message.
 * \param current The current message in the list.
 * \return The next message in the list.
 */
m_infoHunter * get_next_infoHunter_message(m_infoHunter * current)
{
	return getInternalMessage_infoHunter();
}

