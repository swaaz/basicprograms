#include<stdio.h>
int main()
{
    int a,b,r=0,i;
    printf("enter the range\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0) r=r+i;
    }
printf("sum=%d\n",r);
return 0;
}