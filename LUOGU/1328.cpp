#include<iostream>
using namespace std;
int judge[5][5]={{0,-1,1,1,-1},
                 {1,0,-1,1,-1},
                 {-1,1,0,-1,1},
                 {-1,-1,1,0,1},
                 {1,1,-1,-1,0}};
int main()
{
    int n,na,nb;
    int ra[205];
    int rb[205];
    cin>>n>>na>>nb;
    for(int i = 0;i<na;i++)
    {
        cin>>ra[i];
    }
    for(int i = 0;i<nb;i++)
    {
        cin>>rb[i];
    }
    int cnta = 0;
    int cntb = 0;
    for(int i = 0;i<n;i++)
    {
        int numa = i % na;
        int numb = i % nb;
        int num = judge[ra[numa]][rb[numb]];
        if(num==-1)
        {
            cntb++;
        }
        if(num==1)
        {
            cnta++;
        }
    }
    cout<<cnta<<" "<<cntb;
    system("pause");
    return 0;
}