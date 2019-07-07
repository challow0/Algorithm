#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count = 1;
    while(count<=t)
    {
        int n,i,j,k;

        cin>>n;
        int *a = new int[n];  // 创建动态数组a
        for(i = 0;i<n;i++)
            cin>>a[i];  //输入动态数组a的每一个值
        int maxsum = -9999999;
        int start = 0,end = 0;


        cout<<"Case "<<count<<":"<<endl;
        count++;
        for(i = 0;i<n;i++)
        {
            for(j = i;j<n;j++)
            {
                int sum = 0;
                for(k =i;k<=j;k++)
                {
                    sum+=a[k];
                }
                if(sum>maxsum)
                {   
                    maxsum = sum;
                    start = i;
                    end = j;
                }
            }
        } 

        cout<<maxsum<<" "<<start+1<<" "<<end+1<<endl;
        if(count<n)      
        cout<<endl;
        delete [] a;
    }

//    system("pause");
    return 0;
}