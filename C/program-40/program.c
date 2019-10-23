/*Write a C program to find the Ackermann of 2 Numbers*/

#include<stdio.h>
int ack(int m,int n)
{
    if(m==0)
      return n+1;
    else if(m!=0 && n==0)
      return ack(m-1,1);
    else if (m!=0 && n!=0)
      return ack(m-1,ack(m,n-1));  
}

int main()
{
    int a,b,c;
    printf("Enter 2 Elements:\n");
    scanf("%d%d",&a,&b);
    c=ack(a,b);
    printf("Ackermann(%d,%d)=%d",a,b,c);
    return 0;
}
