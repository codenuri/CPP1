#include <iostream>

class Point
{
    int x, y;
    mutable int cnt = 0;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    void print() const 
    {
        ++cnt;
        std::cout << x << ",  " << y << std::endl;
    }
};

int main()
{
    Point pt(1,1);
    pt.print();
    pt.print();
}