#include<iostream>
using namespace std;

int main()
{
    double n,m;
    double mix[50+5][10];
    bool f[50+5];

    while(cin>>n>>m)
    {
        for(int i = 0;i<55;i++)
            {
            f[i] = true;
            }
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                cin>>mix[i][j];
            }
        }
        // 第一个要求输出第一行
        for(int i = 0;i<n;i++)
        {
            double aver = 0;
            for(int j = 0;j<m;j++)
            {
                aver+=mix[i][j];
            }
            printf("%.2lf",aver/m);
            if(i!=n-1) cout<<" ";
        }
        cout<<endl;
        //第二个要求输出第二行

        for(int j = 0;j<m;j++)
        {   
            double ave = 0;
            for(int i = 0;i<n;i++)
            {
                ave += mix[i][j];
            }
            printf("%.2lf",ave/n);
            if(j!=m-1) cout<<" ";

            for(int i = 0;i<n;i++)
            {
                if(f[i])
                    if(mix[i][j] < ave/n)
                        f[i] = false;
            }
        }
        cout<<endl;
        int ans = 0;
        for(int i = 0;i<n;i++)
            if (f[i]) ans++;
        cout<<ans<<endl;
        cout<<endl;
    }
    return 0;
}