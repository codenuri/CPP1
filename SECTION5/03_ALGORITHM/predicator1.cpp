#include <iostream>
#include <algorithm>
#include <vector>

bool foo( int n )
{
    return n % 3 == 0;
}
int main()
{
    std::vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    
    // v �ȿ��� ó�� ������ 3�� ����� ���� ������

    //auto p = std::find(begin(v), end(v), 3);   
    
    //auto p = std::find_if(begin(v), end(v), foo );   
    
    auto p = std::find_if(begin(v), end(v), 
                [](int n) { return n % 3 == 0;} );   
    

    std::cout << *p << std::endl;
}





