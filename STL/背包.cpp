#include<cstdio>
const int maxn = 30;
int n,V,maxValue = 0;
int w[maxn], c[maxn];
void DFS(int index,int sumW,int sumC) //一般的DFS
{
    if(index==n)
    {
        if(sumW<=V && sumC>maxValue)
        {
            maxValue = sumC;
        }
        return ;
    }
    DFS(index + 1,sumW,sumC);
    DFS(index + 1,sumW+w[index],sumC+c[index]);
}
void newDFS(int index,int sumW,int sumC) //剪枝后的DFS
{
    if(index==n)
    {
        return ;
    }
    DFS(index+1,sumW,sumC);
    if(sumW + w[index] <=V)
    {
        if(sumC + c[index] >maxValue)
        {
            maxValue = sumC + c[index];
        }
        DFS(index+1, sumW+w[index],sumC+c[index]);
    }
}
int main()
{
    scanf("%d%d",&n,&V);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    // DFS(0,0,0);
    newDFS(0,0,0);
    printf("%d\n",maxValue);
    getchar();
    getchar();
    return 0;
}
