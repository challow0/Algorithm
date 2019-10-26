#include<cstdio>
int a[20][20];
int b[5][5];
int main()
{
    for(int i = 1;i<=15;i++)
    {
        for(int j = 1;j<=10;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // printf("\n");
    // for(int i = 1;i<=15;i++)
    // {
    //     for(int j = 1;j<=10;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for(int i = 1;i<=15;i++)
    // {
    //     for(int j = 1;j<=10;j++)
    //     {
    //         printf("%d ",fact[i][j]);
    //     }
    //     printf("\n");
    // }
    for(int i = 1;i<=4;i++)
    {
        for(int j = 1;j<=4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int no = 0;
    scanf("%d",&no);
    int distance[5] = {16,16,16,16,16};
    for(int i = 1;i<=4;i++)
    {
        int button = 0; //寻找每一列的最低端
        for(int j = 1;j<=4;j++)
        {
            if(b[j][i]==1)  // 按列往下查询
            button = j;
        }
        if(button==0)
            continue;
        else
        {
            int dis = 0;
            int k = i + no-1;
            for(int l = button+1;l<=15;l++) // 从原矩阵中判断最大下降高度
            {
                if(a[l][k]!=1)
                    dis++;
                else
                    break;
            }
            distance[i] = dis;
        }
        
    }
    int min = distance[1];
    for(int i = 2;i<=4;i++)
    {
        if(distance[i]<min)
            min = distance[i];
    }
    for(int i = 1;i<=4;i++)
    {
        for(int j = 1;j<=4;j++)
        {
            a[j + min][i + no-1]+=b[j][i];
        }
    }
    for(int i = 1;i<=15;i++)
        {
            for(int j = 1;j<=10;j++)
            {
                printf("%d",a[i][j]);
                if(j!=10) printf(" ");
            }
            printf("\n");
        }    
    getchar();
    getchar();
    return 0;
}
