#include <iostream>

struct Date
{
    int year;
    int month;
    int day;
};

//void foo(Date d) // call by value 
void foo(const Date& d) 
{
    // d.year = 1000; // error
}

int main()
{
    Date date = {2020, 3, 28};
    
    foo(date);
    
    std::cout << date.year << std::endl; // 2020
}



