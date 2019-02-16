int main()
{
    const int c = 10;
    
    //char* p = static_cast<char*>(&c);
    
    //char* p = const_cast<char*>(&c);
    
    //char* p = reinterpret_cast<char*>(&c);
    
    char* p1 = reinterpret_cast<char*>(
                        const_cast<int*>( &c ) );
                        

    char* p2 = const_cast<char*>(
                reinterpret_cast<const char*>( &c ) );
                
    char* p3 = (char*)&c;
                        
}
