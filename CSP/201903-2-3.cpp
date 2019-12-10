#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	stack<int> num;
	stack<char> opt;
	while(n--)
	{
		while(!num.empty()) num.pop();
		while(!opt.empty()) opt.pop();
		char str[10];
		cin>>str;
		int len = strlen(str);
		int i = 0;
		while(i<len)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				num.push(str[i] - '0');
			}
			else if(str[i]=='+')
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
				int tmp = num.top();
				num.pop();
				tmp = tmp*(str[i+1]-'0');
				num.push(tmp);
				i++;
			}
			else if(str[i]=='/')
			{
				int tmp = num.top();
				num.pop();
				tmp = tmp/(str[i+1]-'0');
				num.push(tmp);
				i++;
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
		if(num.top()==24)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	// system("pause");
	return 0;
}