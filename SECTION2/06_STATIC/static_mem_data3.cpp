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
    // ���� ��� ����Ÿ�� ��ü�� ��� �޸𸮿� ���δ�.
    // Ŭ�����̸����� ���� ����.
    Car::cnt = 10;
    
    Car c1, c2, c3;
    
}


