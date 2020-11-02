#include "matrices.h"

/*Basic matrix operations */
void MT_MatrixAdd(Matrix *a, Matrix b)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] = a->matrix[m][n] + b.matrix[m][n];
}
void MT_MatrixSub(Matrix *a, Matrix b)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] = a->matrix[m][n] - b.matrix[m][n];
}

Matrix MT_MatrixMult(Matrix a, Matrix b)
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
void MT_MatrixScale(Matrix *a, double scalar)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] *= scalar;
}

/*Duplicates given matrix*/
Matrix MT_MatrixDup(Matrix mat)
{
	Matrix new = mat;

	return mat;
}
