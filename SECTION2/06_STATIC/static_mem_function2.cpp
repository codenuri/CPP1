class Test
{
    int        data1;
    static int data2; 
public:
    static void foo()
    {
        data1 = 0; // error
        data2 = 0; // ok
        goo();     // error
    }
    void goo()
    {
        data1 = 0; // ok
        data2 = 0; // ok
        foo();     // ok
    }    
};
int Test::data2 = 0;
int main()
{
    Test::foo();
    Test t;
    t.goo();
}



