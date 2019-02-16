struct Point
{
    int x;
    int y;
};

int main()
{
    /*
    int n1 = 10;
    int n2(10);  // C++
    
    int x[2] = {1,2};
    Point pt = {1,2};
    
    int n3 = 3.4;
    char c = 300;
    */
    
    int n1 = {10};
    int n2{10};  // C++
    
    int x[2] = {1,2};
    Point pt = {1,2};
    
    int n3 = {3.4}; // error
    char c = {300}; // error

}







