#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> coin;
    cin>>n;
    cout<<n<<endl;
    for(int i = 0;i<n;i++)
        coin.push_back(0);
    for(int i = 0;i<n;i++)
    {

        for(int j = 0;j<n;j++)
        {
            if(j!=i)
            {
                coin[j] = 1-coin[j];
            }
        }
        for(int j = 0;j<n;j++)
            cout<<coin[j];
        cout<<endl;
    }
    system("pause");
    return 0;
}