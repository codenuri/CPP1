#include <iostream>
#include <iomanip>
//using namespace std;

int main()
{
    //cout << hex << n << endl; 
    
    int n = 10;
    
    std::cout << n << std::endl;  // 10����
    
    std::cout << std::hex;
    
    std::cout << n << std::endl;  // 16����
    
    std::cout << std::hex << n << std::endl;  // 16����
    
    std::cout << std::dec;
    std::cout << n << std::endl;  // 10����
    
    
    std::cout << "hello" << std::endl;    
    
    std::cout << std::setw(10) << std::setfill('#') 
              << std::left    << "hello" << std::endl;    
}








