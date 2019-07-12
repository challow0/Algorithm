#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char a[100];
    while(gets(a))
    {
        int len = strlen(a);
        a[0] = a[0] - 32;
        for(int i = 1;i<len;i++)
        {
            if(a[i-1] == ' ' )
                a[i] = a[i] - 32;
        }
        cout<<a<<endl;;

    }
    system("pause");
    return 0;
}