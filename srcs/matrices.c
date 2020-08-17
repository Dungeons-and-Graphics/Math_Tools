#include "matrices.h"

/*Basic matrix operations */
void mat_add(Matrix *a, Matrix b)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] = a->matrix[m][n] + b.matrix[m][n];
}
void mat_sub(Matrix *a, Matrix b)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] = a->matrix[m][n] - b.matrix[m][n];
}

Matrix mat_mult(Matrix a, Matrix b)
{
	Matrix mult;
	double dot_p;

	mult.m = a.m;
	mult.n = b.n;

	for (int m = 0; m < a.m; m++)
	{
		for (int n = 0; n < b.n; m++)
		{
			dot_p = 0;
			for (int r = 0; r < a.m; r++)
				dot_p += (a.matrix[m][r] * b.matrix[r][n]);
			mult.matrix[m][n] = dot_p;
		}
	}
	return mult;
}

/* Multiply by a scalar number*/
void mat_scale(Matrix *a, double scalar)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] *= scalar;
}

/*Duplicates given matrix*/
Matrix mat_dup(Matrix mat)
{
	Matrix new = mat;

	return mat;
}
