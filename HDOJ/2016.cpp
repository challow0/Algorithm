#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    int a[105];

    while(cin>>n && n)
    {
        for(int i = 0;i<n;i++)
        {
            a[i] = 0;
        }
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        int min = 99999;
        int mark = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]<=min)
            {
                min = a[i];
                mark = i;
            }
        }
        int temp = a[mark]; // 交换
        a[mark] = a[0];
        a[0] = temp;
        for(int i = 0;i<n;i++)
        {
            if(i==0)    //注意格式
                cout<<a[i];
            else
            {
                cout<<" "<<a[i];
            }
            
        } 
        cout<<endl;
    }
    system("pause");
    return 0;
}