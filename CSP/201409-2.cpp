#include<iostream>
using namespace std;
bool paint[105][105];
int main()
{
    int n;
    cin>>n;
    int x1,y1,x2,y2;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        for(int i = x1;i<x2;i++)
            for(int j = y1;j<y2;j++)
                paint[i][j] = true;
    }
    int cnt = 0;
    for(int i = 0;i<105;i++)
        for(int j = 0;j<105;j++)
            {
                if(paint[i][j])
                    cnt++;
            }
    cout<<cnt;
    system("pause");
    return 0;
}