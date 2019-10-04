#include<cstdio>
int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int temp;
    if(n % 2==0)
    {
        temp = n/2;
    }
    else
    {
        temp = n/2 + 1;
    }
    for(int i = 0;i<n;i++)
        printf("%c",c);
    printf("\n");

    for(int i = 1;i<=temp-2;i++)
    {
        printf("%c",c);
        for(int j = 0;j<n-2;j++)
            printf(" ");
        printf("%c\n",c);
    }
    for(int i = 0;i<n;i++)
        printf("%c",c);
    printf("\n");
    // getchar();
    // getchar();
    return 0;    
}