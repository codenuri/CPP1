#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a, int b) : x(a), y(b) // �ʱ�ȭ
    {
    //    x = a;    // ����
    //    y = b;
    }
};

int main()
{
    Point p(1, 2);

    int a = 0; // �ʱ�ȭ. ������ ȣ��
    
    int b;     // ������ ȣ��
    b = 0;     // ����. ���Կ����� ȣ��
}







