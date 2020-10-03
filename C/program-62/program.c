#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
printf("Are You Eligible To Vote???\n\n");
printf("Enter Your Age: ");
	scanf("%d",&age);
	
	(age>=18)?printf("\nYou Are Eligible to Vote."):printf("\nYou Are NOT Eligible to Vote.");
	getch();

}
