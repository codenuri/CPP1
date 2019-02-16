#include <iostream>

int cnt = 0;

class Car
{
public:
    int speed;
    int color;
    
    static int cnt; // declaration
    
    Car() {}
};

int Car::cnt = 0;   // definition

int main()
{
    // 정적 멤버 데이타는 객체가 없어도 메모리에 놓인다.
    // 클래스이름으로 접근 가능.
    Car::cnt = 10;
    
    Car c1, c2, c3;
    
}


