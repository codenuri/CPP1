#include <iostream>
#include <typeinfo>

int foo(int a, double d)
{
     return 0;
}

int main()
{
    foo(1, 3.1);
    
    decltype( foo )  d1; // �Լ� Ÿ�� - int(int, double)
    decltype( &foo ) d2; // �Լ� ������ Ÿ��- int(*)(int, double)
    decltype( foo(1, 3.1) ) d3; // �Լ� ��ȯ Ÿ�� - int
    
    
    std::cout << typeid(d1).name() << std::endl;
    std::cout << typeid(d2).name() << std::endl;
    std::cout << typeid(d3).name() << std::endl;
    
    
    const int c = 0;
    std::cout << typeid(c).name() << std::endl; // 
    
}










