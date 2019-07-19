#include<stdio.h>
int main()
{
    int a,r,l,b;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    int x=a;
    int y=b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    l=(x*y)/a;
    printf("GCD=%d & LCM=%d\n",a,l);
}
