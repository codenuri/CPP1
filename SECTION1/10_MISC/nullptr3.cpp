int* foo() { return 0; }


int main()
{
    auto ret = foo();
    
    //if ( ret == 0 )
    
    if ( ret == nullptr )
    {
        //...
    }    
}














