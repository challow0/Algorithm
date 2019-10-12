#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
const int maxn = 50;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};

int pre[maxn];
int in[maxn];
int post[maxn];
int n;

node* create(int prel,int prer,int inl,int inr)
{
    if(prel > prer)
    {
        return NULL;
    }
    node* root = new node;
    root->data = pre[prel];
    int k;
    for(k = inl;k<=inr;k++)
    {
        if(in[k]==pre[prel])
        {
            break;
        }
    }
    int numleft = k - inl;
    root->lchild = create(prel+1,prel+numleft,inl,k-1);
    root->rchild = create(prel+numleft+1,prer,k+1,inr);
    return root;
}

int num = 0;
void postorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d",root->data);
    num++;
    if(num < n) printf(" ");
}
int main()
{
    scanf("%d",&n);
    char str[5];
    stack<int> st;
    int x,preindex = 0,inindex = 0;
    for(int i = 0;i<2*n;i++)
    {
        scanf("%s",str);

    if(strcmp(str,"Push")==0)
    {
        scanf("%d",&x);
        pre[preindex++] = x;
        st.push(x);
    }
    else
    {
        in[inindex++] = st.top();
        st.pop();
    }
    }
    node* root = create(0,n-1,0,n-1);
    postorder(root);
    return 0;
}
