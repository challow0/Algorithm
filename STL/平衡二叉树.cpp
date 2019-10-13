#include<cstdio>
#include<algorithm>
using namespace std;
struct node
{
    int v, height;
    node * lchild, * rchild;
};
node* newNode(int v)
{
    node* Node = new node;
    Node->v = v;
    Node->height = 1;
    Node->lchild = Node->rchild = NULL;
    return Node;
}

int getHeight(node* root)
{
    if(root == NULL) return 0;
    return root->height;
}

int getBalanceFactor(node* root)
{
    return getHeight(root->lchild) - getHeight(root->rchild);
}

void updateHeight(node* root)
{
    root->height = max(getHeight(root->lchild),getHeight(root->rchild)) +1;
}


