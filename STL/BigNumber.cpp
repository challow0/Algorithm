#include<iostream>
#include<cstring>
struct bign
{
    int d[1000];
    int len;
    bign()
    {
        memset(d,0,sizeof(d));
        len = 0;
    }
};
bign change(char str[])
{
    bign a;
    a.len = strlen(str);
    for(int i = 0;i<a.len;i++)
    {
        a.d[i] = str[a.len-i-1] - '0';
    }
    return a;
}
//==============================
//======两个大整数比较大小=======
//==============================
int compare(bign a,bign b) 
{
    if(a.len > b.len) return 1;
    else 
    {
        for(int i = a.len - 1;i>=0;i--)
        {
            if(a.d[i] > b.d[i]) return 1;
            else if(a.d[i] < b.d[i]) return -1;
        }
        return 0;
    }
}
//==============================
//======两个大整数相加===========
//==============================
bign add(bign a,bign b)
{
    bign c;
    int carry = 0;
    for(int i = 0;i<a.len || i< b.len;i++)
    {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++] = temp %10;
        carry = temp/10;
    }
    if(carry!=0)
    {
        c.d[c.len++] = carry;
    }
    return c;

}
//==============================
//======两个大整数相减===========
//==============================
bign sub(bign a,bign b)
{
    bign c;
    for (int i = 0;i<a.len || i<b.len;i++)
    {
        if(a.d[i] < b.d[i])
        {
            a.d[i+1]--;
            a.d[i]+=10;
        }
        c.d[c.len++] = a.d[i] - b.d[i];
    }
    while (c.len - 1>=1 && c.d[c.len-1]==0)
    {
        /* code */

        c.len--;
    }
    return c;
    
}
//==============================
//======高精度乘法====S===========
//==============================
bign multi(bign a,int b)
{
    bign c;
    int carry = 0;
    for(int i = 0;i<a.len;i++)
    {
        int temp = a.d[i]*b + carry;
        c.d[c.len++] = temp %10;
        carry = temp /10;
    }
    while(carry!=0)
    {
        c.d[c.len++] = carry % 10;
        carry/=10;
    }
    return c;
}
void print(bign a)
{
    for(int i = a.len-1;i>=0;i--)
    {
        printf("%d",a.d[i]);
    }
}
int main()
{
    char str1[1000],str2[1000];
    scanf("%s%s",str1,str2);
    bign a = change(str1);
    bign b = change(str2);
    print(add(a,b));
    printf("\n");
    print(sub(a,b));
    getchar();
    getchar();
    return 0;
}
