#include<iostream>
#include<cstdio>
using namespace std;
int carpet[10001][4];
int main()
{
    int n,x,y;
    int xx = 1;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>carpet[i][0]>>carpet[i][1]>>carpet[i][2]>>carpet[i][3];
        carpet[i][2]+=carpet[i][0];
        carpet[i][3]+=carpet[i][1];
    }
    cin>>x>>y;
    for(int k = n;k>=1;k--)
    {
        if(carpet[k][0]<=x &&carpet[k][1]<=y&&carpet[k][2]>=x&&carpet[k][3]>=y)
        {
            cout<<k;
            xx = 2;
            break;
        }
    }
    if(xx==1)
    {
        cout<<-1;
    }
   // system("pause");
    return 0;
}