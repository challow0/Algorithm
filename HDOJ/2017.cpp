#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin>>n;
    int temp = n;
    while(temp--)
    {
        string str;
        cin>>str;
        int count = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str[i]>='0'&&str[i]<='9')
                count++;
        }
        cout<<count<<endl;
    }

 //   system("pause");
    return 0;
}