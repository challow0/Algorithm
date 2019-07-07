#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n = 0, c = 0;
    double ans = 0;
    while(cin>>n && n)
    {
        
        for(int i = 0;i<n;i++)
        {
            ans = 0;
            cin>>c;
            double mark = 1;
            for(int j = 1;j<=c;j++)
            {
                ans += mark*(1.0/j);
                mark = -mark;
            }
            printf("%.2lf\n",ans);
        }
    }
    return 0;

}