#include<cstdio>
struct Poly{
    int exp;
    double cof;
}poly[1001];
double ans[2005];
int main()
{
    int k;
    scanf("%d",&k);
    for(int i = 0;i<k;i++)
    {
        scanf("%d %lf",&poly[i].exp,&poly[i].cof);
    }
    int m;
    scanf("%d",&m);
    for(int i = 0;i<m;i++)
    {
        int exp;
        double cof;
        scanf("%d %lf",&exp,&cof);
        for(int j = 0;j<k;j++)
        {
            ans[exp+poly[j].exp] +=(cof * poly[j].cof);
        }
    }
    int  count = 0;
    for(int i = 0;i<=2000;i++)
    {
        if(ans[i]!=0)
            count++;
    }
    printf("%d",count);
    for(int i = 2000;i>=0;i--)
    {
        if(ans[i]!=0.0)
        {
            printf(" %d %.1f",i,ans[i]);
        }
    }
    return 0;
}