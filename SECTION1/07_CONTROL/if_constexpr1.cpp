int main()
{
    int n = 0;
    
    if ( n == 0 )
    {
        //....
    }
    
    /*
    if constexpr ( n == 0 ) // error
    {
        //....
    }
    */
    
    if constexpr ( sizeof(n) == 0 ) // ok..
    {
        //....
    }

}