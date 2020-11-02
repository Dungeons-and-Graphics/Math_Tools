/// This header contains all the structs and types used in MT files

#ifndef MT_STRUCTS_H
# define MT_STRUCTS_H

typedef struct	s_vect2
{
	double		x;
	double		y;
}				MT_Vector2;

typedef struct	s_vect3
{
	double		x;
	double		y;
	double		z;
}				MT_Vector3;

typedef struct	s_matrix
{
	int m;
	int n;
	double matrix[4][4]
}				MT_Matrix;

typedef struct s_circle
{
	MT_Vector3 	origin;
	int			size;
}				MT_circle;

#endif
