#include<iostream>
using namespace std;
int main()
{
    int x =  0, y =0;
    int pf = 0, lf = 0;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(x > y) // 此处应该考虑  x > y 的情况
        {
            int temp = y;
            y = x;
            x = temp;
        }
        pf = 0;
        lf = 0;
        for(int i = x;i<=y;i++)
        {
            if(i % 2 == 0)
                pf += i*i;
            else
            {
                lf += i*i*i;
            }
            
        }
        cout<<pf<<" "<<lf<<endl;
    }
    return 0;
}