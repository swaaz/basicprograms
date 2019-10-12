
// C program for printing 
// the hollow triangle pattern 
  
#include <stdio.h> 
  
// Function for printing pattern 
void pattern(int N) 
{ 
    int i, j, k = 0, space = 1, rows = N; 
  
    // For printing stars 
    for (i = rows; i >= 1; i--) { 
        for (j = 1; j <= i; j++) { 
            printf("*"); 
        } 
        if (i != rows) { 
            // for printing space 
            for (k = 1; k <= space; k++) { 
                printf(" "); 
            } 
  
            // increment by 2 
            space = space + 2; 
        } 
        for (j = i; j >= 1; j--) { 
            if (j != rows) 
                printf("*"); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
} 
  
// Driver code 
int main() 
{ 
  
    // Get N 
    int N = 6; 
  
    // Print the pattern 
    pattern(N); 
  
    return 0; 
} 
