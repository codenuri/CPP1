#include <iostream>
#include <cstdlib>

int main()
{
    //int* p1 = (int*)malloc(sizeof(int)*10);
    
    int* p1 = static_cast<int*>(malloc(sizeof(int)*10));

    free(p1);
}