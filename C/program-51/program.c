#include <stdio.h>

int main() {
    int arr[100],freq[100];
    int n,i;
    printf("Enter the number of elements in array \n");
    scanf("%d",&n);
    printf("Enter elements in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]>1)
        printf("%d ",i);
    }
    printf("\n");
}