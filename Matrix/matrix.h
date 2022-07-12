/*
 * matrix.h
 *
 *  Created on: 29 de jun. de 2022
 *      Author: luiza
 */

/* ADT Matrix */

#ifndef _MATRIX_H
#define _MATRIX_H

typedef struct Matrix {
	unsigned int nlins;
	unsigned int ncols;
	double      *values;
} Matrix;

extern Matrix matrix_nul;

Matrix matrix_zeros(unsigned int nlins, unsigned int ncols);
Matrix matrix_ones(unsigned int nlins, unsigned int ncols);
Matrix matrix_identity(unsigned int nlins, unsigned int ncols);
Matrix matrix_copy(Matrix m);


Matrix matrix_inversa(Matrix m);
Matrix matrix_mult_escalar(double c, Matrix m);
Matrix matrix_div_escalar(double c, Matrix m);
Matrix matrix_soma_escalar(double c, Matrix m);
Matrix matrix_sub_escalar(double c, Matrix m);
Matrix matriz_transposta(Matrix m);
Matrix matrix_rand(int nlins, int ncols);
Matrix matrix_soma(Matrix a, Matrix b);
Matrix matrix_sub(Matrix a, Matrix b);
Matrix matrix_mult(Matrix a,Matrix b);




void matrix_free(Matrix *m);

double       matrix_value(Matrix m, int i, int j);
unsigned int matrix_nlins(Matrix m);
unsigned int matrix_ncols(Matrix m);
double matrix_det(Matrix m);


#endif

