int main()
{
    const    int c = 10;
    volatile int v = 20;
    
    int n = c;
    
    int* p1 = const_cast<int*>(&c);
    int* p2 = const_cast<int*>(&v);
    
    double* p3 = const_cast<double*>(&c);
}