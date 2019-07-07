#include<iostream>
using namespace std;
int main()
{
    int x,ans = 1,temp = 0;

    while(cin>>x && x)
    {
        ans = 1;
        for(int i = 0;i < x;i++)
        {
            cin>>temp;
            if(temp % 2 == 1)
                ans *= temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}