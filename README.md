# Math_Tools
Helper functions to calculate all sorts of things

## Overview

 ### Misc math functions (misc.h)
  ```
double to_radf(double angle);
int to_rad(int angle);
double to_degf(double angle);
int to_deg(int angle);
```

   *Converts between radians and degrees*

   ```
  double get_distancef(double x1, double y1, double x2, double y2)
  int get_distance(int x1, int y1, int x2, int y2)
  ```

  *Returns the distance between two points*

 ### 2DVectors (vector2.h, vector2.c)

  *Returns a vector*

 ```
Vector2 vec_from_angle_deg(double angle, double magnitude);
Vector2 vec_from_angle_rad(double angle, double magnitude);
```

*Returns a vector that is the result og basic math operations*

```
 Vector2 vec_sub(Vector2 a, Vector2 b);
 Vector2 vec_add(Vector2 a, Vector2 b);
 Vector2 vec_mult(Vector2 a, double scalar);
 double vec_dot(Vector2 a, Vector2 b)
 ```

*Returns the angle between two vectors*

```
double vec_angle_rad(Vector2 a, Vector2 b);
double vec_angle_deg(Vector2 a, Vector2 b);
 ```

*Returns a Vector that is the result of a rotation by the given angle (in degrees or radians)*

```
Vector2 vec_rot_deg(Vector2 vec, double rot_angle);
Vector2 vec_rot_rad(Vector2 vec, double rot_angle);
```

*Returns a vector that is opposite to the one given*
```
Vector2 vec_invert(Vector2 vec);
```

*Returns the magnitude of a vector*
```
double vec_magnitude(Vector2 vec);
```

*Returns the angle of a vector relative to the x axis*

```
double vec_heading_deg(Vector2 vec);
double vec_heading_rad(Vector2 vec);

double vec_heading360_deg(Vector2 vec);
double vec_heading360_rad(Vector2 vec);
```

	### Matrix operations (matrices.h, matrices.c)

*Basic matrix operations*
```
void mat_add(Matrix *a, Matrix b);
void mat_sub(Matrix *a, Matrix b);
Matrix mat_mult(Matrix a, Matrix b);
```

*Multiply by a scalar number*
```
void mat_scale(Matrix *a, double scalar);
```

*Duplicates given matrix*
```
Matrix mat_dup(Matrix mat);
```

    ### TODO

   - [ ] Circle functions

   - [ ] Triangle functions

   - [ ] 3D Vectors

   - [x] Matrix operations

