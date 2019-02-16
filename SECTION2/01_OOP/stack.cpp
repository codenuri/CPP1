#include "stack.h"

Stack::Stack(int size) 
{
     idx = 0; 
     buf = new int[size];
}
Stack::~Stack() { delete[] buf;}


void Stack::push( int a) { buf[idx++] = a; }    
int  Stack::pop()         { return buf[--idx]; }
