#include<iostream>
using namespace std;
int nn[10] = {6,2,5,5,4,5,6,3,7,6};
int matches(int num)
{
    int cnt = 0;
    for(int i = num;i!=0;i/=10)
        cnt+=nn[i%10];
    if(num==0) cnt+=nn[0];
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int i = 0;i<=1000;i++)
        for(int j = 0;j<=1000;j++)
            if(matches(i) + matches(j)+matches(i+j)+4 == n)
                count++;
    cout<<count;
    system("pause");
    return 0;

}