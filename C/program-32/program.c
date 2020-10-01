#include <stdio.h>
struct student
{
char n[100];
char u[100];
int m;
}stud[10],stud2;
int main()
{
    int n,i=0;
    printf("Enter the number of student\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the details of student - %d\n",i);
        printf("Enter the name of the student\n");
       scanf("%s",stud[i].n);
        printf("Enter USN\n");
        scanf("%s",stud[i].u);
        printf("Enter total marks\n");
        scanf("%d",&stud[i].m);
    }
    printf("|\tSl.no\t|\tName\t\t|\tUSN\t\t|\tMark\t|\n");
    for(i=1;i<=n;i++)
    {
        printf("|\t%d\t|\t%-10s\t|\t%s\t|\t%d\t|\n",i,stud[i].n,stud[i].u,stud[i].m);
    }
    return 0;
}
