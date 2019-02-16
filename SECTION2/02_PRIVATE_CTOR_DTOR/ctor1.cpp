#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    //Point()             { x = 0; y = 0; cout << "1" << endl;}
    //Point(int a, int b) { x = a; y = b; cout << "2" << endl;}
};

int main()
{
    Point p1;       // 1
    //Point p2(1, 2); // 2 error
}