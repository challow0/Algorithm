#include<cstdio>
struct person{
    char name[10];
    int yy,mm,dd;
}oldest,youngest,left,right,temp;
bool More(person a,person b)
{
    if(a.yy!=b.yy) return a.yy>=b.yy;
    else if(a.mm!=b.mm) return a.mm>=b.mm;
    else
    {
        return a.dd>=b.dd;
    }
}
bool Less(person a,person b)
{
    if(a.yy!=b.yy) return a.yy<=b.yy;
    else if(a.mm!=b.mm) return a.mm<=b.mm;
    else
    {
        return a.dd<=b.dd;
    }
}
void init()
{
    youngest.yy=left.yy=1814;
    oldest.yy=right.yy=2014;
    youngest.mm=oldest.mm=left.mm=right.mm=9;
    youngest.dd=oldest.dd=left.dd=right.dd=6;
}
int main()
{
    init();
    int n,num = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%s %d/%d/%d",&temp.name,&temp.yy,&temp.mm,&temp.dd);
        if(More(temp,left)&&Less(temp,right))
        {
            num++;
            if(Less(temp,oldest)) oldest = temp;
            if(More(temp,youngest)) youngest = temp;
        }
    }
    if(num==0)  printf("0\n");
    else
    {
        printf("%d %s %s",num,oldest.name,youngest.name);
    }
    getchar();
    getchar();
    return 0;
    
}