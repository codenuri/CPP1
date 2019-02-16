#include <iostream>

class Point
{
public:
    int x;
    int y;

public:
    Point() : x(0), y(0)
    {
    }
};

int main()
{
    Point p;
    
    std::cout << p.x << std::endl; // 0
}







