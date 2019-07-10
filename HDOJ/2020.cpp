#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    int a[100];
    while(cin>>n && n)
    {
        for(int i = 0;i<n;i++)
            cin>>a[i];
        for(int i = 0;i<n -1;i++)  // 冒泡排序直接解决
            for(int j = 0;j<n-1-i;j++)
                if(abs(a[j+1]) > abs(a[j]))  //点睛之笔
                {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                }
        for(int i = 0;i<n - 1;i++)
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    system("pause");
   return 0;
}