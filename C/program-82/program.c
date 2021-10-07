/* Program to insert an element in the beginning of a linked list*/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

void createlist(int n);
struct node* insertNodeAtBeginning(int data,struct node* head);
void displaylist( );
int main()
{int n;
int data;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    createlist(n);
    
    printf("Data in the list\n");
    displaylist();
    printf("Enter the data to insert at beginning: ");
    scanf("%d",&data);
   head= insertNodeAtBeginning(data,head);
    displaylist();
    return 0;
}
    void createlist(int n)
    {
        struct node *temp,*newnode;
        int data,i;
        head=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            printf("unable to locate memory");
            
        }
        printf("Enter data of first node1: ");
        scanf("%d",&head->data);
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++)
        {
            newnode= (struct node *)malloc(sizeof(struct node));
            
        
        if(newnode==NULL)
        {
            printf("Unable to locate memory");
        }
        printf("Enter data of node %d: ",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    }
   struct node* insertNodeAtBeginning(int data,struct node* head)
    { 
        struct node *newnode;
     
     newnode=(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL)
     {
         printf("Unable to allocate memory");
     }
     else 
     {  
         newnode->data=data;
         newnode->next=head;
         head=newnode;
         printf("Data inserted successfully\n");
         return head;
     }
    
        
    }
    void displaylist()
    {
        struct node *temp;
        if(head==NULL)
        {
            printf("list is empty");
        }
        temp=head;
        while(temp!=0)
        {
            printf("data = %d\n",temp->data);
            temp=temp->next;
        }
    }

