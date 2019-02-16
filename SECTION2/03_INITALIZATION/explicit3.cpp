#include <memory>

int main()
{
    // shared_ptr : C++ 표준 스마트 포인터
    
    std::shared_ptr<int> p1( new int ); // ok 
    std::shared_ptr<int> p2 = new int;  // error
    
    
    //string s1 = "aaa";
    
//    Stack s(10);
//    Stack s = 10;
    
//    foo( 10 );
}

//void foo(Stack s) {}