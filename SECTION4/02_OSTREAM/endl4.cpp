#include <iostream>
using namespace std;

ostream& tab( ostream& os)
{
    os << '\t';
    return os;
}
ostream& menu( ostream& os)
{
    os << "1. ������\n";
    os << "2. ���\n";
    return os;
}

int main()
{
    cout << "A" << endl;
    cout << "A" << tab << "B" << endl;
    
    cout << endl; // cout.operator<<(�Լ�������)                
    cout << tab; 
    
    cout << menu;
}