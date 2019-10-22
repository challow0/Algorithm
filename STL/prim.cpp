#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXV = 10000;
const int INF = 1000000000;

//邻接矩阵版
int n,m, G[MAXV][MAXV];
int d[MAXV]; // 定点与集合的最短距离
bool vis[MAXV] = {false};

int prim()
{
    fill(d,d+MAXV,INF);
    d[0] = 0; // 0号定点到集合s的距离为0
    int ans = 0; // 存放最小生成树的边权之和
    for(int i = 0;i<n;i++) // 循环n次
    {
        int u = -1,MIN =INF;    // u使的d[u]最小
        for(int j =0;j<n;j++)
        {
            if(vis[j]==false && d[j]<MIN)
            {
                u = j;
                MIN = d[j];
            }
        }
        // 找不到小于INF的d[u],剩下的定点与集合S不连通
        if(u==-1)   return -1;
        vis[u] = true;
        ans+=d[u];// 加入最小生成树
        for(int v = 0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF&&G[u][v]<d[v])
            {
                d[v] = G[u][v];
            }
        }
    }
    return ans;
}
int main()
{
    int u,v,w;
    scanf("%d%d",&n,&m);
    fill(G[0],G[0]+MAXV*MAXV,INF);
    for(int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&u,&v,&w);
        G[u][v] = G[v][u] = w;
    }
    int ans = prim();
    printf("%d\n",ans);
    getchar();
    getchar();
    return 0;
}
/*
6 10
0 1 4
0 4 1
0 5 2
1 2 6
1 5 3
2 3 6
2 5 5
3 4 4
3 5 5
4 5 3
*/

