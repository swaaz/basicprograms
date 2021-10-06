//Queues Using Linked List 
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *link;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    node *t;
    t = new node;
    if(t==NULL)
    cout<<"Queue is Full"<<endl;
    else{
        t->data = x;
        t->link = NULL;
    }
    if(front==NULL){
        front = rear = t;
    }
    else{
        rear->link=t;
        rear = t;
    }
}

int dequeue(){
    node *p;
    int x = -1;
    if(front==NULL)
    cout<<"Queue is Empty!"<<endl;
    else{
        front = p->link;
        x = p->data;
        delete p;
    }
    return x;
}

void display(){
    node *p=front;
    while(p){
        cout<<p->data<<" ";
        p = p->link;
    }
    cout<<endl;
}

int main(){
    int x;
    char c;
    while(1){
    cout<<"Choose an Operation : \n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit"<<endl;
    cin>>c;
    switch (c)
    {
    case '1':
        cout<<"Enter the element : ";
        cin>>x;
        enqueue(x);
        break;
    case '2':
        x=dequeue();
        if(x!=-1)
        cout<<"Deleted element is "<<x<<endl;
        break;
    case '3':
        display();
        break;
    case '4':
        return 0;
        break;
    default:
        cout<<"Enter a valid option :("<<endl;
        break;
    }
    }

    return 0;
}
