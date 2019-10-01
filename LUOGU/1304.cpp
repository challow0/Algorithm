#include<iostream>
using namespace std;
bool isprime(int num)
{
    int nn = num;
    for(int i = 2;i*i<=nn;i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
void num(int n)
{
    cout<<n<<"=";
    int i;
    for(i = 2;i<n;i++)
    {
        if(isprime(i)==1 && isprime(n-i)==1)
        {
            cout<<i<<"+"<<n-i<<endl;
            break;
        }
    }
}
int main()
{
    int i,n;
    cin>>n;
    for(int i = 4;i<=n;i+=2)
    {
        num(i);
    }
   // system("pause");
    return 0;
}