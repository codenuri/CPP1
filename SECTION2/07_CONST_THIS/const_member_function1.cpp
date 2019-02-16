#include <iostream>

class Point
{
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    
    void set( int a, int b ) { x = a; y = b; }
    
    void print() const // 상수 멤버 함수
    {
        //x = 10; // error
        std::cout << x << ",  " << y << std::endl;
    }
};

int main()
{
    
}