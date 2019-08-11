#include<stdio.h>
int main()
{
    int a,i,count=0;
    printf("enter the number\n");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        { 
            count=1;
        break;
    }}
if(count) printf("not prime");
else printf("prime");
return 0;
}