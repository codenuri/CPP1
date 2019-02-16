#include <stdio.h>

int main()
{
    FILE* f = fopen("a.txt", "wt");

    f = 0;
    
    fputs("hello", f);

    //fclose(f);
}