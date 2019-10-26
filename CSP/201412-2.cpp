#include<cstdio>
int ans[500+10][500+10];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            scanf("%d",&ans[i][j]);
        }
    }
    for(int i = 1;i<=2*n-1;i++)
    {
        int start = i<n?1 : (i-n + 1);
        int end = i<n?i : n;

        if(i%2==1)
        {
            for(int j=start;j<=end;j++)
                printf("%d ",ans[i-j+1][j]);
        }
        else
        {
            for(int j = start;j<=end;j++)
                printf("%d ",ans[j][i-j+1]);
        }
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}