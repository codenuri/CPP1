#include <iostream>
#include <cstdio>
#include <string>

class File 
{
    FILE* file = 0;
public:
    File( std::string filename, std::string mode)
    {
        file = fopen(filename.c_str(), mode.c_str() );
    }
    ~File()
    {
        fclose(file);
    }
    // RW ÇÔ¼öµé
    void puts( std::string s)
    {
        fputs( s.c_str(), file);
    }
};

int main()
{
    File f("a.txt", "wt");
    
    f.puts("hello");
    
    
//    FILE* f = fopen("a.txt", "wt");
//    f = 0;
//    fputs("hello", f);
//    fclose(f);
}


