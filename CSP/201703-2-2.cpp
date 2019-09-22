#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n,m,a,b,c;
    cin>>n;
    cin>>m;
    for(int i = 1;i<=n;i++)
    {
        v.push_back(i);
    }
    for(int i = 0;i<m;i++)
    {
        cin>>a>>b;
        for(int j = 0;j<n;j++)
        {
            if(v[j]==a)
            {
                c = j;
                break;
            }

        }
        v.erase(v.begin() + c);
        c +=b;
        v.insert(v.begin()+ c,a);
    }
    for(int i = 0;i<n;i++)
        cout<<v[i]<<" ";
    system("pause");
    return 0;
}