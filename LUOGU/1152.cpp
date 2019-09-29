#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[1005];
    int b[1005];
    int n = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i = 0;i<n-1;i++)
    {
        b[i] = abs(a[i]-a[i+1]);
    }
    sort(b,b+n-1);
    int mark = 1;
    for(int i = 0;i<n-1;i++)
    {
        if(b[i]!=i+1)
        {
            mark = 0;
        }
    }
    if(mark)
    {
        cout<<"Jolly"<<endl;
    }
    else
    {
        cout<<"Not jolly"<<endl;
    }
    
    system("pause");
    return 0;
}