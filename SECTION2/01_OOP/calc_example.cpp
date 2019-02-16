#include <iostream>
#include <stack>               
#include <string>
using namespace std;
 
void postfix(std::string, std::string);
int exp_operator(char);
 
int main()
{
       std::string in_expr, post_expr;
       cin >> in_expr;
       postfix(in_expr, post_expr);
       cout << "\n   -> ����ǥ��� : " << post_expr << endl;
       return 0;
}
 
int exp_operator(char x)
{
       char op[]={'\0','(',')','+','-','*','/','%'};
       int i;
 
       for(i = 1; i < 8; i++)
             if(op[i]==x)return i;   // ������
       return 0;                   // �ǿ�����
}
 
void postfix(char* e, char* p)
{
       stack<char> st;
       char token;
       int op_no, i=0, n=0;
       int Isp[]={0,0,19,12,12,13,13,13};
       int Icp[]={0,20,19,12,12,13,13,13};
 
       st.push('\0');
       
       for(token = e[i++]; token != '\0'; token = e[i++])
       {
             op_no=exp_operator(token);
             
             if(!op_no)p[n++] = token;
             
             else if(token==')') 
             {
                for(; st.top() != '('; st.pop())
                           p[n++] = st.top();
                    st.pop();
                    }
                     else{
                    for(; Isp[exp_operator(st.top())] >= Icp[op_no]; st.pop())
                           p[n++] = st.top();
                    st.push(token);
                    }
       }
       while(!st.empty()){        
             p[n++] = st.top();
        st.pop();
       }
       return;
}


��ó: http://clit.tistory.com/entry/�ڷᱸ��C-infix-������-postfix��-�ٲٴ�-���α׷� [ITer of C.N]