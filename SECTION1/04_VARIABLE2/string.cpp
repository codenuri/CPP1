#include <iostream>
#include <string>

int main()
{
    std::string s1 = "hello";
    std::string s2 = "world";
    
    s1 = s2;            // ����
    
    if ( s1 == s2 ) 
    {
        std::cout << "same" << std::endl; 
        
    }  // �� 
    
    std::string s3 = s1 + s2;
    std::cout << s3 << std::endl;
}




