void foo() {}

namespace Audio
{
    using ::foo;
    
    void init() {}
}

int main()
{
    Audio::init();    
    
    using Audio::init; // using ����
    init();
    
    foo();
    Audio::foo();
    
}
