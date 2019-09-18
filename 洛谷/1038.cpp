#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string word,text;

void convert(string &s) // 大小写转换函数
{
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i] <='Z')
            s[i]+=32;
        i++;
    }
}

int main()
{
    getline(cin,word);
    getline(cin,text);
    int lenw = word.size();
    int lent = text.size();
    convert(word);
    convert(text);
    int t = 0;
    int pos = 0;
    for(int i = 0;i<=lent-lenw;i++)
    {
        int j;
        for(j = 0;j<lenw;++j)
        {
            if(text[j+i]!=word[j]) break;
            if(i>0 && text[i-1]!=' ') break;  //不是单词的开头就结束
        }
        if(j==lenw && (text[j+i]==' '||j+i==lent)) //单词长度匹配，后面是空格或者句末 
        {
            t++;
            if(t==1) pos = i;
        }
    }
    if(t==0) cout<<-1;
    else cout<<t<<" "<<pos;
    
    
//    system("pause");
    return 0;
}