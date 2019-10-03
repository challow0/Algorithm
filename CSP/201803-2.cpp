#include<iostream>
using namespace std;
struct Ball{
    int direction;
    int position;
    int num;
}ball[105];
void boom(Ball &a)
{
    if(a.direction==1)
        a.direction=-1;
    else if(a.direction==-1)
        a.direction=1;
           
}
int main()
{
    int n,l,t;
    cin>>n>>l>>t;
    for(int i = 1;i<=n;i++)
    {
        cin>>ball[i].position;
        ball[i].direction = 1;
        ball[i].num = i;
    }
    // for(int i = 1;i<=n;i++)
    // {
    //     cout<<ball[i].num<<" "<<ball[i].direction<<" ";
    //     cout<<ball[i].position<<" "<<endl;
    // }
    // Ball test;
    // test.direction=-1;
    // boom(test);
    // cout<<"============="<<test.direction<<endl;
    while(t--)
    {
        for(int i = 1;i<=n;i++)
        {
            ball[i].position = ball[i].position+ball[i].direction;
            if(ball[i].position== l || ball[i].position==0)
                boom(ball[i]);
        }
        for(int i = 1;i<=n;i++)
        {
            for(int j = i+1;j<=n;j++)
            {
                if(ball[i].position==ball[j].position)
                {
                    boom(ball[i]);
                    boom(ball[j]);
                }
            }
        }
    // for(int i = 1;i<=n;i++)
    // {
    //     cout<<"Round::"<<t<<"  ball's position="<<ball[i].position<<" "<<endl;
    // }
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<ball[i].position<<" ";;
    }
    // getchar();
    // getchar();
    return 0;
}