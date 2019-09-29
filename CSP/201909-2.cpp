#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int tn = 0;
    cin>>tn;
    int E[1005];
    int ans[1005];
    for(int i = 0;i<1005;i++)
        E[i] = 0;
    for(int i = 0;i<tn;i++)
    {
        int mi = 0;
        cin>>mi;
        int leave = 0;
        cin>>leave; // 保留第一个剩余苹果数
        for(int j = 1;j<mi;j++)
        {
            int ai = 0;
            cin>>ai;
            if(ai>0)
            {
                if(leave!=ai)
                {
                    leave = ai;
                    E[i] = 1;
                }
            }
            else
            {
                leave = leave - abs(ai);
            }
            
        }
        ans[i] = leave;
    }
    // for(int i = 0;i<tn;i++)
    // {
    //     cout<<ans[i]<<"  "<<E[i]<<endl;
    // }
    int final = 0;
    int cnt = 0;
    for(int i = 0;i<tn;i++)
    {
        final = final + ans[i];
        if(E[i] == 1)
            cnt++;
    }        
    int ccet = 0;
    for(int i = 0;i<tn;i++)
    {
        int a = i;
        int b = i+1;
        int c = i+2;
        if(b >=tn)
            b = b % tn;
        if(c >=tn)
            c = c % tn;
        if(E[a]==1 && E[b]==1 && E[c]==1)
        {
            ccet++;
        }
    }
    cout<<final<<" "<<cnt<<" "<<ccet;
    // system("pause");
    return 0;
}