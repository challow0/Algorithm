#include<cstdio>
struct Student{
    long long id;
    int trynum;
    int realnum;
}stu[1005];
int main()
{
    int n,m;
    scanf("%d",&n);
    long long id;
    int trynum,realnum;
    for(int i = 0;i<n;i++)
    {
        scanf("%lld %d %d",&id,&trynum,&realnum);
        stu[trynum].id = id;
        stu[trynum].realnum = realnum;
    }
    scanf("%d",&m);
    for(int i = 0;i<m;i++)
    {
        scanf("%d",&trynum);
        printf("%lld %d\n",stu[trynum].id,stu[trynum].realnum);
    }
    return 0;
}