#include <iostream>

class Test
{
public:
    static void foo()
    {
        std::cout << this << std::endl;
    }
};

int main()
{
    Test::foo();
    
    Test t;
    t.foo();
}