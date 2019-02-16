
int foo() { return -1;}

int main()
{
    /*
    int ret = foo();
    
    if ( ret == -1 )
    {
        //....
    }
    */
    if ( int ret = foo() ; ret == -1  )
    {
        
    }
    
    
    /*
    int n = foo();
    switch( n )
    {
    case 10: break;
    case 20: break;
    }
    */
    
    switch( int n = foo(); n )
    {
    case 10: break;
    case 20: break;
    }

}








