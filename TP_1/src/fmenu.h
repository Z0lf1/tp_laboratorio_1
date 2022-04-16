/*
 * fmenu.h
 *
 *  Created on: 12 abr. 2022
 *      Author: neopi
 */

#ifndef FMENU_H_
#define FMENU_H_

/// @brief Pide ingreso de un entero para ubicarlo como el valor distancia.
///
/// @return retorna dicho valor.
int tomaKm();

/// @brief Toma un entero para ubicarlo como precio del vuelo Aerolineas
///
/// @param flagAA el cambio de la bandera permite el accionar del punto 3
/// @return retorna valor del vuelo de Aerolineas.
int ingresoAA(int*);

/// @brief Toma un entero para ubicarlo como precio del vuelo Aerolineas
///
/// @param flagLA el cambio de la bandera permite el accionar del punto 3
/// @return retorna valor del vuelo de Latam.
int ingresoLA(int*);

/// @brief Tomas los valores resultantes de las operaciones y los muestra en sus respectivos espacios.
///
/// @param x int que representa valor de distancia de viaje
/// @param y int que representa valor de precio del vuelo Aerolineas
/// @param z int que representa valor de precio del vuelo Latam
/// @param difValores float que representa  el resultado de la operacion de diferencia de valores entre viaje Aerolineas y Latam.
/// @param valorDebitoA float que representa resultado posterior a la aplicacion del descuento sobre el viaje  Aerolineas.
/// @param valorCreditoA float que representa resultado posterior a la aplicacion del aumento el viaje  Aerolineas .
/// @param valorBitA float que representa valor del viaje  Aerolineas expresado en valor bitcoin.
/// @param precioKmAerolineas float que representa valor del km unitario del viaje  Aerolineas.
/// @param valorDebitoL float que representa resultado posterior a la aplicacion del descuento al viaje Latam.
/// @param valorCreditoL float que representa resultado posterior a la aplicacion del aumento al viaje Latam.
/// @param valorBitL float que representa resultado posterior a la aplicacion del descuento al viaje Latam.
/// @param precioKmLatam float que representa valor del km unitario del viaje Latam
void submenuResultados(int, int, int, int, float, float, double, float, float, float, double, float);

/// @brief Muestra Menu principal
///
/// @param x toma un entero para mostrarlo en el print de distancia
/// @param y toma un entero para mostrarlo como precio del vuelo de primer aerolinea via print.
/// @param z toma un entero para mostrarlo como precio del vuelo de segunda aerolinea via print.
/// @return retorna un entero util para opciones.
int menu(int, int, int, int);


#endif /* FMENU_H_ */
