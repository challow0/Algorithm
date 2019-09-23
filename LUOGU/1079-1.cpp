#include<iostream>
using namespace std;
string k,m;
bool judge[1005];
char a[27][27]={
{"abcdefghijklmnopqrstuvwxyz"}, 
{"zabcdefghijklmnopqrstuvwxy"},
{"yzabcdefghijklmnopqrstuvwx"},
{"xyzabcdefghijklmnopqrstuvw"},
{"wxyzabcdefghijklmnopqrstuv"},
{"vwxyzabcdefghijklmnopqrstu"},
{"uvwxyzabcdefghijklmnopqrst"},
{"tuvwxyzabcdefghijklmnopqrs"},
{"stuvwxyzabcdefghijklmnopqr"},
{"rstuvwxyzabcdefghijklmnopq"},
{"qrstuvwxyzabcdefghijklmnop"},
{"pqrstuvwxyzabcdefghijklmno"},
{"opqrstuvwxyzabcdefghijklmn"},
{"nopqrstuvwxyzabcdefghijklm"},
{"mnopqrstuvwxyzabcdefghijkl"},
{"lmnopqrstuvwxyzabcdefghijk"},
{"klmnopqrstuvwxyzabcdefghij"},
{"jklmnopqrstuvwxyzabcdefghi"},
{"ijklmnopqrstuvwxyzabcdefgh"},
{"hijklmnopqrstuvwxyzabcdefg"},
{"ghijklmnopqrstuvwxyzabcdef"},
{"fghijklmnopqrstuvwxyzabcde"},
{"efghijklmnopqrstuvwxyzabcd"},
{"defghijklmnopqrstuvwxyzabc"},
{"cdefghijklmnopqrstuvwxyzab"},
{"bcdefghijklmnopqrstuvwxyza"},
};
int main()
{
    cin>>k>>m;
    int n1 = m.length(),n2 = k.length();
    for(int i = 0;i<n1;i++)
    {
        if(m[i] >='A' && m[i] <= 'Z')  // 明文大小写转化
        {
            m[i] = m[i] -'A' + 'a';
            judge[i] = 1;
        }
    }
    for(int i = 0;i<n2;i++)
    {
        if(k[i] >= 'A' && k[i] <='Z')
        {
            k[i] = k[i] - 'A' + 'a';
        }
    }
    for(int i = 0;i<n1;i++)
    {
        int s = i % n2; // 对秘钥求余
        int column = m[i] - 'a'; // 计算列数
        int row = k[s] - 'a';
        if(judge[i]==1)
        {
            cout<<char(a[row][column] - 'a' +'A');
        }
        else
        {
            cout<<a[row][column];
        }
        
    }
    //system("pause");
    return 0;


}