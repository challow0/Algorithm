#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n = 0;
    int count[5] = {0};
    cin>>n;
    while(n--)
    {
        char c[100];
        cin>>c;
        for(int i = 0;i<5;i++)
        {
            count[i] = 0;
        }
        for(int i = 0;i<strlen(c);i++)
        {
            if(c[i]=='a'||c[i]=='A')
                count[0]++;
            else if(c[i]=='e'||c[i]=='E')
                count[1]++;
            else if(c[i]=='i'||c[i]=='I')
                count[2]++;
            else if(c[i]=='o'||c[i]=='O')
                count[3]++;
            else if(c[i]=='u'||c[i]=='U')
                count[4]++;
        }
        cout<<"a:"<<count[0]<<endl;
        cout<<"e:"<<count[1]<<endl;
        cout<<"i:"<<count[2]<<endl;                
        cout<<"o:"<<count[3]<<endl;
        cout<<"u:"<<count[4]<<endl;
        if(n!=0)
            cout<<endl;
    }
    return 0;
}