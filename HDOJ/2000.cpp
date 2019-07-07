#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char c[4];
    while(cin>>c&&c)
    {
        int a[3];
        for(int i = 0;i<3;i++)
        {
            a[i] = c[i] - 'a'; 
        }
        sort(a,a+3);
        for(int i =0;i<3;i++)
        {
            c[i] = a[i] + 'a';
        }
        cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
    }
}