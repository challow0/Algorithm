#include<iostream>
#include<string>
#include<map>
using namespace std;
const int maxn = 2010; // 总人数
const int INF = 1000000000; // 无穷大

map<int,string> intToString;  // 编号--》姓名
map<string,int> stringToInt; // 姓名--》编号
map<string,int> Gang; // head --》 人数

int G[maxn][maxn] = {0},weight[maxn] = {0}; // 邻接矩阵G、点权weight
int n,k,numPerson = 0; // 边数n、下限k、总人数numPerson
bool vis[maxn] ={false};   // 标记是否访问

// DFS函数访问单个连通块，nowVisit为当前访问的编号
// head为头目，numMember为成员编号，totalValue为连通块的总边权
void DFS(int nowVisit, int &head,int &numMember,int &totalValue)  
{
    numMember++; // 成员人数++
    vis[nowVisit] = true; // 标记nowVisit已访问 
    if(weight[nowVisit] > weight[head])
    {
        head = nowVisit; // 当前访问节点的点权大于头目的点权，则更新头目
    }
    for(int i = 0;i<numPerson;i++) //枚举所有人
    {
        if(G[nowVisit][i] > 0)// 如果从nowVisit能到达1
        {
            totalValue +=G[nowVisit][i];
            G[nowVisit][i] = G[i][nowVisit] = 0; // 删除这条边。防止回头
            if(vis[i]==false) // 如果i未被访问，则递归访问i
            {
                DFS(i,head,numMember,totalValue);
            }
        }
    }
}
// DFSTrave函数遍历整个图，获取每个连通块的信息
void DFSTrave()
{
    for(int i = 0;i<numPerson;i++)
    {
        if(vis[i]==false)
        {
            int head = i,numMember = 0,totalValue = 0;
            DFS(i,head,numMember,totalValue);
            if(numMember>2&&totalValue >k)
            {
                Gang[intToString[head]] = numMember;
            }
        }
    }
}

// change函数返回姓名str对应的编号
int change(string str)
{
    if(stringToInt.find(str)!=stringToInt.end())
    {
        return stringToInt[str]; // 返回编号
    }
    else
    {
        stringToInt[str] = numPerson; // str的编号为numPerson
        intToString[numPerson] = str; // numPerson对应str
        return numPerson++;           // 总人数加1
    }
    
}

int main()
{
    int w;
    string str1,str2;
    cin>>n>>k;
    for(int i = 0;i<n;i++)
    {
        cin>>str1>>str2>>w;
        int id1 = change(str1);
        int id2 = change(str2);
        weight[id1]+=w;
        weight[id2]+=w;
        G[id1][id2]+=w;
        G[id2][id1]+=w;

    }
    DFSTrave();
    cout<<Gang.size()<<endl;
    map<string,int>::iterator it;
    for(it = Gang.begin();it!=Gang.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    getchar();
    getchar();
    return 0;

}