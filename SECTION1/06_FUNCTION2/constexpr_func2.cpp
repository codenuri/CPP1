template<typename T, int N>
struct Buffer
{
    T data[N];
};
constexpr int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x = 1;
    int y = 1;
    
    int n1 = add(1, 1);
    int n2 = add(x, y);
    
    Buffer<int, 1024> b1;
//    Buffer<int, x> b2; // error
    Buffer<int, add(1,2)> b2; // ok
    Buffer<int, add(x,2)> b2; // error
}
