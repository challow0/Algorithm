#include<map>
#include<iostream>
using namespace std;
int main()
{
    //=============================
    // 1. map 通过下标访问 键值唯一
    //==============================
    map<char, int> mp;
    mp['c'] = 20;
    mp['c'] = 30;
    cout<<mp['c']<<endl;
    //=============================
    // 2. map 通过迭代器访问
    //==============================
    mp['m'] = 20;
    mp['r'] = 30;
    mp['a'] = 40;
    //自动实现了排序  对键进行了从小到大排序
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" ";
    cout<<endl;
    //=============================
    // 3. find() 查找
    //==============================    
    map<char,int>::iterator it = mp.find('c');
    cout<<it->first<<" "<<it->second<<" ";
    cout<<endl;
    //=============================
    // 4. erase() 查找
    //==============================    
    mp.erase(it); // 或者 mp.erase('c')
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" "; 
    cout<<endl;   
    // 删除区间
    it = mp.find('m');
    mp.erase(it, mp.end());
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" ";     
    system("pause");
    return 0;
}