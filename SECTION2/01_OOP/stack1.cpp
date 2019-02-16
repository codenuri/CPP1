#include <iostream>

int buf[10];
int idx = 0;

void push(int value)
{    
    buf[idx++] = value;
}
int pop()
{    
    return buf[--idx];
}
int main()
{
    push(10);
    push(20);
    push(30);
    
    std::cout << pop() << std::endl;  // 30
    std::cout << pop() << std::endl;  // 20
}