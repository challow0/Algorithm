#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double n = 0,m = 0;
    double ans = 0;
    while(scanf("%lf %lf",&n,&m)!=EOF)
    {
        ans = 0;
        while(m--)
        {
            ans +=n;
            n = sqrt(n);
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}