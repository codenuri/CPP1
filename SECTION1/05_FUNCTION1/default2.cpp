
void foo(int a = 0, int b) { }  // error

int main()
{
    foo(10);
}


void f1(int a,      int b,     int c = 0) {} // ok
void f2(int a,      int b = 0, int c = 0) {} // ok  
void f3(int a = 0,  int b = 0, int c = 0) {} // ok

void f4(int a,      int b = 0, int c    ) {} // error
void f5(int a = 0,  int b,     int c = 0) {} // error
void f6(int a = 0,  int b,     int c    ) {} // error