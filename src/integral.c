/*
 * integral.cc
 *
 *  Created on: 2 de jul de 2022
 *      Author: Rodrigo Printes
 *      implementação da ADT Integral
 *
 */

#include "integral.h"
//T(fx) = [f(a) - f(b)(b-a)]/2


/*
 * Parametros
 *
 * FX função a ser integrda
 * */
//( ( (*Ptr_Function)(b, grau,PtrPow) - (*Ptr_Function)(a, grau,PtrPow)  ) * ( b - a ) )/2

/*
 * Metodos
 * */

double integral_Trapezio(double a, double b , FX_ *PtrPow){
	double s = 0 ;
		for( float i  = a; i < b  ; i+= 0.001){
			s+= integral_trapezioSimples(i, i+0.001,PtrPow );

		}

	return s;

}
double integral_trapezioSimples(double a, double b , FX_ *PtrPow ){


	return ( ( ((*PtrPow)(a))+ ((*PtrPow)(b)) ) * (b-a) )/2;

}
