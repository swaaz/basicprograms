#include<iostream>

using namespace std;

void printSeries(int num1,int num2){
    int count = 1;
    int i = 1;
    while(count < num1+1){
        int num = (3 * i) + 2;
        i++;

        if((num % num2) == 0){

        }else{
            cout<<num<<endl;
            count++;
        }
    }
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    printSeries(num1,num2);
    return 0;
}
