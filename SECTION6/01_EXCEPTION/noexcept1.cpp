
//void foo() throw()
//void foo() 
//void foo() throw(int)
//void foo() // ���ܰ� �ִ�.
//void foo() noexcept(false)  // ���� �� �ִ�.
//void foo() noexcept(true )  // ���ܰ� ����.
void foo() //noexcept        // ���ܰ� ����.
{
    throw 1;
}

int main()
{
    try
    {
        foo();
    }
    catch(...) 
    {
        
    }
}