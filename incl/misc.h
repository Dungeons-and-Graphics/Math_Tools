#ifndef MISC_H
# define MISC_H
# include <math.h>
# include "math_structs.h"

/* Converts degrees to radians*/
double		to_rad(int angle);
double	to_radf(double angle);

/* Converts radians to degrees*/
double	to_degf(double angle);
int		to_deg(int angle);

/* Returns the square of the distance between two point */
double	get_distancef(double x1, double y1, double x2, double y2);
int		get_distance(int x1, int y1, int x2, int y2);

#endif
