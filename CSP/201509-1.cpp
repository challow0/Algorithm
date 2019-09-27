#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[1005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    int current_num = a[0];
    int cnt = 1;
    for(int i = 0;i<n;i++)
    {
        if(a[i]==current_num)
        {
            cnt = cnt+0;
            continue;
        }
        else
        {
            cnt++;
            current_num = a[i];
        }
        
        
    }
    cout<<cnt;
    system("pause");
    return 0;
}