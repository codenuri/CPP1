#incldue <stack>

int main()
{
    int n = 0; // º¯¼ö
    n = 10;
    
    
    std::stack<int> s; // °´Ã¼
    
    s.push(10);
    s.push(20);
    s.push(30);
    int n2 = s.top();
    
    s.pop();
}