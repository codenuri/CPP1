#include <iostream>

void foo(int a)
{
    std::cout << "foo : " << a << std::endl;
}

int main()
{
    foo(1);   // �Լ�  ( �Լ� ���� ) : �Լ� ȣ��   
    
    
    // ����ǥ����, 
    [](int a)
    {
        std::cout << "foo : " << a << std::endl;
    } (10) ;
    
}