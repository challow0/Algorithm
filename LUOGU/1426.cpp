
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double s = 0,x = 0,v = 7.0;
    scanf("%lf%lf",&s,&x);
    double l = 0;
    while(l<s-x)
    {
        l+=v;
        v*=0.98;
    }

    if(v*0.98 <= s+x-l)  
    {
    printf("y"); return 0;
    }        
    else
    {
        printf("n");
    }
    // getchar();
    // getchar();
    return 0;
    
}