#include<cstdio>
struct person{
    char name[20];
    char gender;
    char ID[20];
    int grade;
}M,F,temp;
int main()
{
    M.grade = 101;
    F.grade = -1;
    int n;
    char gender;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%s %c %s %d",&temp.name,&gender,&temp.ID,&temp.grade);
        if(gender=='M' && temp.grade<M.grade)
        {   
            M = temp;
        }
        else if(gender=='F' && temp.grade>F.grade)
        {
            F = temp;
        }
    }
    if(F.grade==-1)
    {
        printf("Absent\n");

    }
    else
    {
        printf("%s %s\n",F.name,F.ID);
    }
    if(M.grade==101)
    {
        printf("Absent\n");
    }
    else
    {
        printf("%s %s\n",M.name,M.ID);
    }
    if(F.grade==-1||M.grade==101)
    {
        printf("NA\n");
    }
    else
    {
        printf("%d\n",F.grade-M.grade);
    }
    // getchar();
    // getchar();
    return 0; 
}