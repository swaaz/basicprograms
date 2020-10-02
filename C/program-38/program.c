/*
Program to find the factorial of a number using recursion
*/

#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
int f;

    if( n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
    }
    return f;
}

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Factorial of a number =% d \n",fact(n));
    return 0;
}
