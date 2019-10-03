#include<iostream>
#include<algorithm>
struct student{
    int num;
    bool out;
}stu[1005];
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i = 1;i<=n;i++)
    {
        stu[i].num = i;
        stu[i].out = false;
    }
    int cnt = n;
    int round = 0;
    while(cnt!=1)
    {
        for(int i = 1;i<=n;i++)
        {
            
            if(stu[i].out==false)
            {
                round++;
                if(round % k==0 ||(round %10 ==k))
                {
                    stu[i].out = true;                   
                    cnt--;
                }
            }
            else
            {
                continue;
            }
            
        }

    }
    for(int i = 1;i<=n;i++)
    {
        if(stu[i].out==false)
        {
            cout<<stu[i].num;
        }
    }
    system("pause");
    return 0;
}
