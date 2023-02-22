#ifndef POINT_H
#define POINT_H

// STD
#include <stdio.h>

typedef struct Point
{
    int health;
    float x;
    float y;
} Point;

/**
 * Initialize and return a Point struct value.
*/
Point Point_value( int health, float x, float y );

/**
 * Print a representation of a Point to stdout.
*/
void Point_print( Point *self );

/**
 * Multiple by 2 values
*/
int Point_multiply( int value, int multiply );

#endif
