#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	cout<<"Enter the number of elements "<<endl;
	int n;
	cin>>n;//Input the size of array
	int arr[n];
	int min=INT_MAX;
	int max=INT_MIN;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;++i)//Input the elements of array
	{   
	    cin>>arr[i];
	    if(arr[i]<min)//if current element is less than min number
	        min=arr[i];//min is updated
	    if(arr[i]>max)//if current element is greater than max
	        max=arr[i];//max is updated
	}
	cout<<"Minimum element is:"<<min<<endl;
	cout<<"Maximum element is:"<<max<<endl;
	return 0;
}
