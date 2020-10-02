#include <stdio.h>
int main()
{

    int a[100],n,min,max;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    //Assuming the first element of the array to be minimum and maximum
    min=a[0];
    max=a[0];
    for(int i=1;i<n;++i)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("The minimum element is %d\n",min);
    printf("The maximum element is %d",max);
}