constexpr double pi = 3.14;

int main()
{
    int n = 10;
    
    const int c1 = 10; // ������ �ð� ���. �迭 ũ��
    const int c2 = n;  // ����ð� ���. �迭 ũ�� �ȵ�..
    
    constexpr int c3 = 10; // ok
    constexpr int c4 = n; // error
    
}