/*
 * ArrayPassenger.c
 *
 *  Created on: 14 may. 2022
 *      Author: neopi
 */
#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "TP_[2].c"

int initPassengers(Passenger* list, int len)
{
    int todoOk = -1;

    if( list != NULL && len > 0)
    {
        todoOk = 0;

        for(int i=0; i < len; i++)
        {
            list[i].isEmpty = 1;
        }
        todoOk = 1;
    }
    return todoOk;
}

int addPassenger(Passenger* list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[])
{
	int librePos= -1;
		for(int i=0; i < len; i++){
			if(list[i].isEmpty){
				//saber posicion del espacio libre
				librePos = i;
				break;
			}
return -1;
}

int findPassengerById(Passenger* list, int len,int id)
{
return NULL;
}

int removePassenger(Passenger* list, int len, int id)
{
return -1;
}

int sortPassengers(Passenger* list, int len, int order)
{
return 0;
}

int printPassenger(Passenger* list, int length)
{
return 0;
}


