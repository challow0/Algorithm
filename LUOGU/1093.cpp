#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
    int cn;
    int sum;
    int num;
}stu[300];
bool cmp(student a,student b)
{
    if(a.sum!=b.sum)    return a.sum > b.sum;  // 比较总分
    else
    {
        if(a.cn!=b.cn)    return a.cn > b.cn;  // 比较语文成绩
        else
        {
            return a.num < b.num;  // 比较序号
        }
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    // vector<int> cn;
    // vector<int> sum;
    // for(int i = 1;i<=n;i++)
    // {
    //     int a,b,c;
    //     cin>>a>>b>>c;
    //     sum.push_back(a+b+c);
    //     cn.push_back(a);
    // }
    // for(int i = 0;i<n;i++)
    //     cout<<i+1<<" "<<sum[i]<<endl;
    for(int i = 0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        stu[i].num = i+1;
        stu[i].sum = a+b+c;
        stu[i].cn = a;
    }
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<stu[i].num<<" sum score:"<<stu[i].sum<<" chinese:"<<stu[i].cn<<endl;
    // }    
    sort(stu,stu+n,cmp);
    // cout<<endl<<endl;
    for(int i = 0;i<5;i++)
    {
        cout<<stu[i].num<<" "<<stu[i].sum<<endl;
    }     
   system("pause");

    return 0;

}