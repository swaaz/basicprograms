package com.dsa;

import java.util.Scanner;

public class CSAOfCylinder {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter radius and height of cylinder");
        float radius=input.nextFloat();
        float height=input.nextFloat();
        float CSA=2*3.14f*radius*height;
        System.out.println("Curved surface area of cylinder is "+CSA+" square units");
    }
}