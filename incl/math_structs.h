#ifndef MATH_STRUCTS_H
# define MATH_STRUCTS_H

typedef struct s_vect2
{
	double		x;
	double		y;
}				Vector2;

typedef struct s_vect3
{
	double		x;
	double		y;
	double		z;
}				Vector3;

typedef struct s_matrix
{
	int m;
	int n;
	double matrix[4][4]
}				Matrix;


#endif
