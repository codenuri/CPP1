#include <iostream>
#include <vector>

int main()
{
    //int x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //std::vector<int> x;
    //std::vector<int> x(10); // 
    
    std::vector<int> x = {1,2,3,4,5,6,7,8,9,10}; // 
    
    x[0] = 10;
    
    x.resize(20);
    
    for( int i = 0; i < x.size() ; i++)
        std::cout << x[i] << std::endl;    
}