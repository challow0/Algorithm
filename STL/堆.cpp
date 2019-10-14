#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100;
int heap[maxn],n = 10;

void downadjust(int low,int high)
{
    int i = low,j = i*2;
    while(j <= high)
    {
        if(j+1 <=high && heap[j+1]>heap[j]) // 有孩子存在，且右孩子的值大于左孩子
        {
            j = j+1;
        }
        // 孩子中的最大的权值比欲调整几点i大
        if(heap[j] > heap[i])
        {
            swap(heap[j],heap[i]);
            i = j;
            j = i*2;
        }
        else // 孩子的节点权值均比与调整节点的i小
        {
            break;
        }
    }
}

void createHeap() // 建堆
{
    for(int i = n/2;i>=1;i--)
    {
        downadjust(i,n);
    }
}

void deleteTop()
{
    heap[1] = heap[n--];
    downadjust(1,n);
}

void upadjust(int low,int high)
{
    int i = high,j = i/2;
    while(j>=low)
    {
        if(heap[j] < heap[i])
        {
            swap(heap[j],heap[i]);
            i = j;
            j = i/2;
        }
        else
        {
            break;
        }
        
    }
}

void insert(int x)
{
    heap[++n]  =x;
    upadjust(1,n);
}

void heapSort() // 堆排序
{
    createHeap();
    for(int i =n;i>1;i--)
    {
        swap(heap[i],heap[1]);
        downadjust(1,i-1);
    }
}


