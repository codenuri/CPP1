#include <iostream>

struct Stack
{
    int buf[10];
    int idx;
    
    
};

void push(Stack* s, int value)
{    
    s->buf[s->idx++] = value;
}

int pop(Stack* s)
{    
    return s->buf[--(s->idx)];
}
int main()
{
    Stack s1;
    Stack s2;
    s1.idx = 0;
    s2.idx = 0;
    push(&s1, 10);
    push(&s1, 20);
    s1.idx = 0;
    push(&s1, 30);
    
    std::cout << pop(&s1) << std::endl;  // 30
    std::cout << pop(&s1) << std::endl;  // 20
}