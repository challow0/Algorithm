#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,len,n = 0;
    char array[50];
    cin>>n;
    getchar();
    while(n--)
    {
        gets(array);
        len = strlen(array);
        int flag = 0;
        for( i = 0;i<len;i++)
        {
            if(array[i] == ' ')
                flag++;
        }
        if(flag !=0 ) cout<<"no"<<endl;
        else  if((array[0] >='a' && array[0] <='z')||
                 (array[0] >='A' && array[0] <='Z')||
                  array[0]=='_')
        {
                for(i = 1;i<len;i++)
                    {
                        if(('A' <= array[i] && array[i] <= 'Z') ||
                           ('a' <= array[i] && array[i] <= 'z') ||
                            array[i] == '_' ||
                           ( 48 <= array[i] && array[i] <= 57))
						continue;  // 合法标识符即为第一位只能为字母或者下划线，剩下的只能为字母、数字下滑线 
					    else break;
                    }
                    if(i == len)
                        cout<<"yes"<<endl;
                    else
                    {
                        
                        cout<<"no"<<endl;
                    }
                    
        }
        else
        {
            cout<<"no"<<endl;
        }
        
                
        

    }
    //system("pause");
    return 0;

}