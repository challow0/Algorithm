#include<cstdio>
#include<cstring>
int main()
{
    char str[50];
    scanf("%s",&str);
    int n = strlen(str);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=str[i]-'0';
    }
    printf("%d",sum);
    // getchar();
    // getchar();
    return 0;
}