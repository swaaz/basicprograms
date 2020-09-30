#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number");
	int num;
	scanf("%d",&num);//Enter the number 
	int sum=0,dig=0;
	while(num>0)
	{
	    dig=num%10;
	    sum+=dig;
	    num/=10;
	}
	printf("The sum of digits of a number is: %d",sum);
	return 0;
}
