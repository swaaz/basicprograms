#include <stdio.h>
int main()
{

    int y,n,m,d,j;
    printf("enter the input");
    scanf("%d",&n);
    y=n/365;
    m=n%365;
    j=m/30;
    d=j%30;
    printf("year=%d",y);
    printf("months =%d",j);
    printf("days=%d",d);
}
