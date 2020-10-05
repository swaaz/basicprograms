#include<stdio.h>
void main()
{
	double r,area,circum;//Initializing varaibles
	
	printf("Enter Radius:");
	scanf("%lf",&r);//getting radius.
	
	if(r<10)//Checks if radius is less than 10
	{
		circum = 2*3.14*r;//Circumference of a circle is 2*pi*r.
		
		printf("The Circumference of the Circle with the given radius is: %lf",circum);//printing Circumference
	}
	else//If r is NOT less that 10....i.e. r is greater than 10
	{
	area = 3.14*r*r;//Area of a circle is pi*r*r.
	
	printf("The Area of the Circle with the given radius is: %lf",area);//printing The area	
	}
	getch();
	
}
