#include<stdio.h>
int main()
{
    int c=0,a,temp;  
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;  
    while(n>0)  
    {  
    a=n%10;  
    n=n/10;  
    c=c+(a*a*a);  
    }  
    if(temp==c)  
    printf("armstrong number\n");
    else  
    printf("Not armstrong number\n");
    return 0;
}
