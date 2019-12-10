#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count[100];
	int seats[20][6];

	for(int i = 0;i<n;i++)
	{
		cin>>count[i];
	}
	for(int i = 0;i<20;i++)
	{
		seats[i][5] = 5;
	}
	for(int i = 0;i<n;i++)
	{
		int temp = count[i];
		bool flag = false;
		for(int j = 0;j<20;j++)
		{
			int res = seats[j][5];
			if(temp <= res)
			{
				int start = 5 - res;
				seats[j][5] -= count[i];
				flag = true;
				for(int k = start;k<start + count[i];k++)
					cout<<5*j+k+1<<" ";
				cout<<endl;
				break;
			}
		}
		if(!flag)
		{
			for(int j = 0;j<20;j++)
			{
				int res = seats[j][5];
				while(temp>0 && res>0)
				{
					cout<<j*5 + 5-res + 1<<" ";
					res-=1;
					seats[j][5] = res;
					temp-=1;
				}
				if(temp==0)
					break;
			}
			cout<<endl;
		}
	}
	getchar();
	getchar();
	return 0;
}