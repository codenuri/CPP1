
template<typename T> 
void foo(T a)
{
//    if ( 0 )

    if constexpr ( 0 )
        *a = 0;
}

int main()
{
    int n = 0;

    foo(&n); // T : int*
    foo(n);  // T : int
}