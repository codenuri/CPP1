#include <memory>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::string s1("hello"); // ok
    std::string s2 = "hello"; //ok
    
    std::vector<int> v1(10);  // ok
    std::vector<int> v2 = 10; // error
    std::vector<int> v3 = {10}; // ok
    
    // shared_ptr : C++ 표준 스마트 포인터
 
    std::shared_ptr<int> p1( new int ); // ok 
    std::shared_ptr<int> p2 = new int;  // error
    
}
