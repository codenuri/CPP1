#incldue <stack>

int main()
{
    int n = 0; // ����
    n = 10;
    
    
    std::stack<int> s; // ��ü
    
    s.push(10);
    s.push(20);
    s.push(30);
    int n2 = s.top();
    
    s.pop();
}