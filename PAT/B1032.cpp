#include<cstdio>
int a[100010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        int b,c;
        scanf("%d %d",&b,&c);
        a[b]+=c;
    }
    int max = -1;
    int maxi = 1;
    for(int i = 1;i<=n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            maxi = i;
        }
    }
    printf("%d %d\n",maxi,max);
    // getchar();
    // getchar();
    return 0;
}