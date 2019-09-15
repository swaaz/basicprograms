/*
Program to find the fibonacci sequnce using recursion
*/

#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
int f;

    if(n==0 || n==1)
    {

         return ;
    }
    else
    {
        f=fib(n-2)+fib(n-1);
    }


}

int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Fibonacci series=%d \n",fib(n));
    return 0;
}
