#include<stdio.h>
int main()
{ 
    int i,x,y,t;
printf("enter x and y\n");
scanf("%d%d",&x,&y);
t=x;
    for(i=1;i<y;i++) x*=t;
    printf("power =%d\n",x);
    return 0;
}