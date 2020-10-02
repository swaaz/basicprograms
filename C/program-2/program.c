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
    printf("Enter the number:");
    scanf("%d",&n);
    if(isprime(n)==0)
    {
        printf("%d is not prime number.",n);
    }
    else if(isprime(n)==1)
    {
        printf("%d is a prime number.",n);
    }
    return 0;
}
