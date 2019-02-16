struct Point
{
    int x;
    int y;
    
    //Point() {}
};

void f1(Point  pt) {} // 복사본 생성
void f2(Point& pt) {} // 복사본 생성 안함.




Point pt = {0,0};

//Point foo()  // 값 타입반환  return by value

Point& foo() 
{
     return pt; 
}    

int main()
{
    foo().x = 10;
    
    // pt.x => 10
}














