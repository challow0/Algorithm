#include<iostream>
using namespace std;
int a[100005];
int main()
{
    int n,m;
    cin>>n>>m;
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(sum+a[i]>m)
        {
            cnt++;
            sum = 0;
        }    
        sum = sum +a[i];
    }

    if(sum)
    {
        cnt++;
    }
    cout<<cnt;
    system("pause");
    return 0;

}