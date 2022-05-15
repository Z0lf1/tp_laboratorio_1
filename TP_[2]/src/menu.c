/*
 * menu.c
 *
 *  Created on: 14 may. 2022
 *      Author: neopi
 */
#include <stdio.h>
#include <stdlib.h>

int menu()
{

    int opcion;

    system("cls");
    printf("     *** ABM Empleados ***\n\n");
    printf("1. ALTAS:\n");
    printf("2. MODIFICAR:\n");
    printf("3. BAJA:\n");
    printf("4. INFORMAR:\n");
    printf("5. Alta Forzada de pasajeros\n");
    printf("6. Salir\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;

}



  /*  do
    {
       printear menu

        switch(menu)
        {
            case 1:
            	1. ALTAS: Se debe permitir ingresar un pasajero calculando automáticamente el
            	número de Id. El resto de los campos se le pedirá al usuario.
               	2. MODIFICAR: Se ingresará el Número de Id, permitiendo modificar: o Nombre o Apellido
            	o Precio o Tipo de pasajero o Código de vuelo
              	3. BAJA: Se ingresará el Número de Id y se eliminará el empleado del sistema.
               	4. INFORMAR:
            	1. Listado de los pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.
            	2. Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio
            	promedio.
            	3. Listado de los pasajeros por Código de vuelo y estados de vuelos ‘ACTIVO’
               	Alta Forzada de pasajeros
            break;

            case 6:

			break;
        }
    }while(menuPrincipal<6);
*/
int altaPasajero(Passenger list[], int* PassengerId, int len){
	char name;
	char lastName;
	float price;
	char flycode;
	int typePassenger;

	printf("Ingrese nombre: ");
	fflush(stdin);
	gets();

	printf("Ingrese apellido: ");
	fflush(stdin);
	scanf("%c", &);

	printf("Ingrese price: ");
	scanf("%d", &);



 addPassenger(list, len,);


return;
}
