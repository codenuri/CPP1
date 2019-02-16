#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    void set(int a, int b)
    {
        std::cout << this << std::endl;
        x = a; 
        y = b; 
    }
};
int main()
{
    Point p1;
    Point p2;
    
    p1.set(10, 20);
    p2.set(30, 40);    
    
    std::cout << &p1 << std::endl;
    std::cout << &p2 << std::endl;
}    

