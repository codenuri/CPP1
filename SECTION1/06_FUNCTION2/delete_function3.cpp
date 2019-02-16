template<typename T> 
T square( T a )
{
    return a * a;
}

char square(char) = delete;

int main()
{
    square(3);
    square(3.3);
    square('a'); // error.                                                   
}