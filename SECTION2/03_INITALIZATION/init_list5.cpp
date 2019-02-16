#include <iostream>

class Point
{
    int x = 0; // C++11
    int y = 0;
public:
    Point(int a, int b) : x(a), y(b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Point p(1,2);
}







