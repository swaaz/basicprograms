package com.dsa;

import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String reversed_string="";
        System.out.println("Enter the string");
        String string= input.next();
        for(int i=string.length()-1;i>=0;i--){
            reversed_string = reversed_string + string.charAt(i);
        }
        System.out.println("The original string is "+string);
        System.out.println("The reversed string is "+reversed_string);
    }
}