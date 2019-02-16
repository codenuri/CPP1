#include <iostream>

template<typename T>
class Stack
{
private:
    T* buf;
    int idx;
    
public:
    Stack(int size = 10) 
    {
         idx = 0; 
         buf = new T[size];
    }
    ~Stack() { delete[] buf;}

    void push( T a) { buf[idx++] = a; }    
    T pop()         { return buf[--idx]; }
};


int main()
{
    Stack<int> s1(30);
    Stack<double> s2(30);
    
    s1.push(10);          
    std::cout << s1.pop() << std::endl;  
    
}





