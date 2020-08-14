#include<iostream>
#include<cstdio>
#include<unordered_map>

using namespace std;

unordered_map<int,int> A;
unordered_map<int,int> B;
int n, a, b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> a >> b;
    // scanf("%d%d%d",&n, &a, &b);
    for (int i = 0; i < a; i ++ )
    {
        int x, y;
        cin >> x >> y;
        // scanf("%d%d",&x, &y);
        A[x] = y;
    }
    long long res = 0;
    for (int i = 0; i < b ; i ++ )
    {
        int x, y;
        cin >> x >> y;
        // scanf("%d%d",&x, &y);
        if(A[x] != 0) res += A[x] * y;
    }
    cout << res << endl;
    // printf("%d\n",res);
    getchar();
    getchar();
    return 0;
}
