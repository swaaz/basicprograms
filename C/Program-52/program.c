#include <stdio.h>

int main() {
	int n;//number of elements of array;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int x;
	printf("\nEnter the key to search");
	scanf("%d",&x);
	int l=0,r=n-1,m=0;
	   int f=1;
	while (l <= r) 
	{ 
         m = l + (r - l) / 2; 
     
        // Check if x is present at mid 
        if (arr[m] == x) 
            {
              printf("\nElement found");
              f=0;
              break;
            } 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
    if(f==1)
    printf("\nElement not found");
	return 0;
}
