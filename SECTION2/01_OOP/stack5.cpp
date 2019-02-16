#include <iostream>

class Stack
{
private:
    int buf[10];
    int idx;
    
public:
    Stack()       { idx = 0; }
    void push( int a) { buf[idx++] = a; }    
    int pop()         { return buf[--idx]; }
};

int main()
{
    Stack s1;
    //s1.init();
    s1.push(10);          
    std::cout << s1.pop() << std::endl;  
    
}





