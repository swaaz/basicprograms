#include<iostream>
using namespace std;
int main(){
    int n,k=0;
    cout<<"Check the no is prime or not"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            k++;
        }
    }
    if(k==2){
        cout<<"No. is Prime";
    }
    else{
        cout<<"No. is not prime";
    }
    
    return 0;
}