// C++ program to find number of bins required using
// next fit algorithm.
#include <bits/stdc++.h>
using namespace std;

// Returns number of bins required using next fit
// online algorithm
int nextFit(int weight[], int n, int c)
{
	// Initialize result (Count of bins) and remaining
	// capacity in current bin.
	int res = 0, bin_rem = c;

	// Place items one by one
	for (int i = 0; i < n; i++) {
		// If this item can't fit in current bin
		if (weight[i] > bin_rem) {
			res++; // Use a new bin
			bin_rem = c - weight[i];
		}
		else
			bin_rem -= weight[i];
	}
	return res;
}

// Driver program
int main()
{
	int weight[] = { 2, 5, 4, 7, 1, 3, 8 };
	int c = 10;
	int n = sizeof(weight) / sizeof(weight[0]);
	cout << "Number of bins required in Next Fit : "
		<< nextFit(weight, n, c);
	return 0;
}