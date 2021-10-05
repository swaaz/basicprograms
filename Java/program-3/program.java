//Java Program to Find Transpose of a Matrix//






import java.util.Arrays;

public class Matrix {

  // main method
  public static void main(String[] args) {

    // declare and initialize a matrix
    int a[][] = { { 1, 2 }, { 8, 9 } };

    // find row and column size
    int row = a.length;
    int column = a[0].length;

    // declare new matrix to store result
    int transpose[][] = new int[row][column];

    // Transpose of matrix
    transpose = transposeMatrix(a);

    // display all matrices
    System.out.println("A = " + Arrays.deepToString(a));
    System.out.println("Transpose = " + 
                     Arrays.deepToString(transpose));
  }

  // method to calculate the transpose of a matrix
  public static int[][] transposeMatrix(int[][] a) {

    // calculate row and column size
    int row = a.length;
    int column = a[0].length;

    // declare a matrix to store resultant
    int temp[][] = new int[row][column];

    // calculate transpose of matrix
    // outer loop for row
    for (int i = 0; i < row; i++) {
      // inner loop for column
      for (int j = 0; j < column; j++) {
        // formula
        temp[i][j] = a[j][i];
      }
    }

    // return resultant matrix
    return temp;
  }

}


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
