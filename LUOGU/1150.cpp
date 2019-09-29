#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int new_ciga = 0;
    cin>>n>>k;

    int leave = n;
    int count = n;
    while(leave >=k)
    {
        new_ciga = leave / k;
        leave = leave % k;
        leave = leave + new_ciga;
        count+=new_ciga;
    }
    cout<<count<<endl;
    //system("pause");
    return 0;
}