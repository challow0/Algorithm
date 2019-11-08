#include<cstdio>
#include<algorithm>
using namespace std;
int a[2005];
int b[2005];
int c[2005];
int d[2005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int i = 0;i<n;i++)
    {
        scanf("%d%d",&c[i],&d[i]);
    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        int aa = a[i],bb = b[i];
        for(int j = 0;j<n;j++)
        {
            int cc = c[j],dd = d[j];
           if((cc >=aa) && (cc<=bb))
           {
               if(dd > bb)
               {
                   ans+=(bb - cc);
               }
               else
               {
                   ans+=(dd - cc);
               }
               
           }
           else if((aa >= cc)&&(aa < dd))
           {
               if(dd < bb)
                {
                    ans+=(dd - aa);
                }
                else
                {
                    ans+=(bb - aa);
                }
                
           }
           

        }

    }
    printf("%d",ans);
    getchar();
    getchar();
    return 0;
}