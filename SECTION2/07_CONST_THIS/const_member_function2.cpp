#include <iostream>

class Point
{
public:
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    
    void set( int a, int b ) { x = a; y = b; }
    
    void print() const 
    {
        std::cout << x << ",  " << y << std::endl;
    }
};


int main()
{
    const Point pt(1,1);  // 상수 객체
    pt.x = 10;      // error          
    pt.set(10,10);  // error      
    pt.print();     // error    
                    // 단, print()가 상수 함수라면
                    // ok..
}

























