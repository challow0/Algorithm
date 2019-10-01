#include<iostream>
using namespace std;
int main()
{
    int n,k;    
    cin>>n;
    while(n)
    {
        k = k*10 + n%10;
        n/=10;
    }
    cout<<k;
    return 0;

}