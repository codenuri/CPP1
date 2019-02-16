#include <iostream>

class Point
{
    int x, y;
public:
    Point()  { std::cout << "Point()"  << std::endl;}
    //~Point() { std::cout << "~Point()" << std::endl;}
};

int main()
{
    Point pt;
}