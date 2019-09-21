#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vi;
    for(int i =1;i<=5;i++)
        vi.push_back(i);

    //========================
    // 1. vector�����ʽ 
    //========================
    for(int i = 0;i<5;i++)
    {
    	cout<<vi[i]<<" ";
	}
    cout<<endl;
    //========================
    // 2. vector�����ʽ itָ��vi.begin()�����ַ 
    //========================
    vector<int>::iterator it = vi.begin();
    for(int i = 0;i<5;i++)
    {
        cout<<*(it+i)<<" ";
    }
    cout<<endl;
    //========================
    // 3. vector�����ʽ ��*����ֻ����it!=vi.end().end()ָ��βԪ�ص���һ����ַ�� 
    //========================
	for(vector<int>::iterator it = vi.begin();it!=vi.end();it++)
	{
		cout<<*it<<" ";
	} 
	cout<<endl;
    //========================
    // 4. push_back(x) ��vector�������һ��Ԫ��x 
    //========================
    for(int i = 7;i<=10;i++)
    	vi.push_back(i);
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
    //========================
    // 5.pop_back() ɾ��vectorβ��Ԫ�� 
    //======================== 
    vi.pop_back();
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
	//========================
    // 6. insert() ָ��λ�ò���Ԫ�� 
    //========================
    vi.insert(vi.begin()+2,-1);
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;    
    //========================
    // 7. erase() ָ��λ��ɾ��Ԫ��  vi.begin()��Ӧ����vi[0] 
    //========================
    vi.erase(vi.begin()+3);
     for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;   
    //========================
    // 8. erase() ָ����Χɾ��Ԫ��  [first,last) 
    //========================    
    vi.erase(vi.begin()+1,vi.begin()+4);  // ɾ����vi[1],vi[2],vi[3]
     for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;	 
    //========================
    // 9. clear()�����������Ԫ�� 
    //========================    
    vi.clear();
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
   	
	system("pause");
    return 0;
}