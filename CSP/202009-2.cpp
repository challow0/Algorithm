#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;


int n, k, t, x_l, y_l, x_r, y_r;

struct Person
{
    int num;
    bool in;
} person[25];

bool check(int a, int b)
{
    if(a >= x_l && a <= x_r && b >= y_l && b <= y_r)
        return true;
    else
    {
        return false;
    }
    
}

int main()
{
    cin >> n >> k >> t >> x_l >> y_l >> x_r >> y_r;

    for (int i = 0; i < n; i ++ )
    {
        int cnt = 0;
        for (int j = 0; j < t; j ++ )
        {
            int a, b;
            cin >> a >> b;
            if(check(a, b))
            {
                person[i].in = true;
                cnt ++;
            }
            if(!check(a, b))
            {
                cnt = 0;
            }
            if(cnt >= k)
            {
                person[i].num ++;
            }
        }
    }
    int pass = 0;
    int stay = 0;
    for (int i = 0; i < n; i ++ )
    {
        if(person[i].in)
        {
            pass ++;
        }
        if(person[i].num)
        {
            stay ++;
        }
    }

    cout << pass << endl;
    cout << stay << endl;

    getchar();
    getchar();

    return 0;

}