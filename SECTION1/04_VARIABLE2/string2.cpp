#include <iostream>
#include <string>

void foo( const char* s) 
{
    printf("foo : %s\n", s);
}

int main()
{
    std::string s = "hello";
    
    foo(s); // error
    foo((const char*)s);  // error
    
    foo( s.c_str() ); // ok
}