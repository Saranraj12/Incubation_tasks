//Write a Java program that takes a number as input and prints its multiplication table up to 10.

import java.util.*;

public class tables{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number : ");
        int n = sc.nextInt();
        for(int i  = 1;i <= 10;i++){
            System.out.println(n + " * "+i+" = " + n*i);
        }

    }
}