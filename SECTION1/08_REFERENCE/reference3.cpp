#include <iostream>

int main()
{
    int n = 10;
    
    int* p1 = &n;
    int& r1 = n;
        
    int* p2 = 0; // null pointer 가능.
    int& r2;     // error. 
    
    *p1 = 20;
    r1 = 20; // 자동 * 연산되는 포인터
    
    if ( p1 != 0 ) {}
    if ( r1 != 0 ) {} // r1은 if 문으로 조사할필요 없다.
    
    std::cout << &p1 << std::endl;
    std::cout << r1 << std::endl;
}