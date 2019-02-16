#include <iostream>

class OFile
{
    FILE* file;
public:
    explicit OFile(const char* filename)
    {
        file = fopen(filename, "wt");
    }
    ~OFile() { fclose(file); }
};

void foo( OFile f) {} // OFile f = "hello";

int main()
{
    OFile f1("a.txt");
    OFile f2 = "a.txt"; // error
    
    foo( f1 );
    foo("hello"); // error
    
}







