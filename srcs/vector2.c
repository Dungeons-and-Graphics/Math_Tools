#include "vector2.h"

static double convert_180(double angle)
{
	if (angle < 0)
		angle = (angle * -1) + 180;
	return angle;
}

/*Returns a vector */
Vector2 vec_from_angle_deg(double angle, double magnitude)
{
	Vector2 vec;

	vec.x = cos(to_radf(angle)) * magnitude;
	vec.y = sin(to_radf(angle)) * magnitude;

	return vec;
}

Vector2 vec_from_angle_rad(double angle, double magnitude)
{
	Vector2 vec;

	vec.x = cos(angle) * magnitude;
	vec.y = sin(angle) * magnitude;

	return vec;
}

/*Returns a vector that is the result og basic math operations*/
Vector2 vec_sub(Vector2 a, Vector2 b)
{
	Vector2 vec;

	vec.x = a.x - b.x;
	vec.y = a.y - b.y;

	return vec;
}

Vector2 vec_add(Vector2 a, Vector2 b)
{
	Vector2 vec;

	vec.x = a.x + b.x;
	vec.y = a.y + b.y;

	return vec;
}

Vector2 vec_mul(Vector2 vec,int scalar)
{
	Vector2 new_vec;

	new_vec.x = vec.x * scalar;
	new_vec.y = vec.y * scalar;

	return new_vec;
}

double vec_dot(Vector2 a, Vector2 b, double angle)
{
	double mag_a, mag_b, result;

	mag_a = sqrt(vec_magnitude(a));
	mag_b = sqrt(vec_magnitude(b));
	result = mag_a * mag_b;
	return (result * cos(angle));
}

/* Returns the angle between two vectors */
double vec_angle_rad(Vector2 a, Vector2 b)
{
	double angle, m_a, m_b;

	m_a = sqrt(vec_magnitude(a));
	m_b = sqrt(vec_magnitude(b));
	angle = (a.x * a.y) + (b.x * b.y);
	angle /= (m_a * m_b);

	return acos(angle);
}

double vec_angle_deg(Vector2 a, Vector2 b)
{
	return (to_degf(vec_angle_rad(a, b)));
}

/*Returns a Vector that is the result of a rotation by the given angle (in degrees or radians)*/
Vector2 vec_rot_deg(Vector2 vec, double rot_angle)
{
	Vector2 new_vec;
	double current_angle;

	current_angle = vec_heading360_deg(vec);
	current_angle += rot_angle;
	while (current_angle > 360)
		current_angle -= 360;
	while (current_angle < 0)
		current_angle += 360;

	return vec_from_angle_deg(current_angle, vec_magnitude(vec));
}

Vector2 vec_rot_rad(Vector2 vec, double rot_angle)
{
	return vec_rot_deg(vec, to_degf(rot_angle));
}

/*Returns a vector that is opposite to the one given*/
Vector2 vec_invert(Vector2 vec)
{
	Vector2 new_vec;

	new_vec.x = vec.x * -1;
	new_vec.y =	vec.y * -1;
	return new_vec;
}

/*Returns the square of the magnitude of a vector*/
double vec_magnitude(Vector2 vec)
{
	return (get_distancef(0, vec.x, 0, vec.y));
}

/*Returns the angle of a vector relative to the x axis */
double vec_heading180_deg(Vector2 vec){ return to_degf(atan2(vec.y, vec.x));}
double vec_heading180_rad(Vector2 vec){ return atan2(vec.y, vec.x); }


double vec_heading360_deg(Vector2 vec)
{
	double angle;

	angle = to_degf(atan2(vec.y, vec.x));

	return convert_180(angle);
}

double vec_heading360_rad(Vector2 vec)
{
	return to_radf(vec_heading360_deg(vec));
}
