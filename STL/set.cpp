//*set ��һ���ڲ��Զ������Ҳ����ظ�Ԫ�ص�������
#include<iostream>
#include<set>
using namespace std;
int main()
{
    //==================================
    //    1.set������Ԫ�صķ���(�Զ�����ȥ���ظ�Ԫ��)
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
    //    2.find()����set�ж�ӦֵΪvalue�ĵ�����
    //=======================================
    for(int i = 1;i<=5;i++)
        st.insert(i);
    set<int>::iterator it = st.find(5);
    cout<<*it; 
    cout<<endl;
    //=======================================
    //    3.erase()ɾ������Ԫ�ػ��������ڵ�Ԫ��
    //=======================================  
    st.erase(st.find(3)); // �ҵ�3��ɾ����
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
        cout<<*it<<" "; 
    cout<<endl;
    st.insert(7);
    st.erase(it,st.end());  // ɾ����5~7 it �������ж���
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
        cout<<*it<<" "; 
    cout<<endl;    
    //=======================================
    //    4.size()���set�Ĵ�С  clear()�������
    //=======================================
    cout<<st.size()<<endl;     
    st.clear();
    cout<<"clear��set�Ĵ�СΪ"<<st.size();
    system("pause");
    return 0;

}