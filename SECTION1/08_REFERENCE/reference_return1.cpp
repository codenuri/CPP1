struct Point
{
    int x;
    int y;
    
    //Point() {}
};

void f1(Point  pt) {} // ���纻 ����
void f2(Point& pt) {} // ���纻 ���� ����.




Point pt = {0,0};

//Point foo()  // �� Ÿ�Թ�ȯ  return by value

Point& foo() 
{
     return pt; 
}    

int main()
{
    foo().x = 10;
    
    // pt.x => 10
}














