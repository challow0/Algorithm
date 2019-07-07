#include<iostream>
#include<stdio.h>
using namespace std;

int a[100];
int main()
{
    int x,mark_high,mark_low;

    double ans = 0;
    while(cin>>x&&x)
    {
        ans = 0;
        int high = -99999;
        int low = 99999;
        for(int i = 0;i<x;i++)
        {
            cin>>a[i];
            if(a[i]>high)
            {
                high = a[i];
                mark_high = i;
            }
            if(a[i]<low)
            {
                low = a[i];
                mark_low = i;
            }
        }
        a[mark_high] = 0;
        a[mark_low] = 0;
        for(int i = 0;i<x;i++)
        {
            ans += a[i];
        }
        ans = ans/(x-2);
        printf("%.2lf\n",ans);
    }
    return 0;
}