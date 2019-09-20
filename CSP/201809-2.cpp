#include<iostream>
using namespace std;
int h[2005][5];
int w[2005][5];
int main()
{
    int n = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>h[i][1]>>h[i][2];
    }
    for(int i = 1;i<=n;i++)
    {
        cin>>w[i][1]>>w[i][2];
    }
    int time = 0;
    for(int i = 1;i<=n;i++)
    {
        // cout<<"HNo."<<i<<" "<<h[i][1]<<" "<<h[i][2]<<endl;
        // cout<<"WNo."<<i<<" "<<w[i][1]<<" "<<w[i][2]<<endl;
        int a = h[i][1],b = h[i][2];
        for(int j = 1;j<=n;j++)
        {   
            int c = w[j][1],d = w[j][2];
            if(c>=a && c<=b)
            {
                if(d> b)
                {
                    time+= b-c;
                    c = b;
                }
                else
                {
                    time+= d-c;
                }
                
            }
            else if(a >c && a<d)
            {
                if(d<= b)
                {
                    time+= d-a;
                    d = a;
                }
                else
                {
                    time+=b-a;
                }
                
            }
        }
        
        
    }
    cout<<time;
    system("pause");
    return 0;

}