class Test
{
public:
    void foo() {}       // 1
    void foo() const {} // 2
};

int main()
{
    Test t1;
    t1.foo();  // 1 ��ȣ��, ������ 2�� ȣ��
    
    const Test t2;
    t2.foo();   // 2�� ȣ��, ������ error
}