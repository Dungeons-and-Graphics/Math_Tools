#include "math_structs.h"
#include <stdio.h>

int main()
{
	s_mat mattr;

	mattr.matrix.matrices.m_3[0][0] = 1;
	mattr.matrix.matrices.m_3[0][1] = 2;
	mattr.matrix.matrices.m_3[1][0] = 2;
	mattr.matrix.matrices.m_3[1][1] = 2;

	printf("%f %f %f %f\n", mattr.matrix.matrices.m_3[0][0], mattr.matrix.matrices.m_2[0][1],
	mattr.matrix.matrices.m_2[1][0],mattr.matrix.matrices.m_2[1][1]);
	return 0;
}
