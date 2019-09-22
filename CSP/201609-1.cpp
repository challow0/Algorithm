#include<iostream>
#include<algorithm>
using namespace std;

int a[1005];

int main()
{
    int n = 0;
    cin>>n;
    int max = -9999;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i = 0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])>max)
            max = abs(a[i]-a[i+1]);
    }
    cout<<max;
 //   system("pause");
    return 0;
}