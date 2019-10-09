#include<cstdio>
const int maxn = 100;

struct node
{
    int data;
    node* lchild;
    node* rchild;
}Node[maxn];

void search(node* root,int x)
{
    if(root==NULL)
    {
        printf("search failed!\n");
        return ;
    }
    if(x == root->data)
    {
        printf("%d\n",root->data);
    }
    else if(x > root->data)
    {
        search(root->rchild,x);
    }
    else
    {
        search(root->lchild,x);
    }
}

node* newNode(int v)
{
    node* Node = new node;
    Node->data = v;
    Node->lchild = Node->rchild = NULL;
    return Node;
}

void insert (node* &root,int x)
{
    if(root == NULL)
    {
        root = newNode(x);
        return ;
    }
    if(x == root->data)
    {
        return;
    }
    else if(x < root->data)
    {
        insert(root->lchild,x);
    }
    else
    {
        insert(root->rchild,x);
    }
    
}
node* Create(int data[],int n)
{
    node* root = NULL;
    for(int i = 0;i<n;i++)
        {
            insert(root,data[i]);
        }
    return root;
}

void preorder(node* t)
{
    if(t==NULL)
        return ;
    printf("%d\n",t->data);
    preorder(t->lchild);
    preorder(t->rchild);
}

node* findMax(node* root)
{
    while(root->rchild!=NULL)
    {
        root = root->rchild;
    }
    return root;

}

node* findMin(node* root)
{
    while(root->lchild!=NULL)
    {
        root = root->lchild;
    }
    return root;
}

void deleteNode(node* &root,int x)
{
    if(root->data) return;
    if(root->data == x)
    {
        if(root->lchild == NULL && root->rchild == NULL)
            root = NULL;
        else if(root->lchild!=NULL)
        {
        node* pre = findMax(root->lchild);
        root->data = pre->data;
        deleteNode(root->lchild,pre->data);
        }
        else
        {
        node* next = findMin(root->rchild);
        root->data = next->data;
        deleteNode(root->rchild,next->data);
        }
    }
    else if(root->data > x)
    {
        deleteNode(root->lchild,x);
    }
    else
    {
        deleteNode(root->rchild,x);
    }
    
    
    
}

int main()
{
    int a[7] = {5,3,7,4,2,8,6};
    int b[7] = {7,4,5,8,2,6,3};
    node* at = Create(a,7);
    node* bt = Create(b,7);
    preorder(at);
    preorder(bt);
    getchar();
    getchar();
    return 0;
}
