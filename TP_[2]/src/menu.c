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
            	1. ALTAS: Se debe permitir ingresar un pasajero calculando autom�ticamente el
            	n�mero de Id. El resto de los campos se le pedir� al usuario.
               	2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
            	o Precio o Tipo de pasajero o C�digo de vuelo
              	3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
               	4. INFORMAR:
            	1. Listado de los pasajeros ordenados alfab�ticamente por Apellido y Tipo de pasajero.
            	2. Total y promedio de los precios de los pasajes, y cu�ntos pasajeros superan el precio
            	promedio.
            	3. Listado de los pasajeros por C�digo de vuelo y estados de vuelos �ACTIVO�
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
