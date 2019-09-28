#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //============================
    //=====1.队首队尾元素访问========
    //============================
    queue<int> q;
    for(int i = 1;i<=5;i++)
    {
        q.push(i);
    }
    cout<<q.front()<<" "<<q.back()<<endl;
    //============================
    //=====2.pop()队首元素出列========
    //============================    
    for(int i = 1;i<=3;i++)
    {
        q.pop();
    }
    cout<<q.front()<<endl;
    //============================
    //=====3.empty()判空    =======
    //============================    
    cout<<q.empty()<<endl;
    return 0;
}
