#include<bits/stdc++.h>
using namespace std;
int convert(string n){
    int sum=0,s;
    int x=1;
    s = n.size();
        for (int i = s-1; i >=0; i--)
        {
            if(n[i]>='0'&&n[i]<='9'){
                sum += x*(n[i]-'0');
            }
            else if(n[i]>='A'&&n[i]<='F'){
                sum += x* (n[i]-'A'+ 10);
            }
            x *= 16;
        }
        return sum;
}
int main(){
    string n;
    cin>>n;
    int d=convert(n);
    cout<<d;
    return 0;
}
