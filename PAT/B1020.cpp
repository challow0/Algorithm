#include<cstdio>
#include<algorithm>
using namespace std;
struct mooncake
{
    double sum;
    double price;
    double sell;
}cake[1010];
bool cmp(mooncake a,mooncake b)
{
    return a.sell > b.sell;
}
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    for(int i = 0;i<n;i++)
    {
        scanf("%lf",&cake[i].sum);
    }
    for(int i = 0;i<n;i++)
    {
        scanf("%lf",&cake[i].price);
        cake[i].sell = cake[i].price/cake[i].sum;
    }
    sort(cake,cake+n,cmp);
    double ans = 0;
    for(int i = 0;i<n;i++)
    {
        if(cake[i].sum <= d)
        {
            d-=cake[i].sum;
            ans+=cake[i].price;
        }
        else
        {
            ans+=cake[i].sell * d;
            break;
        }
        
    }
    printf("%.2f\n",ans);
    getchar();
    getchar();
    return 0;
}