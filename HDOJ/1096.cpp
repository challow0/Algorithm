#include<iostream>
using namespace std;
int main()
{
    int x,y = 0;
    cin>>x;
    while(x--)
    {
        int ans = 0;
        cin>>y;
        for(int i = 0;i<y;i++)
        {
            int temp;
            cin>>temp;
            ans+=temp;
        }
        cout<<ans<<endl;
        if(x!=0)
            cout<<endl;
    }
    return 0;
}