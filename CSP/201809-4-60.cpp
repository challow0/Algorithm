#include<cstdio>
#include<cstring>
#include <cstdlib>
int n,d1[301],d2[301];

void dfs(int step)
{
    if(step==n)
    {
        for(int money = 1;money<=199;money++)
        {
            d1[n] = money;
            if(int((d1[n-1]+d1[n])/2) > d2[n] || int((d1[n-2]+d1[n-1]+d1[n])/3) > d2[n-1]) return;
            if(int((d1[n-1]+d1[n])/2) == d2[n] && int((d1[n-2] + d1[n-1] + d1[n])/3)==d2[n-1])
            {
                for(int j = 1;j<=n;j++)
                    printf("%d ",d1[j]);
                getchar();
                getchar();
                exit(0);
                
            }
        }
        return ;
    }
    for(int money = 1;money<=298;money++)
    {
        d1[step] = money;
        if(step==1) dfs(step+1);
        else if(step == 2)
        {
            if(int((d1[1] + d1[2])/2) <d2[1]) continue;
            else if(int((d1[1] + d1[2])/2) ==d2[1]) dfs(step+1);
            else if(int((d1[1] + d1[2])/2) > d2[1]) return ;
        }
        else
        {
            if(int((d1[step-2]+d1[step-1]+d1[step])/3) < d2[step-1]) continue;
            else if(int((d1[step-2]+d1[step-1]+d1[step])/3) == d2[step-1]) dfs(step+1);
            else if(int((d1[step-2]+d1[step-1]+d1[step])/3) < d2[step-1]) return ;
        }
        
    }
}


int main()
{
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&d2[i]);
    }
    memset(d1,0,sizeof(d1));
    dfs(1);
}