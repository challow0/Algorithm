#include<iostream>
#include<algorithm>
using namespace std;
struct ss{
    int mark;
    int sum;
}s[1005];
bool cmp(ss a,ss b)
{
    if(a.sum!=b.sum) return a.sum>b.sum;
    else
    {
        return a.mark<b.mark;
    }
    
}
int main()
{
    int nn[1005];
    // int sum[1005];
    int mark[1005];
    int n = 0,m = 0;
    cin>>n>>m;
    for(int i  =0;i<n;i++)
    {
        cin>>nn[i];
        for(int j = 0;j<m;j++)
        {
            int temp;
            cin>>temp;
            s[i].sum+=abs(temp);
        }
        s[i].mark = i+1;
    }    
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<nn[i]<<"  "<<s[i].mark<<"  "<<s[i].sum<<endl;
    // }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans += (nn[i]-s[i].sum);
    }
    sort(s,s+n,cmp);
    cout<<ans<<" ";
    cout<<s[0].mark<<" "<<s[0].sum<<endl;
    //system("pause");
    return 0;
}