#include<cstdio>
#include<cstring>
const int maxn = 100010;
bool hashtable[256];
char str[maxn];
int main()
{
    memset(hashtable,true,sizeof(hashtable));
    scanf("%s",&str);
    int len = strlen(str);
    for(int i = 0;i<len;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
        hashtable[str[i]] = false;
    }
    scanf("%s",&str);
    len = strlen(str);
    for(int i = 0;i<len;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            int low = str[i] - 'A' + 'a';
            if(hashtable[low]==true && hashtable['+']==true)
            {
                printf("%c",str[i]);
            }
        }
        else if(hashtable[str[i]]==true)
        {
            printf("%c",str[i]);
        }

        
    }
    printf("\n");
    // getchar();
    // getchar();
    return 0;
}