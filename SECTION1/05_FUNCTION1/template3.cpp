
template<typename T> // template parameter
// template<class T>     //
T square(T a)        // call parameter
{
    return a * a;
}


int main()
{
//    square<int>(3);     
//    square<double>(3.3);
    
    square(3);     
    square(3.3);
}