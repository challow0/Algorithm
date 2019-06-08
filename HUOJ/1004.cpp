#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char color[1000][1000];
int num[1000];

int main()
{
    int n,i,j,k = 0;
    
    while(cin>>n && n>0)
    {
        for(i = 0;i<n;i++)
        scanf("%s",&color[i]);  // 输入每一个颜色的值

        int max = -1;
        int sum = 0;
        for(i = 0;i<n;i++)
        {
            sum = 0;
            for(j = 0;j<n;j++)
            {
                if((strcmp(color[i],color[j]))==0)  //因为strcmp需要char*类型的所以定义为了二维数组
                {
                    sum++;
                }
                if(sum > max)
                {
                    max = sum;
                    k = i;
                }
            }
        }
        printf("%s\n",&color[k]);
    }
  //  system("pause");
    return 0;
}