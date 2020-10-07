import java.io.*;
import java.util.*;
class Prg{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		int v=0;
		for(int i=0;i<s.length();i++)
		{
			if(("AEIOUaeiou").indexOf(s.charAt(i))!=-1)//checking for vowel in shorter way
			v++;	
		}
		System.out.println("Number of vowels "+v);
		System.out.println("Number of consonants "+(s.length()-v));
	}
}
