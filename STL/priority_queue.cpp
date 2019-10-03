#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(3);
    q.push(4);
    q.push(1);
    printf("%d\n",q.top());
    q.pop();
    printf("%d\n",q.top());
    //=================================
    //=====数字的小的优先级大===========
    //=================================
    priority_queue<int, vector<int>,greater<int> > qq;
    qq.push(3);
    qq.push(4);
    qq.push(1);
    printf("%d\n",qq.top());
    getchar();
    getchar();
    return 0;
}