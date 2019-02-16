#include <iostream>

constexpr int factorial(int n )
{
    if ( n == 1 ) 
        return 1;
    return n * factorial( n-1 );
}

int main()
{
    int n = factorial(5);

    std::cout << n << std::endl;
}