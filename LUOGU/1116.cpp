#include<iostream>
using namespace std;
int a[10005];
int cnt = 0;
void b_sort(int b[],int nn)
{
    for(int i = 0;i<nn;i++)
    {
        for(int j = 0;j<nn-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp = b[j+1];
                b[j+1] = b[j];
                b[j] = temp;
                cnt++;
            }
        }

    }
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    b_sort(a,n);
    // for(int i = 0;i<n;i++)
    //     cout<<a[i]<<endl;
    cout<<cnt;
    // system("pause");
    return 0;
}