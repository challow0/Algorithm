#include<iostream>
#include<algorithm>
using namespace std;
struct Traffic{
    int color;
    int len;
}traffic[100005];
int main()
{
    long long r,g,b; // 该死的数据范围，第一次没AC
    cin>>r>>g>>b;
    long long  sum = r + g + b;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>traffic[i].color>>traffic[i].len;
    }
    long long  ans = 0;
    for(int i = 0;i<n;i++)
    {
        if(traffic[i].color == 0)
        {
            ans +=traffic[i].len;
        }

        if(traffic[i].color == 1) //红灯
        {
            int temp = ans % sum;
            int light = traffic[i].len;
            if(light - temp < 0)
            {
                int leave = abs(light - temp);
                if(leave <=b) // Green
                {
                    ans += 0;
                }
                else if(leave >b ) // yellow or red
                {
                    ans += (r + g) - (leave - b);
                }
            }
            if(light - temp >= 0)
            {
                ans += (light - temp);
            }
        }
        if(traffic[i].color == 2) // 黄灯
        {
            int temp = ans % sum;
            int light = traffic[i].len;
            if(light - temp < 0)
            {
                int leave = abs(light - temp);
                if(leave <=r) // red
                {
                    ans += (r-leave);
                }
                else if(leave > r && leave <=(r + b) )  // green
                {
                    ans += 0 ;
                }
                else if(leave > (r + b))
                {
                    ans += (r + g - (leave - r -b)); // yellow
                }
            }
            if(light - temp >= 0)
            {
                ans += (r + light - temp);
            }
        }
        if(traffic[i].color == 3)
        {
            int temp = ans % sum;
            int light = traffic[i].len;
            if(light - temp < 0)
            {
                int leave = abs(light - temp);
                if(leave  < r + g)
                {
                    ans += (r +g -leave);
                }
                if(leave > r + g)
                {
                    ans +=0;
                }
            }
            if(light - temp >=0)
            {
                ans +=0;
            }
        }
    }
    cout<<ans<<endl;
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<traffic[i].color<<" "<<traffic[i].len<<endl;
    // }
    // getchar();
    // getchar();
    return 0;
}