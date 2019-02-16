#include <iostream>

class Stack
{
private:
    int* buf;
    int idx;
    
public:
    Stack(int size = 10) 
    {
         idx = 0; 
         buf = new int[size];
    }
    ~Stack() { delete[] buf;}
    
    
    void push( int a) { buf[idx++] = a; }    
    int pop()         { return buf[--idx]; }
};

int main()
{
    Stack s1(30);
    
    s1.push(10);          
    std::cout << s1.pop() << std::endl;  
    
}





