
//struct Bike
class Bike
{
//private:
    int color;
    int gear;
    
public:
    void changeGear(int n)
    {
        if ( n < 1 ) return;
        
        gear = n;
    }
    int getGear() { return gear;}
};

int main()
{
    Bike b;
    //b.gear = -7; // error. private ¸â¹ö ÀÌ¹Ç·Î
    
    b.changeGear( -7 );
    int n = b.getGear();

    
}




