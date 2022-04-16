/*
 * fmenu.c
 *
 *  Created on: 12 abr. 2022
 *      Author: neopi
 */
#include <stdio.h>
#include <stdlib.h>
#include "fmenu.h"
#include "fOpe.h"
//Muestra Menu principal
int menu(int x,int y, int z, int flagPrecio){
	int opcion;
	    printf(" *** Menu de Opciones ***\n");
        printf("1. Ingresar Kilómetros: (km= %d)\n",x);
        if(flagPrecio==0)
        {
        	printf("2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n");
        }
        else
        {
        	printf("2. Ingresar Precio de Vuelos: (Aerolineas: $ %d / Latam: $ %d) \n",y,z);
        }
        printf("3. Calcular todos los costos: \n");
        printf("4. Informar Resultados \n");
        printf("5. Carga forzada de datos \n");
        printf("6. Salir \n");
        printf("\n Ingrese una opcion: ");
        fflush(stdin);
        scanf("%d", &opcion);
        return opcion;
}
// Pide ingreso de un entero para ubicarlo como el valor distancia.
int tomaKm(){
	int x;
	printf(" Ingresar cantidad de Kilómetros: ( km=x) \n");
	fflush(stdin);
	scanf("%d", &x);
	while(x<0)
	{
		printf(" Ingresar cantidad de Kilómetros no negativa: ( km=x) \n");
		scanf("%d", &x);
	}
	return x;
}


// Toma un entero para ubicarlo como precio del vuelo Aerolineas
int ingresoAA(int* flagAA){
	int y;
	if(*flagAA==1)
	{
		printf("Ingresar precio del viaje por Aerolineas: ");
		fflush(stdin);
		scanf("%d",&y);
		while(y<10000)
			{
				printf(" ERROR Ingresar precio no menor a 10000 para el viaje por Aerolineas: \n");
				scanf("%d", &y);
			}
		*flagAA=0;
	}

		return y;//void
}
// Toma un entero para ubicarlo como precio del vuelo Aerolineas
int ingresoLA(int* flagLA){
	int z;
	if(*flagLA==1)
	{
		printf("Ingresar precio del viaje por LATAM : ");
		fflush(stdin);
		scanf("%d",&z);
		while(z<10000)
			{
				printf(" ERROR Ingresar precio no menor a 10000 para el viaje por Latam: \n");
				scanf("%d", &z);
			}
		*flagLA=0;
	}
	return z;
}
//Toma los valores resultantes de las operaciones y los muestra en sus respectivos espacios.
void submenuResultados(int x, int y, int z, int difValores, float valorDebitoA, float valorCreditoA, double valorBitA, float precioKmAerolineas,float valorDebitoL,float valorCreditoL,double valorBitL, float precioKmLatam){
	printf("KILOMETROS INGRESADOS: %d\n", x);
	printf("PRECIO AEROLINEAS: %d\n", y);
	printf("a) Precio con tarjeta de débito: %.2f\n", valorDebitoA);
	printf("b) Precio con tarjeta de crédito: %.2f\n", valorCreditoA);
	printf("c) Precio pagando con bitcoin : %f\n", valorBitA);
	printf("d) Precio unitario: %.2f\n\n", precioKmAerolineas);
	printf("PRECIO LATAM: %d\n",z);
	printf("a) Precio con tarjeta de débito: %.2f\n", valorDebitoL);
	printf("b) Precio con tarjeta de crédito: %.2f\n", valorCreditoL);
	printf("c) Precio en bitcoin es: %f\n", valorBitL);
	printf("d) Precio unitario: %.2f\n", precioKmLatam);
	printf("La Diferencia de valores es: %d\n",difValores);

}

