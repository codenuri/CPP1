
void f1(int a) {}
void f1(double d) {} // ok
f1(3.4);

void f2(int a) {}
void f2(int a, int b) {} // ok


void f3(int a) {}
void f3(int a, int b = 0) {} // error
f3(10);


int    f4(int a) { return 0;}
double f4(int a) { return 0;} // error

f4(10);


void f5(int   n) {}
void f5(char* s) {}

f5(0); // f5(int);
f5((char*)0);
f5(nullptr); // f5(char*) // C++11



int main()
{
}






