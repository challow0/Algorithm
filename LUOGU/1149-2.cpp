#include<iostream>
using namespace std;
int x[1001] = {6,2,5,5,4,5,6,3,7,6},b[4];
int n, cnt;
void dfs(int l)
{
    for(int i = 0;i<=999; i++)
    {
        if(n-x[i]>=0)
        {
            b[l] = i;
            n = n-x[i];
            if(l == 3)
            {
                if(b[1]+b[2]==b[3] && n==0) cnt++;  // 火柴棒用完
            }
            else
                dfs(l+1); // 回溯

             n = n+x[i];  // 保存之前状态
            
        }
    }
}
int main()
{
    cin>>n;
    n = n-4;
    for(int i = 10;i<=999 ;i++)
        x[i] = x[i/10] + x[i % 10]; //两位数的火柴棒 三位数的火柴棒放入数组
    dfs(1);
    cout<<cnt;
    return 0;
}