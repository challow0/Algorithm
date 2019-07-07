#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int temp,ans = 0;
        cin>>temp;
        for(int i = 0;i<temp;i++)
        {
            int t;
            cin>>t;
            ans+=t;
        }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;

}