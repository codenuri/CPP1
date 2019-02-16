#include <iostream>

struct Point
{
    int x{10};
    int y{20};
};

int main()
{
    Point pt;
    
    //int x = pt.x;
    //int y = pt.y;
    
    //auto [x, y] = pt;
    
//    int arr[2] = {1,2};
//    auto [x,y] = arr;

    //int [x, y] = pt; // error
    
    const auto [x, y] = pt; // ok
    //const auto [x, y] = pt; // ok
    
    //int x = 10; // error
    
    std::cout << x << ", " << y << std::endl;
}














