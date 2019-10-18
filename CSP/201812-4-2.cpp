#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXV = 50005;
const int MAXE = 500100;
struct edge
{
    int u,v;
    int cost;
}E[MAXE];

bool cmp(edge a,edge b)
{
    return a.cost < b.cost;
}
int father[MAXV];
int findFather(int x)
{
    int a = x;
    while(x!=father[x])
    {
        x = father[x];
    }
    while(a!=father[a])
    {
        int z = a;
        a = father[z];
        father[z] = x;
    }
    return x;
}

int kruskal(int n,int m)
{
    int ans = 0,num_edge = 0;
    for(int i = 0;i<n;i++)
    {
        father[i]= i;
    }
    sort(E,E+m,cmp);
    for(int i = 0;i<m;i++)
    {
        int faU = findFather(E[i].u);
        int faV = findFather(E[i].v);
        if(faU!=faV)
        {
            father[faU] = faV;
            ans = max(ans,E[i].cost);
            num_edge++;
            if(num_edge==n-1) break;
        }
    }
    if(num_edge!=n-1) return -1;
    else
    {
        return ans;
    }
    
}
int main()
{
    int n,m,root;
    scanf("%d%d%d",&n,&m,&root);
    for(int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].cost);
    }
    int ans = kruskal(n,m);
    printf("%d\n",ans);
    // getchar();
    // getchar();
    return 0;
}
/*
6 10
0 1 4
0 4 1
0 5 2
1 2 1
1 5 3
2 3 6
2 5 5
3 4 5
3 5 4
4 5 3
*/

 