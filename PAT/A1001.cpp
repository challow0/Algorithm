#include<cstdio>
long long a;
long long b;
long long ans;

int main()
{
    scanf("%lld %lld",&a,&b);
    ans = a + b;
    // printf("%lld",ans);
    if(ans < 0)
    {
        printf("-");
        ans = -ans;
    }
    int num[10];
    int len = 0;
    if(ans==0) num[len++] = 0;
    while(ans)
    {
        num[len++] = ans%10;
        ans = ans/10;
    } 
    for(int i = len - 1;i>=0;i--)
    {
        printf("%d",num[i]);
        if(i>0&&i%3 == 0) printf(",");
    }
    getchar();
    getchar();
    return 0;
}