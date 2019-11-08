#include<cstdio>
int first[1005];
int second[1005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&first[i]);
    }
    second[0] = (first[0] + first[1])/2;
    second[n-1] = (first[n-2] + first[n-1])/2;
    for(int i = 1;i<n-1;i++)
    {
        second[i] = (first[i-1] + first[i] + first[i+1])/3;
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d",second[i]);
        if(i != n-1) printf(" ");
    }
    getchar();
    getchar();
    return 0;
}