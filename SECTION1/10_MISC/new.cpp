#include <cstdlib>  

int main()
{
    int* p1 = (int*)malloc(sizeof(int)*10);

    free(p1);
    
    
    int* p2 = new int; // int �Ѱ�, 4byte
    
    delete p2;
    
    int* p3 = new int[10];
    //delete[] p3;
    delete p3; // ������ ����(undefined)
    
    int* p4 = new int[10][2]; // 80
    delete[] p4;
    

}




