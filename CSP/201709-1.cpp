#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bottle = n /10;
    int ans = 0;
    ans+=(bottle/5)*(5+2);
    int temp = bottle % 5;
    ans +=(temp/3)*(3+1);
    ans +=temp%3;
    cout<<ans;
    // getchar();
    // getchar();
    return 0;
}
