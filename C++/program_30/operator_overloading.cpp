
/*
cpp program for operator overloading
Author: Anil Kumar
Date modified:21-10-2021
*/


#include<iostream>
using namespace std;

class complex
{
private:
    float a,b;
public:

    void set(float x, float y){
        a=x;
        b=y;
    }
   complex operator+(complex c){
       complex t;
       t.a=a+c.a;
       t.b=b+c.b;
       return t;
   }
   complex operator-(){
       complex t;
       t.a=-a;
       t.b=-b;
       return t;
   }
   
   void display(){
       cout<<a<<" "<<b<<endl;
   }
};
int main(){
    complex c1,c2,c3;
    c1.set(4.0,5.0);
    c2.set(3.0,6.0);
    c3=c1+c2;
    c3.display();

  
    complex c4=-c2;
    c4.display();
}
   
