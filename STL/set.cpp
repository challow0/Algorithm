//*set 是一个内部自动有序且不含重复元素的容器。
#include<iostream>
#include<set>
using namespace std;
int main()
{
    //==================================
    //    1.set容器内元素的访问(自动排序并去除重复元素)
    //==================================
    set<int> st;
    st.insert(3);
    st.insert(2);
    st.insert(1);
    st.insert(3);
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
        cout<<*it <<" ";
    cout<<endl;
    //=======================================
    //    2.find()返回set中对应值为value的迭代器
    //=======================================
    for(int i = 1;i<=5;i++)
        st.insert(i);
    set<int>::iterator it = st.find(5);
    cout<<*it; 
    cout<<endl;
    //=======================================
    //    3.erase()删除单个元素或者区间内的元素
    //=======================================  
    st.erase(st.find(3)); // 找到3并删除它
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
        cout<<*it<<" "; 
    cout<<endl;
    st.insert(7);
    st.erase(it,st.end());  // 删除了5~7 it 在上面有定义
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
        cout<<*it<<" "; 
    cout<<endl;    
    //=======================================
    //    4.size()获得set的大小  clear()清除所有
    //=======================================
    cout<<st.size()<<endl;     
    st.clear();
    cout<<"clear后set的大小为"<<st.size();
    system("pause");
    return 0;

}