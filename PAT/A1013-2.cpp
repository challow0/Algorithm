#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
const int N = 1111;
vector<int>G[N];
bool vis[N];

int currentpoint;
void DFS(int v)
{
    if(v==currentpoint) return ;
    vis[v] = true;
    for(int i = 0;i<G[v].size();i++)
    {
        if(vis[G[v][i]]==false)
        {
            DFS(G[v][i]);
        }
    }
}
int n,m,k;
int main()
{   
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int query = 0;query < k;query++)
    {
        scanf("%d",&currentpoint);
        memset(vis,false,sizeof(vis));
        int block = 0;
        for(int i = 1;i<=n;i++)
        {
            if(i!=currentpoint && vis[i]==false)
            {
                DFS(i);
                block++;
            }
        }
        printf("%d\n",block-1);
    }
    getchar();
    getchar();
    return 0;
}