#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int m = 0,n = 0;
    int mark = 0;
    int a,b,c = 0;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        mark = 0;
        for(int i = m;i<=n;i++)
        {
            a = i%10;
            b = i%100/10;
            c = i/100;
            if(i == a*a*a + b*b*b +c*c*c)
               { 
                   if(mark>=1)
                    cout<<" ";
                    mark++;
                    cout<<i;
               }
        }

        if(mark == 0)
            cout<<"no"<<endl;
        else
        {
            cout<<endl;
        }
        
    }
    return 0;
}