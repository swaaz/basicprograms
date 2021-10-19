package com.dsa;

import java.util.Scanner;

public class BattingAverage {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the number of runs scored by the batter");
        int runs=input.nextInt();
        System.out.println("Enter the number of times the batter got out ");
        int out= input.nextInt();
        int batting_avg=runs/out;
        System.out.println("The batting average of the batter is "+batting_avg);
    }
}
