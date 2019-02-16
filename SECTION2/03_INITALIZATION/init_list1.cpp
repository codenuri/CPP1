#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a, int b) : x(a), y(b) // 초기화
    {
    //    x = a;    // 대입
    //    y = b;
    }
};

int main()
{
    Point p(1, 2);

    int a = 0; // 초기화. 생성자 호출
    
    int b;     // 생성자 호출
    b = 0;     // 대입. 대입연산자 호출
}







