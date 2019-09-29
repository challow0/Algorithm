#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int mark = 0;
    cin>>k;
    for(int i = 10000;i<=30000;i++)
    {
        if(i/100%k==0)
            if(i%10000/10%k==0)
                if(i%1000%k==0)
                {
                    cout<<i<<endl;
                    mark = 1;
                }
    }
    if(!mark)
    {
        cout<<"No";
    }
    // k = 12345;
    // cout<<k/100<<endl;
    // cout<<k%10000/10<<endl;
    // cout<<k%1000<<endl;
    system("pause");
    return 0;

}