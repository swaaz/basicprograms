//Polynomial Expressions
#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int c;
    int e;
    node *link;
}*P=NULL;

void create(){
    node *last,*t;
    int n;
    cout<<"Enter the NUmber of Terms : ";
    cin>>n;
    cout<<"Enter all the Terms in coeffient and exponent form : "<<endl;
    for(int i=0;i<n;i++){
        t = new node;
        cin >> t->c >> t->e;
        t->link = NULL;
        if(P==NULL)
        last = P = t;
        else{
            last->link = t;
            last = t;
        }
    }

}

double evalute(int x){
    node *t = P;
    double sum = 0.0;
    while(t){
        sum += t->c*pow(x,t->e);
        t = t->link;
    }
    return sum;
}

int main(){
    int n;
    create();
    cout<<"Enter the Value of x : ";
    cin>>n;
    double r = evalute(n);
    cout<<"The value of the polynomial expression when x = "<<n<<" is "<<r;
    
    return 0;
}
