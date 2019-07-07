#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y;
    int n, T;
    while(cin>>x>>y&&(x||y))
    {
        T = 0;
        int t = 0,flag = 0;
        for(int i = x;i<=y;i++)
        {
            n = i*i +i +41;
            for(int j = 2;j<sqrt(n);j++)
            {
                if(n%j==0)
                {
                    t = 1;
                    cout<<"Sorry"<<endl;
                    break;
                }
            }
            if(t==1)
            {
                T = 1;
                break;
            }
        }
        if(T == 0) cout<<"OK"<<endl;
    } 
    return 0;
}