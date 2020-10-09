#include<iostream>

using namespace std ;

void takeInput(int a[], int n){
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
}

void swap_k(int a[], int n, int k){

    int i , count = n ;
    for(i=1 ; i<=n ,  count >= 1 ; i++ , count--){
   
        if(k == i || k == count){
            swap(a[k],a[count]);
        }
   
    }
   
    for(i=1;i<=n;i++){
        cout<<a[i]<<" " ;
    }
}

int main()
{
    
    int n;
    cout<<"Enter size of an Array:";
    cin>>n ;
    
    int k; 
    cout<<"Enter Kth element to swap:";
    cin>>k ;
    
    int a[1000];
    takeInput(a,n);

    swap_k(a,n,k);
    cout<<"\n";
    
    return 0;
}
