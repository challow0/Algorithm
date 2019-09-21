#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin>>n;
    int count[100];
    for(int i = 0;i<n;i++)
        cin>>count[i];
    int zw[20][6];
    for(int i = 0;i<20;i++)
        zw[i][5] = 5;

    for(int i = 0;i<n;i++)
    {
        int temp = count[i];
        bool flag = false;  // 记录能否找到合适的排
        for(int j = 0;j<20;j++)
        {
            int res = zw[j][5];
            if(res>=temp)  // 剩余的位置足够
            {
                int start = 5-res;
                zw[j][5] -= count[i];
                flag = true;
                for(int k = start;k < start+count[i];k++)
                    cout<<j*5+k+1<<" ";
                cout<<endl;
                break;
            }

        }
        if(!flag)  // 没有找到足够的位置
        {
            for(int j = 0;j<20;j++)
            {
                int res = zw[j][5];
                while(temp>0 && res >0)
                {
                    cout<<j*5 + 5-res + 1<<" ";
                    res-=1;
                    zw[j][5] = res;
                    temp-=1;
                }
                if(temp==0)
                    break;
            }
            cout<<endl;
        }
    }
    system("pause");
    return 0;
}