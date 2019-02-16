class Car
{
    int speed;
    static int cnt; 
public:    
    Car()  {++cnt;}
    ~Car() {--cnt;}
    
    static int getCount() { return cnt;}
};
int Car::cnt = 0;   // 

int main()
{
    // 자동차 갯수를 알고 싶다.
    // getCount() 호출
    Car::getCount();
    
    Car c1, c2, c3;
    
    c1.getCount();
}


