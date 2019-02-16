class Test
{
    int data;
public:
    //int* getData() const 
    const int* getData() const 
    {
        // data는 상수 이다. : const int data
         return &data;
    }
};

int main()
{
    
}