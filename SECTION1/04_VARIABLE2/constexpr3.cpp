constexpr double pi = 3.14;

int main()
{
    int n = 10;
    
    const int c1 = 10; // 컴파일 시간 상수. 배열 크기
    const int c2 = n;  // 실행시간 상수. 배열 크기 안됨..
    
    constexpr int c3 = 10; // ok
    constexpr int c4 = n; // error
    
}