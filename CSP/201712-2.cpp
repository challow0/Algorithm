#include<queue>
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    queue<int> q;
    for(int i = 1;i<=n;i++)
    {
        q.push(i);
    }
    int num = 1;
    while(q.size()>1)
    {
        int t = q.front();
        q.pop();
        if(!(num % k == 0 || num %10 ==k))
        {
            q.push(t);
        }
        num++;
    }

    cout<<q.front();
    // system("pause");
    return 0;
}