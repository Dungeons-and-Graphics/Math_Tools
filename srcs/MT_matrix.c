#include "MT.h"

MT_MatrixInit(int m, int n, void *data, int(*func)(void *, int , int))
{
	MT_Matrix matrix;

	matrix.m = m;
	matrix.n = n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			matrix.matrix[m][n] = func(data, m, n);
	return matrix;
}

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

/* Multiply by a scalar number*/
void MT_MatrixScale(Matrix *a, double scalar)
{
	for (int m = 0; m < a->m; m++)
		for (int n = 0; n < a->n; n++)
			a->matrix[m][n] *= scalar;
}

Matrix MT_MatrixMult(Matrix a, Matrix b)
{
	Matrix result;
	double dot_p;

	result.m = a.m;
	result.n = b.n;

	for (int m = 0; m < a.m; m++)
	{
		for (int n = 0; n < b.n; m++)
		{
			dot_p = 0;
			for (int r = 0; r < a.m; r++)
				dot_p += (a.matrix[m][r] * b.matrix[r][n]);
			result.matrix[m][n] = dot_p;
		}
	}
	return result;
}

Matrix MT_MatrixDup(Matrix mat)
{
	Matrix new = mat;

	return mat;
}
