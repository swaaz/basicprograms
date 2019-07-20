#include<stdio.h>
int main()
{
   /*initialization */
    int n,i,j,count=0;
    printf("enter the number of rows\n"); /*Input the number of rows */
    scanf("%d",&n);
    for(i=1;i<=n;i++)   /*condition */
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",count++); /*output */
        }
        printf("\n");
    }return 0;
}