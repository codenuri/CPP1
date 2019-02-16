class Airplane
{
    int color;
    int speed;    
    int engineTemp;
public:
    int getSpeed() { return speed;}
    
    friend void fixAirplane(Airplane& a);
};

void fixAirplane(Airplane& a)
{
    int n = a.engineTemp;
}

int main()
{
    Airplane a;
    fixAirplane(a);
}