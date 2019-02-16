#include <iostream>

int x = 10;

int  f1() { return x;}
int& f2() { return x;}

int& f3()
{
    int n = 10;
    return n;
}

int main()
{
//    f1() = 20; // 10 = 20
    f2() = 20; // x = 20 ok
    
    std::cout << x << std::endl; // 20
}

