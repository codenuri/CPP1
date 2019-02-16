#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a, int b) : x(a), y(b) {}
    
    void print() const 
    { 
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    Point p1(1,1); // ������ ȣ��
    Point p2(2,2); // ������ ȣ��
    Point p3(p1);  // ���� ������ ȣ��
    Point p4 = p1; // ���� ������ ȣ��
    
    p4 = p2;  // p4.operator=(p2)

    p4.print();
    
    int a = 0; // �ʱ�ȭ
    int b;
    b = 0; // ����
    
}



