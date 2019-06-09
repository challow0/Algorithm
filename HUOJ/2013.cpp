#include<iostream>
using namespace std;
int main()
{
    int x,ans;
    while(cin>>x && x)
    {
        ans = 1;
        for(int i = 0;i<x-1;i++)
        {
            ans = (ans + 1) * 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}