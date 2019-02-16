
int gcd(int a, int b)
{
	return b != 0 ? gcd(b, a % b) : a;
}

//double gcd(double a, double b); // 함수 선언만

double gcd(double a, double b) = delete;

int main()
{
	gcd(2, 10);    // ok

	gcd(2.2, 4.3); // gcd(double, double)
}
