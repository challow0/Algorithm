#include<iostream>
#include<algorithm>
using namespace std;
const int maxN = 1500000;
struct node{
    int k;
    int c = 1;
}a[maxN];

int cmp(node b,node a )
{
    return b.k<a.k;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
        cin>>a[i].k;
    sort(a+1,a+n+1,cmp);
    for(int i = 1;i<=n;i++)
    {
        if(a[i].k==a[i+1].k)
        {
            a[i].k = 0;
            a[i+1].c+=a[i].c;
        }
        if(a[i].k!=0)
        cout<<a[i].k<<" "<<a[i].c<<endl;
    }
   // system("pause");
    return 0;

}