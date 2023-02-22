// My Modules
#include "point.h"

int main()
{
    Point a = Point_value( 100, 1.0, 2.0 );
    Point_print( &a );
    printf( "Multiplied: %d\n\n", Point_multiply( 4, 2 ) );
    return 0;
}

