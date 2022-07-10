/*
 * main.c
 *
 *  Created on: 2 de jul de 2022
 *      Author: Rodrigo Printes
 *
 */

#include <stdio.h>
#include "integral.h"

double potencia(double b){
	return b*b;
}
int main(int argc, char **argv) {
	FX_ *ptrPow = potencia;


	double s = 0 ;
	for( float i  = 1; i < 5 ; i+= 1){
		s+= integral_trapezioSimples(i, i+1,ptrPow );

	}
	double s2 = integral_Trapezio( 0,  5 ,  ptrPow);

	printf("%f %.1f" , s,s2);

	return 0 ;
}
