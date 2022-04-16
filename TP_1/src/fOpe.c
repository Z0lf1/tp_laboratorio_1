/*
 * fOpe.c
 *
 *  Created on: 12 abr. 2022
 *      Author: neopi
 */
#include <stdio.h>
#include <stdlib.h>
#include "fOpe.h"
#include "fmenu.h"

//Agrupa las funciones avocadas al calculo de los valores relacionados con vuelos de Aerolineas
void calculoValoresAA(int x,int y, float* valorDebitoA, float* valorCreditoA, double* valorBitA, float* precioKmAerolineas)
{
	*valorDebitoA = precioDeb(y);
	*valorCreditoA = precioCred(y);
	*valorBitA = precioBit(y);
	*precioKmAerolineas = precioKmUnitario(y,x);
}

//Agrupa las funciones avocadas al calculo de los valores relacionados con vuelos de Latam
void calculoValoresLA(int x,int z, float* valorDebitoL, float* valorCreditoL, double* valorBitL,	float* precioKmLatam)
{
	*valorDebitoL= precioDeb(z);
	*valorCreditoL = precioCred(z);
	*valorBitL = precioBit(z);
	*precioKmLatam = precioKmUnitario(z,x);

 }
// @brief Toma los valores precargados para forzar la operacion de de las funciones y las imprime.
void cargaForzada(float* valorDebitoA, float* valorCreditoA, double* valorBitA, float* precioKmAerolineas , float* valorDebitoL, float* valorCreditoL, double* valorBitL,	float* precioKmLatam)
{
	int x = 7090;
	int y = 162965;
	int z = 159339;
	int difVal;
	calculoValoresAA(x, y, valorDebitoA, valorCreditoA, valorBitA, precioKmAerolineas);
	calculoValoresLA(x, z, valorDebitoL, valorCreditoL, valorBitL, precioKmLatam);
	difVal= difValores(y,z);
	submenuResultados(x,y,z, difVal, *valorDebitoA, *valorCreditoA, *valorBitA, *precioKmAerolineas, *valorDebitoL, *valorCreditoL, *valorBitL, *precioKmLatam);

}
// Toma el precio y le aplica descuento por pago debito
int precioDeb(int valor)
{//a) Tarjeta de débito (descuento 10%)
	int resultadoDeb;
	resultadoDeb = valor * 0.9;
	return resultadoDeb;
}
// Toma el precio y le aplica un aumento por pago credito
int precioCred(int valor)
{//b) Tarjeta de crédito (interés 25%)
	int resultadoCred;
	resultadoCred = valor * 1.25;
	return resultadoCred;
}
//Toma el precio ingresado y lo convierte a bitcoin
float precioBit(int valor)
{//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	float resultado;
	float bitVal = 4623262.09;
	resultado = valor/bitVal;
	return resultado;
}

//Tomando los valores calcula el valor del precio por Km unitario.
float precioKmUnitario (int valor, int distancia)
{
	float resultado;
	resultado = valor/(float) distancia;
	return resultado;
}

//Evalua cual de los valores tomados es mayor y lo ubica de forma que en la operacion el resultado sea positivo, expresando la diferencia.
int difValores(int aa, int la){
	int difValores;
	if(aa>la)
	{
		difValores=aa-la;
	}
	else
	{
		difValores=la-aa;
	}
return difValores;
}
