#include <stdio.h>
#include <cstring>  //<string.h>

int main()
{
    char s1[32] = "hello";
    
    const char* s2 = "world";
    
    //s1 = s2;            // ����
    strcpy( s1, s2);
    
    //if ( s1 == s2 ) {}  // �� 
    if ( strcmp(s1, s2) == 0) {}
}