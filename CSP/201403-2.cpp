#include<iostream>
using namespace std;

const int N = 10;
struct{
    int winno;
    int x1,y1,x2,y2;
}win[N]; // 模拟窗口

struct{
    int x,y;
}point[N]; // 模拟输入的点

int order[N];
int main()
{
    int n,m;

    cin>>n>>m;
    
    for(int i = 0;i<n;i++)
    {
        win[i].winno = i+1;
    
        cin>>win[i].x1>>win[i].y1>>win[i].x2>>win[i].y2;
    }
    for(int i = 0;i<m;i++)
        cin>>point[i].x>>point[i].y;
    for(int i = 0;i<n;i++)
        order[i] = n-i-1;  // 排序第一的是最后一个输入的

    int winno,temp;
    for(int i = 0;i<m;i++)
    {
        winno = -1;
        for(int j = 0;j<n;j++)  // 按顺序便利窗口
        {
            if(win[order[j]].x1<=point[i].x && point[i].x<=win[order[j]].x2 &&
                win[order[j]].y1<=point[i].y && point[i].y<=win[order[j]].y2)
            {

            winno = win[order[j]].winno;
            // 将点击到的窗口顺序排到第一个
            temp = order[j];
            for(int k = j;k>0;k--)
                order[k] = order[k-1];
            order[0] = temp;
            break;
            }
        }
    
    if(winno==-1)
        cout<<"IGNORED"<<endl;
    else
        cout<<winno<<endl;
    }
    system("pause");
    return 0;
}