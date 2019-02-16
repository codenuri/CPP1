
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    
    auto n1 = x[0]; 
    //auto n2;        // error
    
    decltype(n1) n3;
    decltype(n1) n4 = n1;
}