class Point
{
    int x;
    int y;
public:
    explicit Point( int a = 0, int b = 0 ) : x(a), y(b) {  }
};

void foo( Point p) {}

int main()
{
    Point p1(1,2); // 초기화
    Point p2{1,2};
    Point p3 = {1,2}; // error
    Point p4 = 1;     // error
    
    p1 = {1,2}; // 대입  error
    p1 = 10;    // int => Point 로 변환  error
    
    foo(p1); // ok 
    foo({1,1}); // error
    foo(1);     // error
    
}