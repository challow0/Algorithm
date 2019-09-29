#include<iostream>
using namespace std;
bool ai[2000010];
int main()
{
    int n;
    long long T;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        double a = 0;
        int t = 0;
        cin>>a>>t;
        for(int j = 1;j<=t;j++)
        {
            T = a*j;
            if(ai[T]==0) ai[T] = 1;
            else
            {
                ai[T] = 0;
            }
            
        }
    }
    for(int i = 0;i<2000000;i++)
    {
        if(ai[i]==1)
        {
            cout<<i;
        //system("pause");
            return 0;
        }
    }
    //system("pause");
    return 0;
}