#include<cstdio>
#include<vector>
using namespace std;

struct Node
{
    int v;
    int w;
};

const int MAXV = 1000;
const int INF = 1000000000;
int n,G[MAXV][MAXV];
bool vis[MAXV] = {false};
// 邻接矩阵
void  DFS1(int u,int depth)  // u为当前访问的定点标号，depth为深度
{
    vis[u] = true;
    for(int v = 0;v<n;v++)
    {
        if(vis[v]==false&&G[u][v]!=INF)
        {
            DFS1(v,depth + 1);
        }
    }
}

void DFSTrave()
{
    for(int u = 0;u<n;u++)
    {
        if(vis[u]==false)
        {
            DFS1(u,1);
        }
    }
}

// 邻接表版
vector<int> adj[MAXV];
bool vis[MAXV] = {false};

void DFS2(int u, int depth)
{
    vis[u] = true;
    for(int i = 0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(vis[v] == false)
        {
            DFS2(v,depth+1);
        }
    }
}

void DFSTrave2()
{
    for(int u = 10;u<n;u++)
    {
        if(vis[u]==false)
        {
            DFS2(u,1);
        }
    }
}





