#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int n,m;
    int a[100][100];
    int max = 0,row = 0,column = 0;
    while(cin>>m>>n)
    {
    max = 0; // 一定注意每一次循环的时候初值max要赋初值
    for(int i = 1;i<=m;i++)
    {
       for(int j = 1;j<=n;j++)
            {
                cin>>a[i][j];
                if(abs(a[i][j]) > abs(max))
                {
                    max = a[i][j];
                    row = i;
                    column = j;
                }
            }
    }
 
    cout<<row<<" "<<column<<" "<<max<<endl;
    }
    //system("pause");
    return 0;
}