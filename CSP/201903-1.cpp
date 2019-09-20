#include<iostream>
#include<algorithm>
using namespace std;
int a[100010];
int main()
{
    int n;
    cin>>n;
     for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int min,max = 0;
    min = a[0];
    max = a[n-1];
    double mid = 0;
    if(n % 2 ==0)   
    {
        mid = (a[n/2] + a[n/2 -1])/2.0;
        if(mid - (int)mid==0)
            cout<<max<<" "<< (int)mid<<" "<<min<<endl;  
        else
        {
            cout<<max;
            printf(" %.1lf ",mid);
            cout<<min;
        }
                  
    }
    else
    {
        mid = a[n/2];
        cout<<max<<" "<<(int)mid<<" "<<min<<endl;
    }


    
    //system("pause");
    return 0;
}