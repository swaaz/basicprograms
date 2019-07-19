#include<stdio.h>
int main()
{
    int n,s,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<(n/2)+1;i++)
    {
        if(n%i==0) s+=i;
    }
    if(n==s) printf("perfect number\n");
    else printf("non-perfect number\n");
    return 0;
}