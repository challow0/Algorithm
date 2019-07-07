#include<iostream>
using namespace std;

int main()
{
    int m,n;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int sum = 0;
        int a =0;
        for(int i = 1;i<=n;i++)
        {
            a = i*2;
            sum+=a;
            if(i%m==0) // 考虑到第 i 个是不是 m 的整数倍
            {
                if(i==n) 
                {
                    cout<<sum/m<<endl;
                    break;
                }
                cout<<sum/m<<" ";
                sum = 0;
            }
            else if(i==n) // 最后一次的话，剩余的数字的数量就是 n%m 个数字
            {
                int d = n % m;
                cout<<sum/d<<endl;
            }
        }
    }
    system("pause");
    return 0;
}