#include <iostream>

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    
    for ( auto n : x )
    {
        std::cout << n << " , ";
    }
    
    
    /*
    for ( int i = 0; i < 10; i++)
    {
        std::cout << x[i] << ", ";
    }
    */
    
}


