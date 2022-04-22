/* Write a Java program that reads a floating-point number and prints "zero" if the number is zero. Otherwise, print "positive" or "negative". 
Add "small" if the absolute value of the number is less than 1, or "large" if it exceeds 1,000,000.*/

import java.util.Scanner;

public class floatingPointNum {
    public static void main(String[] args) {
        System.out.println("Enter the floating point number :");
        Scanner sc = new Scanner(System.in);
        float f = sc.nextFloat();
        if ( f == 0)
            System.out.println("zero");
        else if (f > 0)
            System.out.println("positive");
        else {
            System.out.println("negative");
        }
        if(f < 1.0){
            System.out.println("small");
        if(f > 1000000.0)
            System.out.println("Large");
        }

    }
}