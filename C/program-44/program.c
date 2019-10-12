// C implementation of the approach 
#include <stdio.h> 

// Function to print the desired 
// Alphabet Z Pattern 
void alphabet_Z_Pattern(int N) 
{ 
	int index, side_index, size; 

	// Declaring the values of Right, 
	// Left and Diagonal values 
	int Top = 1, Bottom = 1, Diagonal = N - 1; 

	// Loop for printing the first row 
	for (index = 0; index < N; index++) 
		printf("%d ", Top++); 

	printf("\n"); 

	// Main Loop for the rows from (2 to n-1) 
	for (index = 1; index < N - 1; index++) { 

		// Spaces for the diagonals 
		for (side_index = 0; side_index < 2 * (N - index - 1); 
			side_index++) 
			printf(" "); 

		// Printing the diagonal values 
		printf("%d", Diagonal--); 

		printf("\n"); 
	} 

	// Loop for printing the last row 
	for (index = 0; index < N; index++) 
		printf("%d ", Bottom++); 
} 

// Driver Code 
int main() 
{ 
	// Size of the Pattern 
	int N = 5; 

	alphabet_Z_Pattern(N); 

	return 0; 
} 
