#include <iostream>

void foo(int x) // call by value
//void foo(const int& x)
{
}

int main()
{
    int n = 10;
    
    // foo �Լ������� ����� n�� ���� �����ϸ� �ȵȴ�.
    foo(n);
    
    std::cout << n << std::endl; // �ݵ�� 10�� ���;� �Ѵ�.
}