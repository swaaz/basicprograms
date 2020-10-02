import java.io.*;
import java.util.*;
class prg{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		int start=0;
		int end=s.length()-1;
		int flag=0;
		while(start<end)
		{
			if(s.charAt(start)!=s.charAt(end))
			{
				flag=1;
				break;
			}
			start++;
			end--;
		}
		if(flag==1)
			System.out.println("Given string is not a Palindrome");
		else
			System.out.println("Given string is a Palindrome");
	}
}