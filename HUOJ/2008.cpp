#include<iostream>
using namespace  std;
int main()
{
    double x,y;
    int cpassive = 0, czero = 0, cpossive = 0;
    while(cin>>x && x)
    {
        cpassive = 0;
        cpossive = 0;
        czero = 0;

        for(int i = 0;i<x;i++)
        {
            cin>>y;
            if(y > 0) cpossive++;
            else if(y == 0) czero++;
            else
            {
                cpassive++;
            }
            
        }
        cout<<cpassive<<" "<<czero<<" "<<cpossive<<endl;
    }
    return 0;
}
