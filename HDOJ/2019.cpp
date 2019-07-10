#include<iostream>
using namespace std;

int main()
{
	int n = 0,x = 0,a[105];
	while(cin>>n>>x)
	{
		if(n==0 && x == 0)
             return 0;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	for(int i = 0;i < n;i++)
        if(x < a[i])
		{
		for(int j = n-1;j >= i; j--)  //从大到小一个一个向前移动
			a[j+1]=a[j];
		    a[i]=x;    //给x腾出空间
			break;
		}
		for(int i = 0; i < n;i++)
			cout<<a[i]<<" ";
		cout<<a[n]<<endl;
	}
	return 0;
}