#include<cstdio>
int main()
{
    int sum = 0;
    int t = 0,n = 0,i = 0,b = 0;
    scanf("%d",&n);
    while (sum<n*n)
    {
        int temp = 0;
        scanf("%d",&temp);
        i++;
        for(b = temp;b>=1;b--)
        {
            if(t==n)
            {
                printf("\n");
                t = 0;
            }
            if(i%2==1) printf("0");
            else
            {
                printf("1");
            }
            t++;
            sum++;
            
        }
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}