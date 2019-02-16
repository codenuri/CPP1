#include <iostream>

int main()
{
    int n = 0;  
    
    //double* p1 = &n; // error
    
    double* p1 = (double*)&n;  // ok

    *p1 = 3.4;    
    
    
    const int c = 10;
    
    //int* p2 = &c;  // error 
    int* p2 = (int*)&c;  // ok
    
    *p2 = 20; 
    
    std::cout << c << std::endl; // 10 ? 20
}










