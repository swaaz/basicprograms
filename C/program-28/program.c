#include<stdio.h>
int main()
{
   /*initialization */
    int n,i,j;
    printf("enter the number of rows\n"); /*Input the number of rows */
    scanf("%d",&n);
    for(i=n;i>0;i--)   /*condition */
    {
        for(j=i;j>0;j--)
        {
            printf("\t*"); /*output */
        }
        printf("\n");
    }return 0;
}