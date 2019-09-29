#include<iostream>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    int cnt = 0;
    for(int i = l;i<=r;i++)
    {
        int temp = i;
        while(temp!=0)
        {
            if(temp%10==2)
                cnt++;
            temp/=10;
        }
    }
    cout<<cnt;
    system("pause");
    return 0;
}