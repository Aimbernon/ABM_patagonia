#include "commons.h"
#include "header.h"
#include "hunting_agent_header.h"

// Inicializacion de la partida de caza 
int get_hunters()
{
	int i,target[2]={get_x(),get_y()};
	float alpha = 1.0,max=0.0;
	printf ("partida de caza de %d y su creador %d\n",get_clans()[0],get_clans()[1]);
	printf("cantidad del clan 1 %d y del 2 %d\n",get_guanacos()[0],get_guanacos()[15]);

	// obtain the best hunting route of guanacos
	for (i=0;i<10;i++)
	{
		//printf ("%f\n",alpha*get_guanacos()[i*3]);
		if (max < alpha*get_guanacos()[i*3])
		{
			max = alpha*get_guanacos()[i*3];
			target[1] =	get_guanacos()[i*3+1];
			target[2] =	get_guanacos()[i*3+2];
		}
		alpha = (i==4)?1:alpha-0.2;
	}
	DESTINY[0]=target[0];
	DESTINY[1]=target[1];
	//printf ("maxima cantidad %f\n",max);
	printf("creada\n");
	return 0;
}

// Movimiento de la partida de caza hacia el patch destino
int move_hunters ()
{
	int x = get_x(), y = get_y(), guanacos;

	// Si estoy cazando no me muevo del patch
	if (get_start() == 1)
		return 0;

	// Change the patch
	// Avanzar en x
	if (x != DESTINY[0])
		x = (x>DESTINY[0]) ? x-1:x+1;
	// Avanzar en y
	else if (y != DESTINY[1])
		y = (y>DESTINY[1]) ? y-1:y+1;
	// Llegada al objetivo
	else
		set_arrive(1);
	// Asks guanacos number to the new patch
	add_numGuanacos_message (x,y);
/*	// Recive num of guanacos
	START_INFOGUANACOS_MESSAGE_LOOP
		guanacos = infoGuanacos_message->amount;
	FINISH_INFOGUANACOS_MESSAGE_LOOP
	// si hay guanacos comenzar la caza
	if (guanacos > 0)
		set_start(1);
	// Sino y se ha llegado al destino, acabar la caza
	else if (get_arrive() == 1 )
		set_end(1);*/
	set_x(x);
	set_y(y);
	printf("movido\n");
	return 0;
}

int get_numGuanacos()
{
	int guanacos =0;
	// Recive num of guanacos
	printf("preguntando\n");
	START_INFOGUANACOS_MESSAGE_LOOP
		guanacos = infoGuanacos_message->amount;
	FINISH_INFOGUANACOS_MESSAGE_LOOP
	// si hay guanacos comenzar la caza
	if (guanacos > 0)
		set_start(1);
	// Sino y se ha llegado al destino, acabar la caza
	else if (get_arrive() == 1 )
		set_end(1);

	return 0;
}

// Al llegar al destino se informa al pacth para que comienze la caza
int hunting ()
{
	printf("cazando\n");
	// Indicar al patch que voy a cazar en el
	add_infoHunter_message (get_x(),get_y(),10,get_clans());
	set_end(1);
	
	return 0;
}

int comprove_end ()
{
	printf("acabando ? soy %d\n",get_x());
	int cal,cal_per,message =0;
	// obtener calorias/personas ganadas en la caceria
	START_REPCAL_MESSAGE_LOOP
		cal_per= repCal_message->cal_per;
		message ++;
	FINISH_REPCAL_MESSAGE_LOOP

	if (message >0)
		printf ("%d\n",cal_per);
		//add_resultHunt_message (get_clans()[0],get_clans()[1],cal_per);
	return 1;
}

int idle_hunting()
{
	return 0;
}
