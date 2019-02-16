
void foo(int) = delete; // 함수 삭제 

int main()    
{             
    foo(10); // 컴파일 에러.
}

