//Fizz buzz program
//print all the numbers in a range of x and y but,
//if the number is multiple of 3 print Fizz instead
// and if it is multiplt of 5 print buzz intsead
#include<stdio.h>
#include<iostream>

using namespace std;
void main() {
	int x, y, i, r;
	cout << "Enter range from x to y\n";
	cin >> x >> y;
	cout << "\n";
	for (i = x; i <= y; i++) {
		else if (i % 3 == 0)
			cout << "\tFizz";
		else if (i % 5 == 0)
			cout << "\tBuzz";
		else
			cout << "\t" << i;
	}
}