#include<iostream>
using namespace std;

int a[10005];

int main()
{
    int n = 0,max = 0,temp;
    int ans = 999999;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        a[temp]++;
        if(a[temp] > max)
        {
            max = a[temp];
            ans = temp;
        }
        else if(a[temp] == max && temp < ans)
        {
            ans = temp;
        }
    }
    cout<<ans;
    system("pause");
    return 0;

}