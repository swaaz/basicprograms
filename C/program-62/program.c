#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5;
	float t;
	
	printf("Enter Five Numbers:");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	t=(n1+n2+n3+n4+n5)/5;
	
	printf("The Average of %d,%d,%d,%d,%d is %f",n1,n2,n3,n4,n5,t);
	
	getch();
	
}
