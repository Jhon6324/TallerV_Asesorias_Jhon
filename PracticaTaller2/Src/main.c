/*
 * main.c
 *
 *  Created on: Aug 26, 2022
 *      Author: jveragarat
 */

#include <stdint.h>

// Definición de variables

// Variables de 8 bits

unsigned char siempreUsarCamelCase = 7;		// Definición de una variable sin signo y de 8 bits
uint8_t diasDeLaSemana = 7;					// Segunda definición de una variable sin signo y de 8 bits

char miPrimerCaracter = 'J';				// Definición de un caracter de 8 bits
int8_t miPrimerNumeroNegativo = -2;			// Definición de un número negativo de 8 bits

// Variables de 16 bits

unsigned short diasAnuales = 365;			// Definición de una variable din digno de 16 bits
uint16_t diasAnuales2 = 370;				// Segunda definición de una variable de 16 bits

// Variables de 32 bits

unsigned int x, y, z;						// Definición de 3 variables en una línea
int a = 1, b = 2, c = 3;					// Inicialización de 3 variables en una línea
unsigned int i; int j; long k; 				//

// Otros tipos de variables

char miPrierArreglo[5] = "LINUX";
uint32_t miSegundoArreglo[3] = {299792458, 787623349, 0};

int main(void){

	// Tamaño de variables en diferentes compiladores
	char edad = 23;

	char sizeChar = sizeof(edad);
	char sizeShort = sizeof(short);
	char sizeInt = sizeof(int);
	char sizeIntlong = sizeof(long int);
	char sizelonglongint = sizeof(long long int);
}

