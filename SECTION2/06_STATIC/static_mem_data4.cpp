class Car
{
public:
    int speed;
    int color;
    
    static int cnt = 10; 
};
//int Car::cnt = 0; 

int main()
{
    Car::cnt = 0; 
    
    Car c;
    c.speed = 0;
    
    c.cnt = 0;
    Car::cnt = 0; // Car.cnt 
}


