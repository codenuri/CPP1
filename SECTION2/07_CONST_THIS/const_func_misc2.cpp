class Test
{
    int data;
public:
    //int* getData() const 
    const int* getData() const 
    {
        // data�� ��� �̴�. : const int data
         return &data;
    }
};

int main()
{
    
}