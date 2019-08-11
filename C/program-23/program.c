#include<stdio.h>
int main()
{
   int n,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n/=10;
    }
printf("number of digits =%d\n",count);
}