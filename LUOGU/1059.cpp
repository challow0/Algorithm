#include<iostream>
using namespace std;
bool num[1005];
int out[1005];
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp = 0;
        cin>>temp;
        num[temp] = true;
    }
    int k = 0;
    for(int i = 0;i<1005;i++)
        if(num[i])
            out[k++] = i;
    cout<<k<<endl;
    for(int i = 0;i<k;i++)
        cout<<out[i]<<" ";
    system("pause");
    return 0;
}