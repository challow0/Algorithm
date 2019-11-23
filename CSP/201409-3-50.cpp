#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string x;
	int tag,n;
	cin>>x>>tag>>n;
	while(n--)
	{
		string str;
		cin>>str;
		if(tag==1)
		{
			size_t pos = str.find(x);
			if(pos!=string::npos)
			{
				cout<<str<<endl;
			}
		}
		else
		{
			string temp,tx;
			for(size_t i = 0;i<str.size();i++)
			{
				temp+=tolower(str[i]);
			}
			for(size_t i = 0;i<x.size();i++)
			{
				tx+=tolower(str[i]);
			}
			int pos = temp.find(tx);
			if(pos!=string::npos)
			{
				cout<<str<<endl;
			}
		}
		
	}
	getchar();
	getchar();
	return 0;
}