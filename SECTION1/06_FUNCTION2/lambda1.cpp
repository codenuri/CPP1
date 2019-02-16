#include <iostream>

void foo(int a)
{
    std::cout << "foo : " << a << std::endl;
}

int main()
{
    foo(1);   // 함수  ( 함수 인자 ) : 함수 호출   
    
    
    // 람다표현식, 
    [](int a)
    {
        std::cout << "foo : " << a << std::endl;
    } (10) ;
    
}