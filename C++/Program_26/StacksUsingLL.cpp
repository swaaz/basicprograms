//Stacks Using Linked_Lists
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
}*top=NULL;

void push(int x){
    node *t;
    t = new node;
    if(t==NULL){
    cout<<"Stack is full[Satck overflow]"<<endl;
    }
    else{
        t->data = x;
        t->link = top;
        top = t;
    }
}

void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p = p->link;
    }
    cout<<endl;
}

int pop(){
    node *p = top;
    int x;
    if(top==NULL)
        cout<<"Stack is empty![Stack Underflow]"<<endl;
        else{
            top =  p->link;
            x = p->data;
            delete p;
        }
        return x;

}

int main(){
    
    int x;
    char c;
    while(1){
    cout<<"Choose an Operation : \n1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    cin>>c;
    switch (c)
    {
    case '1':
        cout<<"Enter the element : ";
        cin>>x;
        push(x);
        break;
    case '2':
        x=pop();
        cout<<"Poped element is "<<x<<endl;
        break;
    case '3':
        display(top);
        break;
    case '4':
        return 0;
        break;
    }
    }

    return 0;
}
