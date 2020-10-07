#include <iostream>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}

int main() {
	cout<<"enter the numbers\n";
	int x,y;
	cin>>x>>y;
	cout<<"The GCD is "<<gcd(x,y);
	return 0;
}