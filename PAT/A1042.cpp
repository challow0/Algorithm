#include<cstdio>
const int N= 54;
int start[N+1],end[N+1],next[N+1];
char mp[5] = {'S','H','C','D','J'};
int main()
{
    int k;
    scanf("%d", &k);
    for(int i = 1;i<=N;i++)
        start[i] = i;
    for(int i = 1;i<=N;i++)
    {
        scanf("%d",&next[i]);
    }
    for(int i = 1;i<=k;i++)
    {
        for(int j = 1;j<=N;j++)
        {
            end[next[j]] = start[j];
        }
        for(int j = 1;j<=N;j++)
        {
            start[j] = end[j];
        }
    }
    for(int i = 1;i<=N;i++)
    {
        if(i!=1) printf(" ");
        start[i]--;
        printf("%c%d",mp[start[i]/13],start[i]%13 + 1);
    }
    return 0;
}