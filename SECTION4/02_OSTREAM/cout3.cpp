/*
// 1998�� C++�� ǥ��ȭ �Ǳ� ������ ����ϴ� Ŭ����
class ostream 
{
    //...
};

// 1998�� ǥ��ȭ ����
template<typename T, typename Tratis = char_traits<T>>
class basic_ostream
{
};
typedef basic_ostream<char> ostream;
typedef basic_ostream<wchar_t> wostream;

ostream cout;
wostream wcout;
*/
#include <iostream>

int main()
{
    std::cout << "hello";
    std::wcout << L"hello";
}






