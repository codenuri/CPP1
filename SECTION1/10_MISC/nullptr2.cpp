#include <iostream>

//void foo(int    n) { std::cout << "int"    << std::endl; }
void foo(double d) { std::cout << "double" << std::endl; }
void foo(bool   b) { std::cout << "bool"   << std::endl; }
void foo(char*  s) { std::cout << "char*"  << std::endl; }

int main()
{
    int    n = 0;
    double d = 0; 
    bool   b = 0;  // "aaa"
    char*  s = 0;
    
    //foo(0); // int
    //foo(0.0); // 실수 리터럴
    //foo(false); 
    //foo( (char*)0 ); // char*, 포인터 리터럴
    foo( nullptr ); // char*, 포인터 리터럴
}