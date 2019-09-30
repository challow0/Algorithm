#include<iostream>
using namespace std;
int n,k;
int a[25];
bool vis[25];
long long ans = 0;
bool judge(int num)
{
    int temp = num;
    int mark = 0;
    for(int i = 2;i*i<=temp;i++)
    {
        if(temp % i == 0)
        {
            mark = 1;
        }
    }
    if(mark==0)
    {
        return true;
    }
    else
    {
        return false;
    }   
}
void dfs(int m,int sum,int startx)
{
    if(m==k)
    {
        if(judge(sum))
            ans++;
        return ;
    }
    for(int i = startx;i<n;i++)
    {
        if(vis[i])
            continue;
        vis[i] = true;
        dfs(m+1,sum+a[i],i+1);
        vis[i] = false;
    }
    return ;
}
int main()
{
    cin>>n>>k;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    dfs(0,0,0);
    cout<<ans;
    system("pause");
    return 0;
}