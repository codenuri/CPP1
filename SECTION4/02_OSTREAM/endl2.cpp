#include <iostream>
using namespace std;

ostream& myendl( ostream& os)
{
    os.put('\n');
    os.flush();
    return os;
}
int main()
{
//    cout << endl << "A";
//    endl(cout) << "A";

    myendl(cout) << "A";
    
    cout << endl; // cout.operator<<(endl)
                  // cout.operator<<(�Լ�������)
    cout << myendl;
}