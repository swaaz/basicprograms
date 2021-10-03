#include <stdio.h>
int main()
{

    int y,n,m,d,j;
    printf("enter the input");
    scanf("%d",&n);
    y=n/365;
    m=n%365;
    j=n/30;
    d=n%30;
    printf("year=%d",y);
    printf("months =%d",j);
    printf("days=%d",d);
}
