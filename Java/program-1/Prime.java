import java.util.Scanner;
public class Prime
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in); //INPUT CLASS
		int num1,num2;
		System.out.println("Please enter the first number:");
		num1=sc.nextInt(); //GET FIRST NUMBER
		System.out.println("Please enter the second number:");
		num2=sc.nextInt(); //GET LAST NUMBER
		System.out.println("Prime number:");
		for(int i=num1;i<=num2;i++)
		{
		int j;
		for(j=2;j<i;j++)
			{
			int n=i%j;
			if(n==0)
				{
				break;
				}
			}
			if(i==j)
			{
			System.out.print(" "+i);
			}
}
}


