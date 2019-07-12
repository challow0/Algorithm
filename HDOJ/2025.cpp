#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    while(cin>>a)
    {
        int max = a[0]; // 记得赋初值
        for(int i = 0;i<strlen(a);i++)
            {
                if(a[i] > max)
                {
                    max = a[i];
                }
            }
        for(int i = 0;i<strlen(a);i++)
            {
                cout<<a[i];
                if(a[i] == max)
                    cout<<"(max)";
            }
        cout<<endl;
    }
    return 0;
}