#include<iostream>
#include<algorithm>
using namespace std;
const int N = 500100;
struct Edge
{
    int u,v,w;
    bool operator<(const Edge &a)const
    {
        return w<a.w;
    }
}edge[N];
int pre[N];
void init(int n)
{
    for(int i = 0;i<=n;i++)
    pre[i] = i;
}

int find(int x)
{
    int r = x;
    while(r!=pre[r])
    {
        r = pre[r];
    }
    while(x!=r)
    {
        int i = pre[x];
        pre[x] = r;
        x = i;
    }
    return r;
}
bool join(int x,int y)
{
    int fx = find(x);
    int fy = find(y);
    if(fx!=fy)
    {
        pre[fx] = fy;
        return true;
    }
    return false;
}

int main()
{
    int n,m,root;
    scanf("%d%d%d",&n,&m,&root);
    for(int i = 0;i<m;i++)
    scanf("%d%d%d",&edge[i].u,&edge[i].v,&edge[i].w);
    sort(edge,edge+m);
    int ans = 0,num = 0;
    init(n);
    for(int i = 0;i<m;i++)
    {
        if(join(edge[i].u,edge[i].v))
        {
            ans = edge[i].w;
            if(++num==n-1)
                break;
        }
    }
    printf("%d\n",ans);
    return 0;
}