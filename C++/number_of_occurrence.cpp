#include<bits/stdc++.h>

using namespace std;

class Solution{
public:

/*
 if x is present in arr[] then returns the count
 of occurrences of x, otherwise returns 0. 
*/

int count(int arr[], int n, int x) {

	int count = 0;
	for(int i=0;i<n;i++){
	if(arr[i] == x){
	count++;
}
}
return count;
}
};



int main() {
     
        int n, x;
        cout<<"Enter the size of an Array: ";
        cin >> n ;
        cout<<"Enter a number to be counted: ";
        cin>>x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout<< "number "<<x<<" counted in array for " << ans <<" times."<< "\n";
    return 0;
}