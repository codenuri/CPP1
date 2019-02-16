#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    //Point* set(int x, int y)
    //Point set(int x, int y)
    Point& set(int x, int y)
    {
        this->x = x; 
        this->y = y; 
        
        return *this;
    }
};
int main()
{
    Point p1;
    //p1.set(10,20)->set(30,40)->set(40,50);
    p1.set(10,20).set(30,40).set(40,50);
    
    //cout << "A" << "B" << "C";
}    







