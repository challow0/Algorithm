#include<iostream>
using namespace std;
int main()
{
    int x;
    while(cin>>x&&x)
    {
        if(x>100 || x<0)
        {
            cout<<"Score is error!"<<endl;
        }
        else
        {
            if(x>=90 && x<=100)
            cout<<"A\n";
        else if(x>=80 && x<=89)
            cout<<"B\n";
        else if(x>=70 && x<=79)
            cout<<"C\n";
        else if(x>=60 && x<=69)
            cout<<"D\n";
        else
            {
                cout<<"E\n";
            }
        }
        
            
        
        
    }
    return 0;
}
