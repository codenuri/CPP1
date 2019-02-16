#include <iostream>

class Point
{
    int x;
    int y;
    const int cval;
    int& r;
public:
    Point( int a, int b, int c) : x(a), y(b), cval(c), r(a)
    {
    //    cval = c; // ¥Î¿‘
    //    x = a;    
    //    y = b;
    }
};

int main()
{
    Point p(1, 2, 10);
    

//    const int cval;
//    cval = 10;
}







