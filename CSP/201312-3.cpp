#include<cstdio>
#include<algorithm>
using namespace std;
int main()

{
    int n,ans = 0;
    scanf("%d",&n);
    int A[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int left = 0;left<n;left++)
    {
        int minHeight = A[left];
        for(int right = left;right<n;right++)
        {
            minHeight = min(A[right],minHeight);
            ans = max(ans,(right-left+1)*minHeight);
        }
    }
    printf("%d",ans);
    return 0;
}
