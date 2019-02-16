#include <iostream>
#include <algorithm>

bool cmp( int a, int b) { return a > b;}

int main()
{
    int x[10] = {1,3,5,7,9,2,4,6,8,10};
    
    //std::sort(x, x+10); // ����, ������ ����� �����ּ�
    
    
    //std::sort(x, x+10, cmp); 
    
    std::sort(x, x+10, 
               []( int a, int b) { return a > b;} ); 
    
    for( auto n : x )
        std::cout << n << ", ";
}