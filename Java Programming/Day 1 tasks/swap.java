// Write a Java program to swap two variables.

import java.util.Scanner;

public class swap {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter the value of a :");
        int a =  sc.nextInt();
        System.out.print("Enter the value of b :");
        int b =  sc.nextInt();
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After Swapping the values of a and b is "+a+", "+b);
        

    }
}
