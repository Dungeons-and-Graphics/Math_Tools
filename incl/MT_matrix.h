#ifndef MATRICES_H
# define MATRICES_H

# include "MT_structs.h"

/*Basic matrix operations */
void MT_MatrixAdd(MT_Matrix *a, MT_Matrix b);
void MT_MatrixSub(MT_Matrix *a, MT_Matrix b);

MT_Matrix MT_MatrixMult(MT_Matrix a, MT_Matrix b);

/* Multiply by a scalar number*/
void MT_MatrixScale(MT_Matrix *a, double scalar);

/*Duplicates given matrix*/
MT_Matrix MT_MatrixDup(MT_Matrix mat);

#endif
