#include <stdio.h>
#include <math.h>

int main()
{   
   
    system("color 4");
    printf("\nSamz math>\t");
    
    
	float a,d,p=1,i;
	char operator;
	
	scanf("%f", &a);
	scanf("%c", &operator);
	scanf("%f", &d);
	
	for(i=1;i<=d;i++)
	   p=p*a;
	
    switch(operator)
    { 
     
	 case '+':
	  printf("=%.2f\n\n", a+d);
	  break;
	  
	 case '-':
	   printf("=%.2f\n\n", a-d);
	   break;
	   
	 case '*':
	   printf("=%.2f\n\n", a*d);
	   break;
	 
	 case '/':
	   printf("=%.2f\n\n", a/d); 
	   break;
	   
	 case '^':
	   printf("=%.2f\n\n", p);
	   break;
   
	 
    }  
	 

	main();
	getch();
	
}
