#include<iostream>
#include<queue>

using namespace std;

struct key
{
    int num;  // 钥匙编号
    int time;  // 当前时间
    bool borrow;  // 表示取钥匙还是还钥匙，true表示取
    key(int n, int t,bool b):num(n),time(t),borrow(b){}
    bool operator<(const key&k)const //重载 < 运算符, 注意优先级队列默认以最大元素为队首元素
    {
        if(this->time != k.time)  // 以时间最早的位于队首
            return this->time > k.time;  
        else if(this->borrow != k.borrow)  // 先还钥匙再取钥匙
            return this->borrow && !k.borrow;
        else
            return this->num > k.num;  // 钥匙编号最小的位于队首
        
    }
};

priority_queue<key> pq;  //  优先级队列
int main()
{
    int n, k;
    cin>>n>>k;
    int *a = new int[n+1];  //  表示当前挂钩上钥匙顺序的数组
    for(int i = 0;i<n+1;i++)
        a[i] = i;

    for(int i = 0;i<k;i++)  // 读取数据
    {
        int a,b,c;
        cin>>a>>b>>c;
        pq.push(key(a,b,true));
        pq.push(key(a,b+c,false));
    }
    while(!pq.empty())  // 队列不空，继续循环
    {
        key k = pq.top();
        pq.pop();
        if(k.borrow)  // 如果是取钥匙
        {
            int i = 1;
            while(a[i]!=k.num)  // 查找取的钥匙编号再数组中的位置
                i++;
            a[i] = -1;  // 令该位置处钥匙编号为-1,表示该挂钩没有挂钥匙
        }
        else  //  如果是还钥匙
        {
            int i = 1;
            while(a[i]!=-1) // 查找数组中第一个没挂钥匙的挂钩
                i++;
            a[i] = k.num;  // 令该位置处钥匙编号为还的钥匙编号
        }
        
    }
    for(int i = 1;i<n+1;i++)  //  输出
        cout<<a[i]<<" ";
        return 0;
}