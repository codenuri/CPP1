#include <iostream>

//int cnt = 0;

class Car
{
    int speed;
    int color;
    static int cnt;
    
public: 
    Car()  {++cnt;}
    ~Car() {--cnt;}
    
    int getCount() { return cnt;}
};
int Car::cnt = 0;


int main()
{
    Car c1;
    Car c2;
    Car c3;
    
    //cnt = 0;
    
    std::cout << c1.getCount() << std::endl;
    //std::cout << c1.cnt << std::endl;
    //std::cout << cnt << std::endl;

}


