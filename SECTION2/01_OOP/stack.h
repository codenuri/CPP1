class Stack
{
public:
    Stack(int size = 10);
    ~Stack();
    void push( int a);
    int pop();
    
private:
    int* buf;
    int idx;    
};