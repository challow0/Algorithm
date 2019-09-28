#include<iostream>
using namespace std;

int m_normal[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int m_special[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

bool judge(int y) // 判断是否为闰年 是的话返回1；
{
    if((y%4==0 && y%100!=0)||(y%400==0))
        return 1;
    else
    {
        return 0;
    }
    
}
int main()
{
    int y ;
    cin>>y;
    int day = 0;
    cin>>day;
    int j = judge(y);
    int mm = 1;
    // cout<<j<<endl;
    if(j)
    {
        int temp1 = day;
        int i = 0;
        mm = 1;
        while((temp1-m_special[i]) > 0)
        {
            temp1 = temp1 - m_special[i];
            mm++;
            i++;
        }
        // cout<<mm<<" temp1:"<<temp1<<endl;
        cout<<mm<<endl<<temp1<<endl;
    }
    else
    {
        int temp2 = day;
        int i = 0;
        mm = 1;
        while((temp2 - m_normal[i]) > 0) // ！！！！不能等于0
        {
            temp2 = temp2 - m_normal[i];
            mm++;
            i++;
        }
        // cout<<mm<<" temp2:"<<temp2<<endl;
        cout<<mm<<endl<<temp2<<endl;
    
    }
    
    system("pause");
    return 0;
}