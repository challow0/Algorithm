#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
bool judge(int num)
{

    if(num==0||num==1)
        return false;
    if(num==2)  
        return true;
    int nn = sqrt(num);
    for(int i = 2;i<nn;i++)
    {
        if(num % i ==0)
            return false;
    }    
    return true;
}

int main()
{   
    string ss;
    int count[30];
    bool v[30];
    for(int i = 0;i<26;i++)
        count[i] = 0;
    memset(v,true,sizeof(v));
    cin>>ss;
    // cout<<'c' - 'a'<<endl;
    for(int i = 0;i<ss.length();i++)
    {
        count[(ss[i]-'a')]++;
        v[ss[i]-'a'] = false;
    }    
    
    // for(int i = 0;i<26;i++)
    //     cout<<char(i+97)<<" : "<<count[i]<<endl;
    
    int max = -99999,min = 99999;
    for(int i = 0;i<26;i++)
    {
        if(count[i]>max && v[i]==false)
            max = count[i];
        if(count[i]<min && v[i]==false)
            min = count[i];
    }
    int ccc = max - min;
    if(judge(ccc)==true)
    {
        cout<<"Lucky Word"<<endl;
        cout<<ccc<<endl;
    }
    else
    {
        cout<<"No Answer"<<endl;
        cout<<"0"<<endl;  // ================输出0==============
    }
    
    // cout<<"min:"<<min<<"max:"<<max;
    // cout<<endl;

    system("pause");
    return 0;
}