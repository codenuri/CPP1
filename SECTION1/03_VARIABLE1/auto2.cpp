int main()
{
    int n1 = 10;
    
    auto a1 = n1;       // int
    decltype(n1) d1;    // int
        
    
    int x[3] = { 1,2,3}; // int[3]
    
    auto a2 = x;  // 1. int a2[3] = x; ��� �߷��ϸ� error
                  // 2. int* a2 = x;   ��� �߷��ϸ� ok.
    
    decltype(x) d2;  // int d2[3]  �� �߷�..
    // decltype(x) d3 = x; //   int d3[3] = x; ������ ���� 

    
    int y[2] = {1,2};
    
    auto a4 = y[0]; // int
    
    decltype(y[0]) d4; // int �� �ƴϰ� int&

}













