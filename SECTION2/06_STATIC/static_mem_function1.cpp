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
    // �ڵ��� ������ �˰� �ʹ�.
    // getCount() ȣ��
    Car::getCount();
    
    Car c1, c2, c3;
    
    c1.getCount();
}


