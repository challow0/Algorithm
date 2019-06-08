#include<iostream>
using namespace std;
int main()
{
    int x = 1;
    while(cin>>x && x!=0)
    {
        int temp,ans = 0;
        for(int i = 0;i < x;i++)
        {
            cin>>temp;
            ans+=temp;
        }
        cout<<ans<<endl;
    }

    return 0;
}