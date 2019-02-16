
void foo( const int s)
{
    int arr[s]; // ???
}

int main()
{
//    foo(10);
//    foo(n);
    
    int arr1[10]; // ok
    
    
    int s1 = 10;
    //int arr2[s1]; // g++ : ok.   cl : error
    
    const int s2 = 10;
    int arr3[s2];    // ok 
    
//    const int s3 = s1;
//    int arr4[s3]; // error
}



