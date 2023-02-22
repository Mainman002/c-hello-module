// My Modules
#include "point.h"

Point Point_value( int health, float x, float y )
{
    Point initialized = { health, x, y };
    return initialized;
}

void Point_print( Point *self )
{
    printf( "\nPoint Object: {Health:%d, X:%f, Y:%f}\n", self->health, self->x, self->y );
}

int Point_multiply( int value, int multiply )
{
    return value * multiply;
}
