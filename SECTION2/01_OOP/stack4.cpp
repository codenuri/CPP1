#include <iostream>

//struct Stack
class Stack 
{
//private:
    int buf[10];
    int idx;
    
public:    
    void init() { idx = 0;}
    
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
    s1.init();
    s2.init();
    s1.push(10); 
    s1.push(20);
    
    std::cout << s1.pop() << std::endl;  // 30
    std::cout << s1.pop() << std::endl;  // 20
}