#include <iostream>



void push(int* buf, int* idx, int value)
{
    buf[++(*idx)] = value;
}



int pop(int* buf, int* idx)
{
    return buf[(*idx)--];
}


int main()
{
    int buf1[10];
    int idx1 = 0;
    int buf2[10];
    int idx2 = 0;
    push(buf1, &idx1, 10);
    push(buf1, &idx1, 20);
    push(buf2, &idx2, 30);
    
    std::cout << pop(buf1, &idx1) << std::endl;  // 30
    std::cout << pop(buf1, &idx1) << std::endl;  // 20
}