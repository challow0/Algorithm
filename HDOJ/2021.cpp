#include<iostream>

using namespace std;
int main()
{
    int a[100],b[100] = {0};
    int c[6] = {0};
    int n = 0;
    while(cin>>n && n)
    {
        for(int i = 0;i<n;i++)
            cin>>a[i];
        for(int i = 0;i<n;i++)
        {
                c[0] = a[i]/100;
                c[1] = (a[i]%100) / 50;
                c[2] = (a[i]%50) / 10;
                c[3] = (a[i]%10) / 5;
                c[4] = (a[i]%5) / 2;
                c[5] = (a[i]%5%2);  // 这个地方要特别注意！！！！
                b[i] = c[0] + c[1] + c[2] + c[3] + c[4] +c[5];
        }
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum += b[i];
        }
        cout<<sum<<endl;

    }
    system("pause");
    return 0;
}