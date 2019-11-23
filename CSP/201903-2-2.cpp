#include<stack>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    stack<int> num;
    stack<char> opt;
    char str[10];
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);

        while(!num.empty()) num.pop();
        while(!opt.empty()) opt.pop();
        int i = 0;

        while(i<strlen(str))
        {
            if(str[i]>='1'&&str[i]<='9')
            {
                num.push(str[i]-'0');
            }
            else
            {
                if(str[i]=='+')
                {
                    opt.push('+');
                }
                else if(str[i]=='-')
                {
                    num.push((str[i+1]-'0')*(-1));
                    opt.push('+');
                    i++;
                }
                else if(str[i]=='x')
                {
                    int temp = num.top();
                    num.pop();
                    num.push(temp*(str[i+1]-'0'));
                    i++;
                }
                else if(str[i]=='/')
                {
                    int temp = num.top();
                    num.pop();
                    num.push(temp/(str[i+1]-'0'));
                    i++;
                }
            
            }
            i++;
        }

        while(!opt.empty())
        {
            int a = num.top();
            num.pop();
            int b = num.top();
            num.pop();
            opt.pop();
            num.push(a+b);
        }
        int ans = num.top();
        if(ans==24) printf("Yes\n");
        else
        {
            printf("No\n");
        }
            
        
    }
    getchar();
    getchar();
    return 0;
}