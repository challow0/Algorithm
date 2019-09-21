#include<iostream>
using namespace std;
int main()
{
    int n,k,num=0;
    int a[1005];
    cin>>n>>k;
    for(int j = 0;j<n;j++)
        cin>>a[j];
    int i = 0;
    while(i<n)
    {
        int ans = 0;
        while(i<n && ans<k)
        {
            ans+=a[i];
            i++;
        }
        num++;
    }
    cout<<num;
   // system("pause");
    return 0;
}