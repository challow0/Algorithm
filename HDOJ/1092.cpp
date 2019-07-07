#include<iostream>
using namespace std;
int main()
{
    int x;
    while(x)
    {
        cin>>x;
        if(x == 0)
            break;
        else
        {
            int y = 0;
            for(int i = 0;i<x;i++)
            {
                int temp;
                cin>>temp;
                y += temp;
            }
            cout<<y<<endl;
        }
        
    }
    return 0;
}