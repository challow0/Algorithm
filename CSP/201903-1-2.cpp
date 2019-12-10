#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
int main()
{
	int max=-999999, min=999999;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min = arr[0],max = arr[n-1];
	if(min > max )
	{
		int tmp = min;
		min = max;
		max = tmp;
	}
	printf("%d ",max);
	if(n%2==0) 
	{
		if((arr[n/2] + arr[n/2 - 1])%2==0)
		{
			printf("%d ",(arr[n/2] + arr[n/2 - 1])/2);
		}
		else
		{
			double middle = (arr[n/2] + arr[n/2 - 1])/2.0;
			printf("%.1lf ",middle);
		}
	}
	else
	{
		printf("%d ",arr[n/2]);
	}
	printf("%d",min);
	getchar();
	getchar();
	return 0;
}
