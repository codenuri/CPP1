#include <iostream>

int main()
{
    int n = 10;
    
    int* p1 = &n;
    int& r1 = n;
        
    int* p2 = 0; // null pointer ����.
    int& r2;     // error. 
    
    *p1 = 20;
    r1 = 20; // �ڵ� * ����Ǵ� ������
    
    if ( p1 != 0 ) {}
    if ( r1 != 0 ) {} // r1�� if ������ �������ʿ� ����.
    
    std::cout << &p1 << std::endl;
    std::cout << r1 << std::endl;
}