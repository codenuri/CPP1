#include "Point.h"

Point::Point(int a, int b) 
    : x(a), y(b)
{
    
}    
void Point::set( int a, int b ) 
{
     x = a; y = b; 
}
void Point::print() const
{
    std::cout << x << ",  " << y << std::endl;
}