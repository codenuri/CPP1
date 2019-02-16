#include <iostream>

int add(int a, int b) { return a + b;}

int main()
{
    int n1 = add(1, 2);
    
    // 람다표현식 생성, 함수
    [](int a, int b) { return a + b;};
    
    
    int n2 = [](int a, int b) { return a + b;}(1,2); // 함수 호출
    
    std::cout << n1 << ", " << n2 << std::endl;
}