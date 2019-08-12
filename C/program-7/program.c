#include <stdio.h>
int main()
{
    int y;
    printf("enter year");
    scanf("%d",&y);
if(y%400 ==0 || (y%4==0 && y%100!=0)) printf("leap year");
else printf("not a leap year");
}

