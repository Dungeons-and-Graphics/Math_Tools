# Math_Tools
Helper functions to calculate all sorts of things

## Overview

 ### Misc math functions (misc.h)
  - **double to_radf(double angle)**
  - **int to_rad(int angle)**
  - **double to_degf(double angle)**
  - **int to_deg(int angle)**

    *Converts between radians and degrees*
  - **double get_distancef(double x1, double y1, double x2, double y2)**
  - **int get_distance(int x1, int y1, int x2, int y2)**
  
    *Returns the distance between two points*

 ### 2DVectors (Vectors.h)
  - **Vector2 vector_from_distance(int x1, int y1, int x2, int y2)**
  - **Vector2 vector_from_distancef(double x1, double y1, double x2, double y2)**
  
    *Returns the vector between two points*

  - **Vector2 vec_sub(Vector2 A, Vector2 B)**
  - **Vector2 vec_add(Vector2 A, Vector2 B)**
  - **Vector2 vec_div(Vector2 A, Vector2 B)**
  - **Vector2 vec_mul(Vector2 A, Vector2 B)**
    
    *Returns a vector that is the result og basic math operations*

  - **Vector2 vec_rot_deg(Vector2 vec, double rot_angle)**
  - **Vector2 vec_rot_rad(Vector2 vec, double rot_angle)**
    
    *Returns a Vector that is the result of a rotation by the given angle (in degrees or radians)*

  - **Vector2 vec_invert(Vector2 vec)**
  
    *Returns a vector that is opposite to the one given*

  - **double vec_magnitude(Vector2 vec)**
    
    *Returns the magnitude of a vector*

  - **double vec_heading_deg(Vector2 vec)**
  - **double vec_heading_rad(Vector2 vec)**
    
    *Returns the angle of a vector relative to the x axis
    
    ###TODO
    
  -[ ]Circle functions
  
  -[ ]Triangle functions
    
