#include<cstdio>
#include<iostream>
using namespace std;
const int maxn = 1111;
double p[maxn];
int main()
{
    int n,k,count = 0;
    double a;
    scanf("%d",&k);
    for(int i = 0;i<k;i++)
    {
        scanf("%d%lf",&n,&a);
        p[n]+=a;
    }
    scanf("%d",&k);
    for(int i = 0;i<k;i++)
    {
        scanf("%d%lf",&n,&a);
        p[n]+=a;
    }
    for(int i = 0;i<maxn;i++)
    {
        if(p[i]!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    for(int i = maxn-1;i>=0;i--)
    {
        if(p[i]!=0)
            printf(" %d %.1f",i,p[i]);
    }
    system("pause");
    return 0;
}