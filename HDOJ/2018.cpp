#include<iostream>
using namespace std;
int newborn[55];
int main()
{
    int n = 0;
    while(cin>>n && n)
    {
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            if(i < 4)
                newborn[i] = 1;
            else
                newborn[i] = newborn[i-1] + newborn[i-3]; // 每年的新生牛个数
        }
        for(int i = 0;i<n;i++)
            sum+=newborn[i];
        cout<<sum<<endl;
    }
    system("pause");
    return 0;
}