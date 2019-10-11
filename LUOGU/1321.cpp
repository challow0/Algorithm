#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[260];
    scanf("%s",&str);
    int n = strlen(str);
    int cnt_boy = 0;
    int cnt_girl = 0;
    for(int i = 0;i<n;i++)
    {
        if(str[i]=='b') cnt_boy++;
        else if(str[i]=='o'&&str[i-1]!='b') cnt_boy++;
        else if(str[i]=='y'&&str[i-1]!='o') cnt_boy++;
        else if(str[i]=='g') cnt_girl++;
        else if(str[i]=='i'&&str[i-1]!='g') cnt_girl++;
        else if(str[i]=='r'&&str[i-1]!='i') cnt_girl++;
        else if(str[i]=='l'&&str[i-1]!='r') cnt_girl++;
    }

    printf("%d\n%d",cnt_boy,cnt_girl);
    getchar();
    getchar();
    return 0;
}