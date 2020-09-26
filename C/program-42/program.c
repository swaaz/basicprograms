/*C Program to print Floyd’s triangle*/
// Without using a temporary variable and with only one loop 
#include<stdio.h> 
void floyd(n){ 
    int i,j=1; 
    for (i=1;i<=(n*(n+1))/2;i++){ 
        printf("%d ",i); 
        if(i==(j*(j+1))/2){ 
            printf("\n"); 
            j++; 
        } 
    } 
} 
  
int main(){ 
    floyd(6); 
} 
