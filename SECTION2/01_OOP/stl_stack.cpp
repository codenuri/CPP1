#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    std::cout << s.top() << std::endl; // 30
    std::cout << s.top() << std::endl; // 30
    
    s.pop();
    std::cout << s.top() << std::endl; // 20
    
}