#include<stdio.h>
int main()
{
    int n,s,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum+=r;
        s/=10;
    }
    if(n==sum) printf("Neon number\n");
    else printf("not neon number");
    return 0;
}