/*
Program to find the GCD of a number using recursion
*/

#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
int f;

    if( b!=0)
    {

         return gcd(b,a%b);;
    }
    else
    {
       return;
    }


}

int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("GCD of %d & %d is = %d \n",a,b,gcd(a,b));
    return 0;
}
