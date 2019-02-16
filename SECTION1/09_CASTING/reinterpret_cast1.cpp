int main()
{
    int n = 10;
    
    double* p1 = reinterpret_cast<double*>(&n);
    
    
    
    int* p2 = reinterpret_cast<int*>(10);
    
    //double d = reinterpret_cast<double>(n);

}