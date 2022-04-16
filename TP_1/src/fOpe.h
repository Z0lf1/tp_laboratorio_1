/*
 * fOpe.h
 *
 *  Created on: 12 abr. 2022
 *      Author: neopi
 */

#ifndef FOPE_H_
#define FOPE_H_
/// @brief Agrupa las funciones avocadas al calculo de los valores relacionados con vuelos de Aerolineas
///
/// @param x Se presenta como un valor de distancia del vuelo
/// @param y Toma un entero para ubicarlo como precio del vuelo Aerolineas
/// @param valorDebitoA Representa el valor resultante de la aplicacion del descuento sobre valor original.
/// @param valorCreditoA Representa el valor resultante de la aplicacion del aumento sobre valor original.
/// @param valorBitA El precio del vuelo convertido a bitcoin
/// @param precioKmAerolineas Representa el valor del km unitario del viaje original (Aerolineas)
void calculoValoresAA(int, int, float*, float*, double*, float*);

/// @brief Agrupa las funciones avocadas al calculo de los valores relacionados con vuelos de Latam
///
/// @param x Se presenta como un valor de distancia del vuelo
/// @param z Toma un entero para ubicarlo como precio del vuelo Latam
/// @param valorDebitoL Representa el valor resultante de la aplicacion del descuento sobre valor original.
/// @param valorCreditoL Representa el valor resultante de la aplicacion del aumento sobre valor original.
/// @param valorBitL El precio del vuelo convertido a bitcoin
/// @param precioKmLatam Representa el valor del km unitario del viaje original (Latam)
void calculoValoresLA(int, int, float*, float*, double*, float*);

/// @brief Toma el precio y le aplica descuento por pago debito
///
/// @param valor Representa el precio ingresado del viaje
/// @return Retorna el resultado de la operacion
int precioDeb(int);

/// @brief Toma el precio y le aplica un aumento por pago credito
///
/// @param valor valor representa el precio ingresado del viaje
/// @return retorna el resultado de la operacion
int precioCred(int);

/// @brief Toma el precio ingresado y lo convierte a bitcoin
///
/// @param valor representa el precio ingresado del viaje
/// @return retorna el precio convertido a bitcoin
float precioBit(int);

/// @brief tomando los valores calcula el valor del precio por Km unitario.
///
/// @param valor representa el precio ingresado del viaje
/// @param distancia representa la distancia del viaje
/// @return retorna el valor resultante de la operacion
float precioKmUnitario(int, int);

/// @brief Evalua cual de los valores tomados es mayor y lo ubica de forma que en la operacion el resultado sea positivo, expresando la diferencia.
///
/// @param aa representa el valor referente de precio del vuelo Aerolineas
/// @param la representa el valor referente de precio del vuelo Latam
/// @return devuelve el valor resultalte de la diferencia.
int difValores(int, int);

/// @brief Toma los valores precargados para forzar la operacion de de las funciones y las imprime.
///
/// @param valorDebitoA Representa el valor resultante de la aplicacion del descuento sobre valor original(Aerolineas).
/// @param valorCreditoA Representa el valor resultante de la aplicacion del aumento sobre valor original(Aerolineas).
/// @param valorBitA Resenta el precio de vuelo (Aerolineas) convertido a bitcoin
/// @param precioKmAerolineas Representa el valor del km unitario del viaje original
/// @param valorDebitoL Representa el valor resultante de la aplicacion del descuento sobre valor original(Latam).
/// @param valorCreditoL Representa el valor resultante de la aplicacion del aumento sobre valor original (Latam).
/// @param valorBitL Resenta el precio de vuelo (Latam) convertido a bitcoin
/// @param precioKmLatam Representa valor del Km unitario del viaje original.
void cargaForzada(float* , float* , double* , float*  , float* , float* , double* ,	float*);
#endif /* FOPE_H_ */
