#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
char c[300];
int main()
{
    stack<char> ans;
    gets(c);
    int length = strlen(c);
    for(int i = 0;i<length;i++)
    {
        if(c[i]=='(')
        {
            ans.push(c[i]);
        }
        if(c[i]==')')
        {
            if(ans.empty())
            {
                printf("NO");
                return 0;
            }
            ans.pop();
        }

    }

    if(ans.empty())
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    // getchar();
    // getchar();
    return 0;
    
}
