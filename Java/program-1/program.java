import java.util.*;
import java.io.*;

class prg {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of array: ");
		int N=sc.nextInt();
		int arr[]=new int[N];
		System.out.println("Enter the elements in the array: ");
		for(int i=0;i<N;i++)
		{
		arr[i]=sc.nextInt();
		}
		int min=Integer.MAX_VALUE; // Assuming greatest integer to be minimum
		int max=Integer.MIN_VALUE; // Assuming lowest integer to be maximum
		for(int i=1;i<N;i++)
		{
		    if(arr[i]<min){
			    min=arr[i];
		    }    
		    if(arr[i]>max){
			    max=arr[i];
		    }
		}
		System.out.println("Minimum="+min+"\nMaximum="+max);
	}
}
