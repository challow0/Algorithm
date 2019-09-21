#include<iostream>
#include<queue>
using namespace std;
queue<int> q;
int m,n,ans;
bool mark[1010];

int main()
{
    cin>>m>>n;
    for(int i = 1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(mark[x]) continue;  // 如果可以在内存中找到
        else  
        {
            if(q.size()>=m)  // 如果内存溢出
            {
                mark[q.front()]=false;  // 队列的第一个标记置为false
                q.pop();  // 弹出队列中的第一个元素
            }
            q.push(x); // 内存中没有找到就push到里面
            mark[x] = true;
            ans++;
        }
        
    }
    cout<<ans;
    return 0;
}