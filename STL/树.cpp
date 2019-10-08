#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

const int maxn = 10000;

struct node{
    int data;
    vector<int> child;
}Node[maxn];

int index = -1;
int newNode(int v)
{
    Node[index].data = v;
    Node[index].child.clear();
    return index++;
}

void preorder(int root)  // 树的先根遍历
{
    printf("%d ",Node[root].data);
    for(int i = 0;i<Node[root].child.size();i++)
    {
        preorder(Node[root].child[i]);
    }
}

void layerorder(int root)
{
    queue<int> q;
    q.push(root);
    while(!q.empty())
    {
        int front = q.front();
        printf("%d ",Node[front].data);
        q.pop();
        for(int i = 0;i<Node[front].child.size();i++)
        {
            q.push(Node[front].child[i]);
        }
    }
}

struct newnode
{
    int layer;
    int data;
    vector<int> child;
}newnode[maxn];

void newlayerorder(int root)
{
    queue<int>q;
    q.push(root);
    newnode[root].layer = 0;
    while(!q.empty())
    {
        int front = q.front();
        printf("%d ",newnode[front].data);
        q.pop();
        for(int i = 0;i<newnode[front].child.size();i++)
        {
            int child = newnode[front].child[i];
            newnode[child].layer = newnode[front].layer +1;
            q.push(child);
        }
    }
}





