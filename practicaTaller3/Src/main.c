/**
 ******************************************************************************
 * @file           : main.c
 * @author         : jvergarat
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdbool.h>		// Librería para típos de variables booleanas
#include <math.h>			// Librería para operaciones matemáticas

#define NOP() __asm("NOP")


void miPrimeraFuncion(void);

uint8_t getMaxChar(void);

int main(void){

	miPrimeraFuncion();

	while(1){
		miPrimeraFuncion();
	}
}

void miPrimeraFuncion(void){

	// Manejo de variables booleanas

	uint8_t miPrimeraBandera = true;
	uint8_t miSegundaBandera = false;

	uint8_t XOR = miPrimeraBandera ^ miSegundaBandera;
	uint8_t OR = miPrimeraBandera || miSegundaBandera;
	uint8_t AND = miPrimeraBandera && miSegundaBandera;

	XOR ^= 1;
	XOR ^= 1;


}

