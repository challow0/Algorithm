#include<cstdio>
#include<algorithm>
using namespace std;
int a[10005];
int b[10005];

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    // for(int i = 0;i<n;i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    int cnt = 0;
    for(int i = 0;i<10000;i++)
    {
        b[i] = 1;
    }
    for(int i = 0;i<n;i++)
    {
        if(a[i+1] == a[i] + 1)
        {
            b[cnt]++;
        }
        else
        {
            cnt++;
        }
        
    }
    // for(int i = 0;i<cnt;i++)
    // {
    //     printf("%d ",b[i]);
    // }
    sort(b,b+cnt,cmp);
    // for(int i = 0;i<cnt;i++)
    // {
    //     printf("%d ",b[i]);
    // }
    printf("%d\n",b[0]);
    // getchar();
    // getchar();
    return 0;
}   