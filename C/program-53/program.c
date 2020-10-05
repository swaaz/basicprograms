#include<stdio.h>
int main()
{
    int a[100],n,el,i;  
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched");
    scanf("%d",&el);
    for(i=0;i<n;++i)
    {  
        if(el==a[i])
            break;
    }  
    if(i==n)  
        printf("element not found in the array");   
    else  
        printf("element found at %d",i+1);
    return 0;
}
