#include <iostream>
using namespace std;

int main() {
	cout<<"enter the number\n";
	int n;
	cin>>n;
	int temp, rem, sum = 0;
	temp = n;
	while(temp>0)
	{
	    rem = temp%10;
	    temp = temp/10;
	    sum+=rem;
	}
	cout<<"\nThe sum is "<<sum;
	return 0;
}