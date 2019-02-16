class Point
{
    int x;
    int y;
public:
    
    //Point() = delete;
    Point() = default;
    
    //Point() {}
    
    Point(int a, int b) {}
};

int main()
{
    Point p1;
    Point p2(1,2); // ok
}