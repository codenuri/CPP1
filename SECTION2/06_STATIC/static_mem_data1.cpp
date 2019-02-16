#include <iostream>

int cnt = 0;

class Car
{
    int speed;
    int color;
public:    
    //int cnt = 0;
    
    Car()  {++cnt;}
    ~Car() {--cnt;}
};

int main()
{
    Car c1;
    Car c2;
    Car c3;
    
    cnt = 0;
    
    //std::cout << c1.cnt << std::endl;
    std::cout << cnt << std::endl;

}


