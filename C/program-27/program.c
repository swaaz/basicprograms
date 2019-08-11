#include<stdio.h>
int main()
{
   int i,j,r;
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("\t*");
        }
        printf("\n");
    }//printf("%d\t%d\n",i,j);
    for(i-=1;i>0;i--)   
    {
        for(j=i;j>0;j--)
        {
            printf("\t*"); 
        }
        printf("\n");
    }
}