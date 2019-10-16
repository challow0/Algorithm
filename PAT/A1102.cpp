#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn = 110;
struct node
{
    int lchild,rchild;
}Node[maxn];
bool notroot[maxn];
int n,num = 0;

void print(int id)
{
    printf("%d",id);
    num++;
    if(num<n) printf(" ");
    else printf("\n");
}

void inorder(int root)
{
    if(root==-1)
        return ;
    inorder(Node[root].lchild);
    print(root);
    inorder(Node[root].rchild);
}

void BFS(int root)
{
    queue<int> q;
    q.push(root);
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        print(now);
        if(Node[now].lchild!=-1) q.push(Node[now].lchild);
        if(Node[now].rchild!=-1) q.push(Node[now].rchild);
    }
}

void postorder(int root)
{
    if(root == -1)
        return ;
    postorder(Node[root].lchild);
    postorder(Node[root].rchild);
    swap(Node[root].lchild,Node[root].rchild);
}

int strnum(char c)
{
    if(c=='-') return -1;
    else
    {
        notroot[c - '0'] = true;
        return c-'0';
    }
    
}

int findroot()
{
    for(int i = 0;i<n;i++)
    {
        if(notroot[i]==false)
            return i;
    }
}
int main()
{
    char lchild,rchild;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%*c%c %c",&lchild,&rchild);
        Node[i].lchild = strnum(lchild);
        Node[i].rchild = strnum(rchild);
    }
    int root = findroot();
    postorder(root);
    BFS(root);
    num = 0;
    inorder(root);
    return 0;
}