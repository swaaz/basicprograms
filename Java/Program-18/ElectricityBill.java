//A consumer consumes n watts per hour daily for one month.
// Calculate the total energy bill of that consumer if per-unit rate is 7?
// ( In $, £, €, INR, DHR, Riyal etc.) [Take 1 month = 30 Days].
package com.dsa;

import java.util.Scanner;

public class ElectricityBill {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the watts consumed per hour");
        int watts=input.nextInt();
        int electricity=watts*24*30;//Total watts of electricity consumed in 30 days
        int cost=(electricity/1000)*7;//We divide by 1000 to convert watts to kilo-watts
        //One unit=One kilo-watt and One unit costs 7
        System.out.println("The electricity bill is "+cost);
    }
}
