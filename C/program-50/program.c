#include<stdio.h>
int main()
{
    int rem,rev=0,temp,n;  
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;  
    while(n>0)  
    {  
        rem=n%10;  
        n=n/10;  
        rev=rem+(rev*10);
    }  
    if(temp==rev)  
        printf("number is palindrome");   
    else  
        printf("number is not palindrome");
    return 0;
}
