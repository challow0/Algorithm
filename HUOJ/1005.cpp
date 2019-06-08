#include<iostream>
using namespace std;



int main()
{
    int A,B,n = 0;
    int a[200];
    a[1] =1;
    a[2] =1;
    // cin>>A>>B; 
    // //测试循环周期
    // for(int i=3;i<=200;i++)
    // {
    //     a[i]=(A*a[i-1]+B*a[i-2])%7;
    //     cout<<a[i]<<" "<<i<<endl;
    // }

    while(1)
    {
        cin>>A>>B>>n;
        if(A ==0 && B ==0&&n ==0) break;
        for(int i = 3;i <= 48;i++)
        {
           a[i]=(A*a[i-1]+B*a[i-2])%7;
        }
        // a[0] = a[49];
        cout<<a[n % 48]<<endl;

    }

    system("pause");
    return 0;
}