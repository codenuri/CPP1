class Test
{
public:
    void foo() {}       // 1
    void foo() const {} // 2
};

int main()
{
    Test t1;
    t1.foo();  // 1 번호출, 없으면 2번 호출
    
    const Test t2;
    t2.foo();   // 2번 호출, 없으면 error
}