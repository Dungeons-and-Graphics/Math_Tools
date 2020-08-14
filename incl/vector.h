#ifndef VECTOR_H
# define VECTOR_H
#include "misc.h"

/*Returns a vector */
Vector2 vec_from_angle_deg(double angle, double magnitude);
Vector2 vec_from_angle_rad(double angle, double magnitude);

/*Returns a vector that is the result og basic math operations*/
Vector2 vec_sub(Vector2 a, Vector2 b);
Vector2 vec_add(Vector2 a, Vector2 b);
Vector2 vec_mult(Vector2 a, double scalar);

double vec_dot(Vector2 a, Vector2 b);

/* Returns the angle between two vectors */
double vec_angle_rad(Vector2 a, Vector2 b);
double vec_angle_deg(Vector2 a, Vector2 b);

/*Returns a Vector that is the result of a rotation by the given angle (in degrees or radians)*/
Vector2 vec_rot_deg(Vector2 vec, double rot_angle);
Vector2 vec_rot_rad(Vector2 vec, double rot_angle);

/*Returns a vector that is opposite to the one given*/
Vector2 vec_invert(Vector2 vec);

/*Returns the magnitude of a vector*/
double vec_magnitude(Vector2 vec);

/*Returns the angle of a vector relative to the x axis */
double vec_heading_deg(Vector2 vec);
double vec_heading_rad(Vector2 vec);

double vec_heading360_deg(Vector2 vec);
double vec_heading360_rad(Vector2 vec);

#endif
