#include<stdio.h>
#include<conio.h>
int factorial(int num);
void P_C(int n,int r);
int main()
{
 int n1,r1;
 clrscr();
 printf("Enter the values of n and r: ");
 scanf("%d%d",&n1,&r1);
 P_C(n1,r1);
 getch();
 return 0;
}
void P_C(int n,int r)
{
 float P,C;
 P=factorial(n)/factorial(n-r);
 C=factorial(n)/(factorial(r)*factorial(n-r));
 printf("P(%d,%d)=%0.3f\n",n,r,P);
 printf("C(%d,%d)=%0.3f",n,r,C);
 return;
}
int factorial(int num)
{
 int fact=1;
 for(;num>0;num--)
  fact*=num;
 return fact;
}

