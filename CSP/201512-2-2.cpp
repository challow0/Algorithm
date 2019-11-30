#include<stdio.h>

int input[100][100];
bool judge[100][100];
int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			scanf("%d",&input[i][j]);
			judge[i][j] = true;
		}
	}

	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m-2;j++)
		{
			if(input[i][j]==input[i][j+1] && input[i][j+2]==input[i][j])
			{
				judge[i][j] = false;
				judge[i][j+1] = false;
				judge[i][j+2] = false;
			}
		}
	}	
	for(int i = 1;i<=n-2;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			if(input[i][j] == input[i+1][j] && input[i][j]==input[i+2][j])
			{
				judge[i][j] = false;
				judge[i+1][j] = false;
				judge[i+2][j] = false;
			}
		}

	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			if(judge[i][j]==true)
			{
				printf("%d",input[i][j]);
			}
			else if(judge[i][j]==false)
			{
				printf("0");
			}
			if(j!=m)
				printf(" ");
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}