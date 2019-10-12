#include<cstdio>
#include<iostream>
using namespace std;
int a[100][100];
bool b[100][100];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {   
            cin>>a[i][j];
            b[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 1;j<m-1;j++)
        {
            if(a[i][j]==a[i][j+1]&& a[i][j]==a[i][j-1])
            {
                b[i][j] = b[i][j-1] = b[i][j+1] = true;
            }
        }
    }

    for (int i = 1; i < n-1; i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(a[i-1][j]==a[i][j]&& a[i][j]==a[i+1][j])
            {
                b[i-1][j] = b[i][j] = b[i+1][j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(b[i][j]==false)
            {
                printf("%d",a[i][j]);
            }
            if(b[i][j]==true)
            {
                printf("0");
            }
            if(j<m)printf(" ");
        }
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}