#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vi;
    for(int i =1;i<=5;i++)
        vi.push_back(i);

    //========================
    // 1. vector输出方式 
    //========================
    for(int i = 0;i<5;i++)
    {
    	cout<<vi[i]<<" ";
	}
    cout<<endl;
    //========================
    // 2. vector输出方式 it指向vi.begin()这个地址 
    //========================
    vector<int>::iterator it = vi.begin();
    for(int i = 0;i<5;i++)
    {
        cout<<*(it+i)<<" ";
    }
    cout<<endl;
    //========================
    // 3. vector输出方式 （*条件只能用it!=vi.end().end()指向尾元素的下一个地址） 
    //========================
	for(vector<int>::iterator it = vi.begin();it!=vi.end();it++)
	{
		cout<<*it<<" ";
	} 
	cout<<endl;
    //========================
    // 4. push_back(x) 在vector后面添加一个元素x 
    //========================
    for(int i = 7;i<=10;i++)
    	vi.push_back(i);
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
    //========================
    // 5.pop_back() 删除vector尾的元素 
    //======================== 
    vi.pop_back();
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
	//========================
    // 6. insert() 指定位置插入元素 
    //========================
    vi.insert(vi.begin()+2,-1);
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;    
    //========================
    // 7. erase() 指定位置删除元素  vi.begin()对应的是vi[0] 
    //========================
    vi.erase(vi.begin()+3);
     for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;   
    //========================
    // 8. erase() 指定范围删除元素  [first,last) 
    //========================    
    vi.erase(vi.begin()+1,vi.begin()+4);  // 删除了vi[1],vi[2],vi[3]
     for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;	 
    //========================
    // 9. clear()函数清空所有元素 
    //========================    
    vi.clear();
    for(int i = 0;i<vi.size();i++)
    	cout<<vi[i]<<" ";
    cout<<endl;
   	
	system("pause");
    return 0;
}