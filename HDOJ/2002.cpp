#include<iostream>
#include<stdio.h>
#define PI 3.1415927

using namespace std;
int main()
{
    double x;
    while(cin>>x&&x)
    {
        double temp = 4.0/3*PI*x*x*x;
        printf("%.3lf\n",temp);
    }
    return 0;
}