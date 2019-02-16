#include <iostream>

void foo(int   n) { std::cout << "int"   << std::endl; }
void foo(void* p) { std::cout << "void*" << std::endl; }

void goo(char* n) { std::cout << "goo" << std::endl; }

/*
#ifdef __cplusplus
    #define NULL 0
#else
    #define NULL (void*)0
#endif
*/

int main()
{
    foo(0); // int
    foo((void*)0); // void*
    foo(NULL); // int
    
    goo(NULL); //  ok
}




