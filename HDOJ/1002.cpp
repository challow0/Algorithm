#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int s = 1;
	while(s <= n)
	{
		char str1[1000] ={0},str2[1000] = {0};
		int a[1001] = {0};
		int b[1001] = {0};
		scanf("%s%s",str1,str2);
		int len1 = strlen(str1);
		int len2 = strlen(str2);  // 字符串的长度

		int i,j,k = 0;
		for(i = len1 - 1;i>=0;i--) // 字符串转化为数字
		{
			a[k++] = str1[i] - '0';
		}
		k = 0;

		for(j = len2 - 1;j>=0;j--)  
		{
			b[k++] = str2[j] - '0';
		}

		k = len1 > len2 ? len1:len2;  // 求和
		for(j = 0;j<k;j++)
		{
			a[j] += b[j];
			if(a[j]>=10)
			{
				a[j]-=10;
				a[j+1]+=1;
			}
		}

		cout<<"Case "<<s<<":"<<endl;
		cout<<str1<<" + "<<str2<<" = ";
		if(a[k]==0)
		{
			for(i = k-1;i>=0;i--)
			{
				cout<<a[i];
			}
		}
		else
		{
			for(i = k;i>=0;i--)
			{
				cout<<a[i];
			}
		}
		cout<<endl;
		s++;
		if(s<=n)
		{
			cout<<endl;
		}
		

	}

	return 0;
}