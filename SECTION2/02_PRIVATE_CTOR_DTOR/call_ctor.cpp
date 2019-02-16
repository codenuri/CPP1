#include <iostream>

class Point
{
    int x, y;
public:
    Point()  { std::cout << "Point()"  << std::endl;}
    ~Point() { std::cout << "~Point()" << std::endl;}
};

class Rect
{
    Point p1;
    Point p2;
public:
    Rect()  { std::cout << "Rect()"  << std::endl;}
    ~Rect() { std::cout << "~Rect()" << std::endl;}
};

int main()
{
    Rect r;
}



