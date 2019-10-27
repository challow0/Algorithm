#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char right[100];
    char wrong[100];
    bool hashtable[128]={false};
    scanf("%s",&right);
    scanf("%s",&wrong);
    // gets(right);
    // gets(wrong);
    int lengthr = strlen(right);
    int lengthw = strlen(wrong);
    for(int i = 0;i<lengthr;i++)
    {
        int j;
        char c1,c2;
        for(int j = 0;j<lengthw;j++)
        {
            c1 = right[i];
            c2 = wrong[j];
            if(c1 >='a'&& c1<='z') c1-=32;
            if(c2 >='a'&& c2<='z') c2-=32;
            if(c1==c2) break;
        }
        if(j==lengthw && hashtable[c1]==false)
        {
            printf("%c",c1);
            hashtable[c1] = true;
        }
    }
    getchar();
    getchar();
    return 0;
}