#include<cstdio>
int n;
int *father = new int[n];

int findfather(int x) // 找根节点
{
    while(x!=father[x])
    {
        x = father[x];
    }
    return x;
}
int findfather2(int x)
{
    if(x==findfather2(x))
        return x;
    else
    {
        return findfather2(father[x]);
    }
    
}

void Union(int a,int b) // 合并集合
{
    int faA = findfather(a);
    int faB = findfather(b);
    if (faA!=faB)
    {
        father[faA] = faB;
    }
}
int findfather_advance(int x)
{
    //保存原来x的值
    int a = x;
    while(x!=father[x])
    {
        x = father[x];
    }
    //到这里，x存放的是根节点。把所有节点的father改成根节点
    while(a!=father[a])
    {
        int z = a;
        a = father[a];
        father[z] = x;
    }
    return x;
}
int findfather_advance2(int v)
{
    if(v==father[v]) return v;
    else
    {
        int F = findfather_advance2(father[v]);
        father[v] = F;
        return F;
    }
    
}

int main()
{

    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        father[i] = i;
    }

}