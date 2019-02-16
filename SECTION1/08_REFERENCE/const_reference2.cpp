#include <iostream>

void foo(int x) // call by value
//void foo(const int& x)
{
}

int main()
{
    int n = 10;
    
    // foo 함수에서는 절대로 n의 값을 변경하면 안된다.
    foo(n);
    
    std::cout << n << std::endl; // 반드시 10이 나와야 한다.
}