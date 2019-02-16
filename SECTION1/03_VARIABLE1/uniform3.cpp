struct Point
{
    int x;
    int y;
};
void foo( int   n) {} // int n = 10
void goo( Point p) {}

int main()
{
    //int n = 10;
    int n = {10};
    
    foo(10);
    foo({10}); // 
    
    
    Point p = {1,2};
    goo( { 1,2} );
    

    int n1 = {0}; // copy 초기화
    int n2{0};    // direct 초기화
}







