#include <iostream>
using namespace std;

int main()
{

	int i, space, rows, k=1;

	cout<<"Enter the number of rows: ";
	cin>>rows;
	
	for(i=1; i<=rows; i++) {
		for(space=i; space<rows; space++) {
			cout<<"\t";
		}
		for(j=1; j<=i; j++) {
			cout<<k<<"\t";
			k++;
		}
		cout<<"\n";
	}

	return 0;
}