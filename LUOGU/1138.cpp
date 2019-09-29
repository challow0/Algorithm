#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> ss;
    int n,k;
    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        ss.insert(temp);
    }
    
    // for(set<int>::iterator it = ss.begin();it!=ss.end();it++)
    //     cout<<*it<<endl;
    if(ss.size()>=k)
    {
        int tt = k - 1; // 从set中删去前k-1个元素
        while(tt--)
        {
            ss.erase(ss.begin());
        }
        set<int>::iterator it =  ss.begin();
        cout<<*it<<endl;
    }
    else
    {
        cout<<"NO RESULT"<<endl;
    }
    
    system("pause");
    return 0;
}