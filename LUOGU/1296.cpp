#include<iostream>
#include<algorithm>
using namespace std;

int a[1000005];
int main()
{
    int n,d;
    cin>>n>>d;
    int ans = 0;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j] - a[i] > d)
            {
                break;
            }
            ans++;
        }
    }
    cout<<ans;
    system("pause");
    return 0;
}