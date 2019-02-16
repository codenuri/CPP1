#include <iostream>

void f1(int n)  { ++n;}
void f2(int* p) { ++(*p);}
void f3(int& r) { ++r;}   // int& r = c

int main()
{
    int a = 0, b = 0, c = 0;
    
    f1(a);
    f2(&b); // b�� ����ɼ� �ִٰ� ��������.
    f3(c);  // 
    
    std::cout << a << std::endl; // 0
    std::cout << b << std::endl; // 1
    std::cout << c << std::endl; // 
    
    int* p = &n;
    int& r = n;
}