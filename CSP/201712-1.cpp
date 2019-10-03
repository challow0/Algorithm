#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[1005];
    int n = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int min = 99999;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i!=j)
            {
                if(abs(a[i]-a[j])<min)
                {
                    min = abs(a[i] - a[j]);
                }
            }
        }
    }
    cout<<min<<endl;
    system("pause");
    return 0;
}