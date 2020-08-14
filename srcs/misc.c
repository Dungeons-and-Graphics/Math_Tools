#include "misc.h"

double		to_rad(int angle)
{
	return (int)to_radf(angle);
}

double	to_radf(double angle)
{
	double result;

	result = angle * M_PI;
	result /= 180;

	return result;
}

/* Converts radians to degrees*/
double	to_degf(double angle)
{
	double result;

	result = angle * 180;
	result /= M_PI;

	return result;
}
int		to_deg(int angle)
{
	int result;

	result = angle * 180;
	result /= M_PI;

	return result;
}

/* Returns the square of the distance between two point */
double	get_distancef(double x1, double y1, double x2, double y2)
{
	double	d_x, d_y;

	d_x = x2 - x1;
	d_y = y2 - y1;
	return ((d_x * d_x) + (d_y * d_y));
}

int		get_distance(int x1, int y1, int x2, int y2)
{
	int	d_x, d_y;

	d_x = x2 - x1;
	d_y = y2 - y1;
	return ((d_x * d_x) + (d_y * d_y));
}
