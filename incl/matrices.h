#ifndef MATRICES_H
# define MATRICES_H
# include "math_structs.h"

/*Basic matrix operations */
void mat_add(Matrix *a, Matrix b);
void mat_sub(Matrix *a, Matrix b);
Matrix mat_mult(Matrix a, Matrix b);

/* Multiply by a scalar number*/
void mat_scale(Matrix *a, double scalar);

/*Duplicates given matrix*/
Matrix mat_dup(Matrix mat);

#endif
