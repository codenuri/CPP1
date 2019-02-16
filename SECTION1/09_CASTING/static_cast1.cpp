void foo(int)    {}
void foo(double) {}

int main(void)
{
    const int c = 10;
    double d = 3.4;
    
    int  n  = static_cast<int>(d); 
    int* p1 = static_cast<int*>(malloc(100));
    
    auto p2 = static_cast<void(*)(int)>( &foo);
    
    int* p3 = static_cast<int*>(&d); // error
    int* p4 = static_cast<int*>(&c); // error   
}