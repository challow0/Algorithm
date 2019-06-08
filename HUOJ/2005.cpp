#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int year,month,day;
    int leap[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int com[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int count = 0;
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
        count = 0;
        if((year % 4 == 0 &&year %100 !=0)||
            year % 400 ==0)
            {
                for(int i = 0;i < month -1;i++)
                {
                    count += leap[i];
                }
                count+=day;
                cout<<count<<endl;

            }
        else
        {
            for(int i = 0;i<month -1;i++)
            {
                count += com[i];
            }
            count+=day;
            cout<<count<<endl;

        }
        
    }
    return 0;
}