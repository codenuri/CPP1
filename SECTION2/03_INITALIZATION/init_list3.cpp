class Point
{
    int x;
    int y;
public:
    Point( int a, int b) : x(a), y(b) {}
};

class Rect
{
    Point p1;
    Point p2;
public:
    Rect(int a, int b, int c, int d) : p1(a,b), p2(c,d) 
    {
        p1(a, b);
    }
};

int main()
{
    Rect r; // p1 Point ������
            // p2 Point ������
            // Rect ������
}