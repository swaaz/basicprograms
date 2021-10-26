// Implementing Stack using Linked List in C language

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// isEmpty
// isFull
// push
// pop
struct Node * top = NULL;

void traverseLinkedList(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is %d\n", ptr->data);
        ptr=ptr->next;
    }
}

int isEmpty(struct Node *top){
    if(top == NULL)
        return 1;
    else
        return 0;
}

int isFull(struct Node *top){
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    if (n==NULL)
        return 1;
    else
        return 0;
}

//int pop(struct Node **top){
//    if(isEmpty(top))
//        printf("Stack Underflow");
//    else{
//        struct Node *p = *top;
//        *top = (*top) -> next;
//        int m=p->data;
//        return m;
//    }
//}

int pop(struct Node *tp){
    if(isEmpty(top))
        printf("Stack Underflow");
    else{
        struct Node *p = tp;
        top = (tp) -> next;
        int m=p->data;
        free(p);
        return m;
    }
}

struct Node *push(struct Node *top, int x){
    if (isFull(top))
        return 1;
    else{
        struct Node *pr = (struct Node*)malloc(sizeof(struct Node));
        pr->data = x;
        pr->next = top;
        top = pr;
        return top;
    }
}

int main(){
    //struct Node * top = NULL;
    top = push(top, 3);
    top = push(top, 6);
    top = push(top, 11);
    top = push(top, 23);
    top = push(top, 47);
    
    traverseLinkedList(top);
    
    // int element=pop(&top);
    int element=pop(top);
    printf("Popped element is %d \n", element);
    
    traverseLinkedList(top);
    
    return 0;
    
}