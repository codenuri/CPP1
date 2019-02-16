

template<typename T> 
T square(T a)
{
    return a * a;
}


int main()
{
    square<int>(3);     // int square(int a) 窃荐 积己
    square<double>(3.3);// double square(double) 窃荐 积己
}