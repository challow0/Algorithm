#include<cstdio>
#include<queue>
using namespace std;
struct node
{
    int data;
    int layer;
    node* lchild;
    node* rchild;
};
node* root = NULL;

node* newNode(int v)
{
    node* Node = new node;
    Node->data = v;
    Node->lchild = Node->rchild = NULL;
    return Node;
}
// search and change function
void search(node* root, int x,int newdata)
{
    if(root==NULL)
    {
        return ;//Empty Tree
    }
    if(root->data == x)
    {
        root->data = newdata;
    }
    search(root->lchild,x,newdata);
    search(root->rchild,x,newdata);
}

//insert function

// void insert(node* &root , int x)
// {
//     if(root==NULL)
//     {
//         root = newNode(x);
//         return ;
//     }

// }
// //层序遍历
// void LayerOrder(node* root)
// {
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         node* now = q.front();
//         printf("%d",now->data);
//         if(now->lchild!=NULL) q.push(now->lchild);
//         if(now->rchild!=NULL) q.push(now->rchild);
//     }

// }

void LayerOrder(node* root)
{
    queue<node*> q;
    root->layer = 1;
    q.push(root);
    while(!q.empty())
    {
        node* now = q.front();
        q.pop();
        printf("%d ",now->layer);
        if(now->lchild!=NULL)
        {
            now->lchild->layer = now->layer + 1;
            q.push(now->lchild);
        }
        if(now->rchild!=NULL)
        {
            now->rchild->layer = now->layer + 1;
            q.push(now->rchild); 
        }
    }
}

int in[7] = {1,2,3,4,5,6,7};  // 中序
int pre[7] = {4, 1, 3, 2, 6 ,5, 7}; // 先序

node* create(int preL,int preR,int inL,int inR) // 数组下标先序中序建树
{
    if(preL > preR)
    {
        return NULL;
    }
    node* root = new node;
    root->data = pre[preL];
    int k;
    for(k = inL;k<=inR;k++)
    {
        if(in[k] == pre[preL])
        {
            break;
        }
    }
    int numLeft = k - inL; // k所有节点的root

    root->lchild =  create(preL + 1,preL + numLeft,inL,k-1);
    root->rchild =  create(preL + numLeft + 1,preR,k+1,inR);
    return root;
}
void postorder(node* t) // 后序打印输出
{
    if(t == NULL)
    {
        return ;
    }
    postorder(t->lchild);
    postorder(t->rchild);
    printf("%d\n",t->data);
    
}
int main()
{
    node* ttt = create(0,6,0,6);
    postorder(ttt); // 
    getchar();
    getchar();
    return 0;
}
