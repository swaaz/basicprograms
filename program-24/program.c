#include<stdio.h>
int main()
{
   int i,j,r,c;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}