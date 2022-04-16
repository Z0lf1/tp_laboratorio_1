/*
 ============================================================================
 Name        : TP1.c
 Author      : Z0lf1
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "fmenu.h"
#include "fOpe.h"
int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int x=0;//distancia
	int y=0; //Aerolineas
	int z=0; //latam
	float valorDebitoA;
	float valorCreditoA;
	double valorBitA;
	float precioKmAerolineas;
	float valorDebitoL;
	float valorCreditoL;
	double valorBitL;
	float precioKmLatam;
	int difVal=-1;
	int flagAA=1;
	int flagLA=1;


	do {//Toma opcion para disparar efecto
			opcion = menu(x,y,z);
			switch(opcion)
			{
				case 1:
					x = tomaKm();
					break;
				case 2:
					y = ingresoAA(&flagAA);
					z = ingresoLA(&flagLA);
					break;
				case 3:
					if(flagAA==0)
					{
						calculoValoresAA(x, y,  &valorDebitoA, &valorCreditoA,  &valorBitA, &precioKmAerolineas);
					}
					else
					{
						printf("Imposible calcular valores referentes a Aerolineas Argentinas, ingrese los valores pertinentes\n");
					}

					if(flagLA==0)
					{
						calculoValoresLA(x, z, &valorDebitoL, &valorCreditoL, &valorBitL, &precioKmLatam);
					}
					else
					{
						printf("Imposible calcular valores referentes a Latam, ingrese los valores pertinentes\n");
					}
					difVal = difValores(y,z);

					break;
				case 4:
					system("cls");
					if(difVal>=0)
					{
						submenuResultados(x, y, z, difVal, valorDebitoA, valorCreditoA, valorBitA, precioKmAerolineas, valorDebitoL, valorCreditoL, valorBitL, precioKmLatam);
					}
					else
					{
						printf("Imposible mostrar lo que no se calculo, ejecute el paso 3 previamente");
					}
					break;
				case 5:
					cargaForzada(&valorDebitoA, &valorCreditoA,  &valorBitA, &precioKmAerolineas, &valorDebitoL, &valorCreditoL, &valorBitL, &precioKmLatam);
					break;
				case 6:
					printf("SALIENDO\n");
					break;
				default:
					printf("Opcion incorrecta pone algo valido del 1 al 6\n");
			}
	  } while (opcion != 6);
	return EXIT_SUCCESS;
}





