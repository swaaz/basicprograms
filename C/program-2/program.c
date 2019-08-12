#include<stdio.h>
int isprime(int n) /*user defined function */
{
if(n==0 || n==1)
{
    return 0;

}
for(int i=2;i<n;i++)
{
if(n%i==0) return 0;
}
return 1;
}
int main() /*main function */
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(isprime(n)==0)
    {
        printf(" not prime");
    }
    else if(isprime(n)==1)
    {
        printf("prime");
    }
    return 0;
    }
