#include<cstdio>
#include<algorithm>
using namespace std;
const int INF = 1000000000;
const int MAXV = 200;
int n,m;
int dis[MAXV][MAXV];

void Floyd()
{
    for(int k = 0;k<n;k++)
    {
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(dis[i][k]!=INF && dis[i][j]!=INF && dis[i][k]+dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}
int main()
{
    int u,v,w;
    fill(dis[0],dis[0]+MAXV*MAXV,INF);
    scanf("%d%d",&n,&m);
    for(int i = 0;i<n;i++)
    {
        dis[i][i] = 0;
    }
    for(int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&u,&v,&w);
        dis[u][v] = w;
    }
    Floyd();
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",dis[i][j]);
        }
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}

/*
6 8
0 1 1
0 3 4
0 4 4
1 3 2
2 5 1
3 2 2
3 4 3
4 5 3
*/