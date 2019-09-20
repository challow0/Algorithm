#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;

int n;
char str[10];


stack<int> num;
stack<char> sign;

int main()
{
    scanf("%d", &n);
    getchar();
    for(int i = 0;i < n;i++) //n 层循环，每一层都是一个表达式
    {
        gets(str);

        while(!num.empty()) num.pop();  // 先清空栈中保留的元素
        while(!sign.empty()) sign.pop();

        int j = 0;
        while(j < strlen(str))  // 对一个表达式开始遍历
        {
            if(str[j] > '0' && str[j] <='9')   // 数字直接进入数字栈
            {
                num.push(str[j] - '0');
            }
            else
            {
                if(str[j] == '+')
                {
                    sign.push('+');
                }
                else if(str[j] == '-')
                {
                    num.push((str[j+1] - '0')*(-1));  // 加号变为减号
                    sign.push('+');
                    j++;
                }
                else if(str[j] == 'x')
                {
                    int lhs = num.top();
                    num.pop();
                    num.push(lhs * (str[j+1] - '0'));
                    j++;
                }
                else if(str[j] == '/')
                {
                    int lhs = num.top();
                    num.pop();
                    num.push(lhs / (str[j+1] - '0'));
                    j++;
                }

            }
            j++;
        }
        while(!sign.empty())
        {
            int rhs = num.top();
            num.pop();
            int lhs = num.top();
            num.pop();
            sign.pop();
            num.push(lhs + rhs);
        }

        int ans = num.top();
        if(ans == 24) printf("Yes\n");
        else printf("No\n");
    }
    return 0;

}
