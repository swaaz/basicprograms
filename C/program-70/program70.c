#include<stdio.h>
  int main()
  {  
   char op;
   float number1,number2,result;
   for(int i=0; i<5;i++)
    {
    printf("\nEnter\n + for Addition \n - for Subtraction \n * for Multiplication \n / for Division"); 
    printf("\nEnter the operation you want to perform\n");
    scanf("%s",&op);
    printf("Enter two numbers\n");
    scanf("%f %f",&number1,&number2); 
    switch(op)
    {
        case'+':result=number1+number2;
                printf("Sum is %f\n",result);
                break;
        case'-':result=number1-number2;
                printf("Difference is %f\n",result);
                break;
        case'*':result=number1*number2;
                printf("Product is %f\n",result);
                break;
        case'/':if(number2==0)
                {
                printf("Division not possible\n");
                }
                else
                {
                result=number1/number2;
                printf("Quotient is %f\n",result);
                }
                break;
        default:printf("Enter proper input\n");
    }
    }
    return 0;
 }