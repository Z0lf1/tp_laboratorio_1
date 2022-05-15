/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Z0lf1
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "ArrayPassenger.h"

#define MAX_PASS 2000
#define ID_INI 100

int main(void) {
	setbuf(stdout,NULL);
	char salir ='n';
	Passenger lst[MAX_PASS];
	int nextPass = ID_INI;

	initPassengers(lst, MAX_PASS);
	do{

	        switch(menu())
	        {
	        case 1:
	            //1. ALTAS: Se debe permitir ingresar un pasajero calculando automáticamente el
	        	//número de Id. El resto de los campos se le pedirá al usuario.
	        	altaPasajero(lst, nextPass);

	            break;
	        case 2:
	        	//2. MODIFICAR: Se ingresará el Número de Id, permitiendo modificar: o Nombre o Apellido
	        	//o Precio o Tipo de pasajero o Código de vuelo
	            break;

	        case 3:
	        	//3. BAJA: Se ingresará el Número de Id y se eliminará el empleado del sistema.
	        	removePassenger(Passenger list,  len,  id);
	            break;

	        case 4:
	        	/*4. INFORMAR:
	        	1. Listado de los pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.
	        	2. Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio
	        	promedio.
	        	3. Listado de los pasajeros por Código de vuelo y estados de vuelos ‘ACTIVO’
	            */
	            break;

	        case 5:
	            //SALIR
	            break;
	        }
	        //system("pause");
	}while(salir != 's');

	return EXIT_SUCCESS;
}
altaPasajero(Passenger list[], int PassengerId){

}
