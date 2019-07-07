#include<iostream>
using namespace std;
int main()
{
    double x;
    while(cin>>x&&x)
    {
        if(x<0)
            x = -x;
        printf("%.2lf\n",x);
    }
    return 0;
}