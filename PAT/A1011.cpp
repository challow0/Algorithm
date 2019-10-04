#include<cstdio>
char s[3] = {'W','T','L'};
int main()
{
    double ans = 1.0,temp,a;
    int idx;
    for(int i = 0;i<3;i++)
    {
        temp = 0.0;
        for(int j = 0;j<3;j++)
        {
            scanf("%lf",&a);
            if(a>temp)
            {
                temp = a;
                idx = j;
            }
        }
        ans*=temp;
        printf("%c ",s[idx]);
    }
    printf("%.2f",(ans*0.65 - 1)*2);
    getchar();
    return 0;
}