#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

const int INF = 0x3f3f3f3f;
int n, m;
pair<pair<int,int>, char> point[1005];
pair<pair<int,int>, int> line[25];
vector<int> valueA(1005, INF);
vector<int> valueB(1005, INF);


bool judge(pair<pair<int,int>, int> line)
{
    bool plusA = true;
    for (int i = 0; i < n ; i ++ )
    {
        int value = line.first.first 
        + line.first.second * point[i].first.first
        + line.second * point[i].first.second;
        if(point[i].second == 'A')
        {
            valueA[i] = value;
            if(value < 0) plusA = false;
        }
        else if(point[i].second == 'B')
        {
            valueB[i] = value;
        }
    }
    
    if(plusA)
    {
        for (int i = 0; i < n ; i ++)
        {
            int a = valueA[i];
            int b = valueB[i];
            if(a != INF && a < 0) return false;
            else if (b != INF && b > 0) return false; 
        }
    }
    else 
    {
        for (int i = 0; i < n ; i ++)
        {
            int a = valueA[i];
            int b = valueB[i];
            if(a != INF && a > 0) return false;
            else if (b != INF && b < 0) return false; 
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    for (int i = 0 ; i < n ; i ++ )
    {
        int a, b;
        char c;
        cin >> a >> b >>c;
        point[i].first.first = a;
        point[i].first.second =b;
        point[i].second = c;
        // cout << i << " "<<a <<' ' << b << " " << c << endl;
    }
    for (int i = 0; i < m ; i ++ )
    {
        int a, b, c;
        cin >> a >> b >>c;
        line[i].first.first = a;
        line[i].first.second = b;
        line[i].second = c;
        if(judge(line[i])) cout << "Yes" << endl;
        else cout << "No" <<endl;
    }


    getchar();
    getchar();
    return 0;
}

/*
9 3
1 1 A
1 0 A
1 -1 A
2 2 B
2 3 B
0 1 A
3 1 B
1 3 B
2 0 A
0 2 -3
-3 0 2
-3 1 1
*/