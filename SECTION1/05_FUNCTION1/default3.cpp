
void foo(int a = 0, int b = 0);

int main()
{
    foo(1, 2); // ok
    foo(1);
    foo();
}

void foo(int a /* = 0 */, int b /* = 0 */ )
{
}