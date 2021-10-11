#include<stdio.h>
#include<stdlib.h>

struct poly
{
 int coeff;    
 int exp;
 struct poly *next;
};

void add(struct poly **p,int c,int e) // adding nodes for each order
{
 struct poly *new=*p,*temp;
 new=(struct poly *)malloc(sizeof(struct poly));
 new->coeff=c;
 new->exp=e;
 new->next=NULL;
 
 if(*p==NULL)          // if start is null
  *p=new;
 else
 {
  struct poly *temp=*p;
  while(temp->next!=NULL)     
   temp=temp->next;
  temp->next=new;
 } 

}

void display(struct poly **p)    // for displaying each node that contains different order of X
{
struct poly*temp=*p;
 while(temp!=NULL)
 { 
  printf("+%d",temp->coeff);
  if(temp->exp!=0)
  printf("x^%d",temp->exp);
   temp=temp->next;
 }
}  

int main()
{
  int co,ex;
  char ch='y';
  struct poly *start=NULL;
  printf("Enter the polynomial from highest order to lowest\n");
  while(ch=='y')
  {
     printf("Enter the coefficient of x:\n");
     scanf("%d",&co);           
     printf("enter the exponent of x:\n");
     scanf("%d",&ex);
     add(&start,co,ex);                //calling add function
     printf("\n\tDo u want to add more (y/n)");
     getchar();
     scanf("%c",&ch);

  }

  printf("\n\tThe polynomial expression is:\t");
  display(&start);       //final display
  printf("\n");
  return 0;
}
 
