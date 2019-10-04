#include<cstdio>
#include<cstring>
int main()
{
    char str[100],ans[40][40];
    scanf("%s",&str);
    int N = strlen(str);
    int n1 = (N + 2)/3,n3 = n1,n2 = N+2 - n1 -n3;
    for(int i = 1;i<=n1;i++)
    {
        for(int j = 1;j<=n2;j++)
        {
            ans[i][j] = ' ';
        }
    }
    int pos = 0;
    for(int i = 1;i<=n1;i++)
    {
        ans[i][1] = str[pos++];
    }
    for(int i = 2;i<=n2;i++)
    {
        ans[n1][i] = str[pos++];
    }
    for(int i = n3-1;i>=1;i--)
    {
        ans[i][n2] = str[pos++];
    }
    for(int i = 1;i<=n1;i++)
    {
        for(int j = 1;j<=n2;j++)
        {
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }
    // getchar();
    // getchar();
    return 0;
}