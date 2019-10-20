#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXV = 1000;
const int INF = 1000000000;

int n,m,s,G[MAXV][MAXV];
int d[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s)
{
    fill(d,d+MAXV,INF);
    d[s] = 0;
    for(int i = 0;i<n;i++)
    {
        int u = -1,MIN = INF;
        for(int j = 0;j<n;j++)
        {
            if(vis[j]==false && d[j] <MIN)
            {
                u = j;
                MIN = d[j];
            }
        }
    
    if(u==-1) return ;
    vis[u] = true;
    for(int v = 0;v < n;v++)
    {
        if(vis[v]==false && G[u][v]!=INF && d[u]+G[u][v] < d[v])
            d[v] = d[u] + G[u][v];
    }

    }
}

int main()
{
    int u,v,w;
    scanf("%d%d%d",&n,&m,&s); // 顶点个数、边数、起点编号
    fill(G[0],G[0]+MAXV*MAXV,INF); // 初始化图G
    for(int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&u,&v,&w); // 输入u,v以及u->v的变边权
        G[u][v] = w;
    }
    Dijkstra(s);// 算法入口
    for(int i = 0;i<n;i++)
        printf("%d",d[i]);
    
    getchar();
    getchar();
    return 0;
}

/*
6 8 0
0 1 1
0 3 4
0 4 4
1 3 2
2 5 1
3 2 2
3 4 3
4 5 3
*/