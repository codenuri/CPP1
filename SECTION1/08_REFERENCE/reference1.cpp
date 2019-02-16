#include <iostream>

int main()
{
    int n = 10;
    
    n = 20;
    
    //int* p = &n;
    int& r = n; // 레퍼런스 
    
    r = 30; // n = 30

    std::cout << n << std::endl; // 30
    std::cout << r << std::endl; // 30
    std::cout << &n << std::endl;
    std::cout << &r << std::endl; 
}
