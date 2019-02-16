#include <stdio.h>

namespace Audio
{
    void init()  { printf("Audio init\n"); }
    void reset() { printf("Audio reset\n");}
}
using namespace Audio; // using directive

void init()  { printf("global init\n"); }

int main()
{
    Audio::init();
    
    //using Audio::init; // using ¼±¾ð
    //init();
    //reset(); // error
    
    //using namespace Audio; // using directive
    ::init();
    reset();
}




