#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    Point()             { x = 0; y = 0; cout << "1" << endl;}
    Point(int a, int b) { x = a; y = b; cout << "2" << endl;}
};

int main()
{
    /*
    Point p1(1,2);     // 2
    Point p2{1,2};     // 2,  C++11 
    Point p3 = {1,2};  // 2,  C++11 
    */

    /*
    Point p4;       // 1
    Point p5();     // ��ü ���� �ƴ�. �Լ� ����
    Point p6{};     // 1
    Point p7 = {};  // 1
    */
/*
    Point p8[3];    // 1�� ������ 3�� ȣ��
    
    Point p9[3] = {Point(1,1)}; // 2�� ������ 1ȸ ȣ��
                                // 1��        2ȸ
    
    Point p10[3] = { {1,1}, {2,2} }; // C++11
*/    

    Point* p11; // ��ü ���� �ƴ�.
    
    p11 = static_cast<Point*>( malloc(sizeof(Point)));
    free(p11);
    
    p11 = new Point;  // 1�� ������ ȣ��
    delete p11;
    
    p11 = new Point(); // 1��.. 
    delete p11;
    
    p11 = new Point(1,2); // 2�� 
    delete p11;

}




