#include <iostream>

struct Stack
{
    int buf[10];
    int idx;
    
    void push(int value)
    {    
        buf[idx++] = value;
    }    
    int pop()
    {    
        return buf[--idx];
    }
};

int main()
{
    Stack s1;
    Stack s2;
    s1.idx = 0;
    s2.idx = 0;
    //push(&s1, 10);
    s1.push(10);
    s1.push(20);
    
    s1.idx = 0;
    std::cout << s1.pop() << std::endl;  // 30
    std::cout << s1.pop() << std::endl;  // 20
}