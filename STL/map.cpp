#include<map>
#include<iostream>
using namespace std;
int main()
{
    //=============================
    // 1. map ͨ���±���� ��ֵΨһ
    //==============================
    map<char, int> mp;
    mp['c'] = 20;
    mp['c'] = 30;
    cout<<mp['c']<<endl;
    //=============================
    // 2. map ͨ������������
    //==============================
    mp['m'] = 20;
    mp['r'] = 30;
    mp['a'] = 40;
    //�Զ�ʵ��������  �Լ������˴�С��������
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" ";
    cout<<endl;
    //=============================
    // 3. find() ����
    //==============================    
    map<char,int>::iterator it = mp.find('c');
    cout<<it->first<<" "<<it->second<<" ";
    cout<<endl;
    //=============================
    // 4. erase() ����
    //==============================    
    mp.erase(it); // ���� mp.erase('c')
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" "; 
    cout<<endl;   
    // ɾ������
    it = mp.find('m');
    mp.erase(it, mp.end());
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<" ";     
    system("pause");
    return 0;
}