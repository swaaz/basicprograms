/* Arithematic operation using pointers */
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
int *x,*y;
scanf("%d%d",&a,&b);
x=&a;
y=&b;
//s=;
printf("%d\t%d",*x+*y,abs(*x-*y));
return 0;
}

