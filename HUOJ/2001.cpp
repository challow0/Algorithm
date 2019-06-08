#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        double temp = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        // cout<<temp<<endl;
        printf("%.2f\n", temp);
    }
    return 0;
}