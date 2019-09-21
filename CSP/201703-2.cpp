#include<iostream>
#include<algorithm>
using namespace std;
int nn[1005];
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i = 1;i<=n;i++)
    {
        nn[i] = i;
    }
    // for(int i = 1;i<=n;i++)
    // {
    //     cout<<nn[i]<<" ";
    // }
    while(m--)
    {
        int num = 0,change = 0;
        cin>>num>>change;
        
        if(change < 0)
        {
            int temp = abs(change);
            int position = 0;
            for(int i = 1;i<=n;i++)
            {
                if(nn[i]==num)
                    position = i;
            }
            int p = position;
            for(int k = position;k>position+change;k--)
            {
                nn[k] = nn[k-1];
            }

            
            nn[position-temp] = num;
        }
        else
        {
            int position = 0;
            for(int i = 1;i<=n;i++)
            {
                if(nn[i]==num)
                    position = i;
            }

            int p = position;
            for(int k = position;k<=position + change - 1;k++)
            {
                nn[k] = nn[k+1];
            }
                
            nn[position+change] = num;
        }
        
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<nn[i];   
        if(i!=n)
            cout<<" "; 
    }
//    system("pause");
    return 0;
        
    
}
