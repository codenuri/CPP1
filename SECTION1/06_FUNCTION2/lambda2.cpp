#include <iostream>

int add(int a, int b) { return a + b;}

int main()
{
    int n1 = add(1, 2);
    
    // ����ǥ���� ����, �Լ�
    [](int a, int b) { return a + b;};
    
    
    int n2 = [](int a, int b) { return a + b;}(1,2); // �Լ� ȣ��
    
    std::cout << n1 << ", " << n2 << std::endl;
}