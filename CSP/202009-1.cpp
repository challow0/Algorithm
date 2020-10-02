#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int n, X, Y;

struct checkvirus
{
    int num;
    int x, y;
    int dist;
} point[305];


int distance(int x, int y, int m, int n)
{
    return (x - m) * (x - m) + (y - n) * (y - n);
}

void check()
{
    for (int i = 0; i < n; i ++ )
    {
        point[i].dist = distance(X, Y, point[i].x, point[i].y);
    }
}

bool cmp(checkvirus a, checkvirus b)
{
    if(a.dist == b.dist) return a.num < b.num;
    else
    {
        return a.dist < b.dist;
    }
    
}

int main()
{
    cin >> n >> X >> Y;

    for (int i = 0; i < n ; i ++ )
    {
        int a, b;
        cin >> a >> b;
        point[i].num = i;
        point[i].x = a;
        point[i].y = b;
    }
    check();

    sort(point, point + n, cmp);

    cout << point[0].num + 1 << endl;
    cout << point[1].num + 1<< endl;
    cout << point[2].num + 1<< endl;

    getchar();
    getchar();

    return 0;
}