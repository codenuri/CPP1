
// ���Ҽ� 2���� ���ϰ� �ʹ�.
void add( double ar,  double ai, double br, double bi, // in parameter 
          double* sr, double* si ) // out parameter
{
    *sr = ar + br;
    *si = ai + bi;
}

int main()
{
    double xr = 1, xi = 1; // 1 + 1i
    double yr = 2, yi = 2; // 2 + 2i
    double sr, si;
    
    add( xr, xi, yr, yi, &sr, &si );
    
    // sr, si ����� �ִ�.
}