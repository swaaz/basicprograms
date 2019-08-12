/* Arithematic operation using pointers */
#include <stdio.h>
void main()
{
int a,b;
int *x,*y;
scanf("%d%d",&a,&b);
x=&a;
y=&b;
//s=;
printf("%d\t%d",*x+*y,abs(*x-*y));

}

