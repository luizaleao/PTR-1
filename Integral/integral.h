/*
 * integral.h
 *
 *  Created on: 2 de jul de 2022
 *      Author: Rodrigo Printes
 */

#ifndef INTEGRAL_H_
#define INTEGRAL_H_


typedef double FX_(double x); // teste para função polinomial
typedef double Fx_trapezio(double a, double b , FX_ *PtrPow);

typedef void printFF();

typedef struct integral{
	int a; // limite inferior da integral
	int b; // limite superior da integral
	void *fx;


}Integral;
/*
 * Metodo do Trapézio
 * T(fx) = [f(a) - f(b)(b-a)]/2
 * Onde f é a função e 'a', 'b' os limites da integral
 * */

double integral_Trapezio( double a, double b , FX_ *ptrPow);
double integral_trapezioSimples(double a, double b , FX_ *PtrPow );
#endif /* INTEGRAL_H_ */
