// Implementing stack using Array in C language

// -------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

// ---- operations to perform :
// isEmpty-
// isFull-
// push-
// pop-
// peek-
// stackTop-
// stackBottom-

// -------------------------------------

int isEmpty(struct Stack * ptr){
    if(ptr->top == -1)
        return 1;
    else
        return 0;
}
// -------------------------------------

int isFull(struct Stack * ptr){
    if(ptr->top == ptr->size-1)
    //if(ptr->top == ptr->arr[ptr->top])
        return 1;
    else
        return 0;
}
// -------------------------------------

void push(struct Stack *ptr, int data){
    if(isFull(ptr)){
        printf("Stack Overflow for data %d \n", data);
    }
    else{
        ptr->top+=1;
        ptr->arr[ptr->top] = data;
    }
}
// -------------------------------------

int pop(struct Stack *ptr){
    if(isEmpty(ptr))
        printf("Stack Underflow");
    else{
        int p = ptr->arr[ptr->top];
        ptr->top-=1;
        return p;
    }
}
// -------------------------------------

int peek(struct Stack *ptr, int i){
    int arrInd = ptr->top-i+1;
    if(arrInd <= -1)
        printf("Not valid position.");
    else
        return ptr->arr[arrInd];
    return -1;
}
// -------------------------------------

int stackTop(struct Stack *ptr){
    return ptr->arr[ptr->top];
}
// -------------------------------------

int stackBottom(struct Stack *ptr){
    return ptr->arr[0];
}
// -------------------------------------

int main(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    
    printf("Before pushing: Full %d\n",isFull(s));
    printf("Before pushing: Empty %d\n",isEmpty(s));
    
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);
    push(s, 11);
    push(s, 12);
    push(s, 13);
    
    printf("After pushing: Full %d\n",isFull(s));
    printf("After pushing: Empty %d\n",isEmpty(s));
    
    printf("\n----------------------\n");
    printf("Peeking through stack\n");
    for(int j=1;j<s->top+2;j++){
        printf("The value at position %d is %d\n", j, peek(s, j));
    }
    
    printf("\nPopped %d from stack", pop(s));
    printf("\nPopped %d from stack", pop(s));
    printf("\nPopped %d from stack", pop(s));
    printf("\nPopped %d from stack\n\n", pop(s));
    
    printf("After popping: Full %d\n",isFull(s));
    printf("After popping: Empty %d\n",isEmpty(s));
    
    printf("\n----------------------\n");
    printf("Peeking through stack\n");
    for(int j=1;j<s->top+2;j++){
        printf("The value at position %d is %d\n", j, peek(s, j));
    }
    
    printf("\nStack at top now is %d", stackTop(s));
    printf("\nStack at bottom now is %d", stackBottom(s));
    
    return 0;
}




