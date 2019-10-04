#include<cstdio>
char c[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
int main()
{
    int r,g,b;
    scanf("%d %d %d",&r,&g,&b);
    printf("#");
    printf("%c%c",c[r/13],c[r%13]);
    printf("%c%c",c[g/13],c[g%13]);
    printf("%c%c",c[b/13],c[b%13]);
    return 0;
}