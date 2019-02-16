
void setAlarm(int h, int m = 0, int s = 0)
{
    // ......
}

int main()
{
    setAlarm( 3, 4, 5);
    
    setAlarm( 3, 0, 0);
    
    setAlarm( 3); // 3, 0, 0
    
    setAlarm( 3, 30); // 3, 30, 0

}