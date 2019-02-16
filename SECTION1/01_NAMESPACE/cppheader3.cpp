void foo() {}

namespace Audio
{
    using ::foo;
    
    void init() {}
}

int main()
{
    Audio::init();    
    
    using Audio::init; // using ¼±¾ð
    init();
    
    foo();
    Audio::foo();
    
}
