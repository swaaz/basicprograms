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
            printf("\t%d",j);
        }
        printf("\n");
    }
    for(i-=1;i>0;i--)   
    {int x=0;
        for(j=i;j>0;j--)
        {
            
            printf("\t%d",x++); 
        }
        printf("\n");
    }
}