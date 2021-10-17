package com.dsa;

import java.util.Scanner;

public class Discount {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the original price of product");
        int original_price=input.nextInt();
        System.out.println("Enter the discount percentage");
        float discount=input.nextInt();
        float discount_price=original_price*(discount/100);
        float final_price=original_price-discount_price;
        System.out.println("The discount price is: "+discount_price);
        System.out.println("The final price after discount is: "+final_price);
    }
}
