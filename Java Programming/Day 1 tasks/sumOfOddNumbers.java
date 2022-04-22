/*
Write a program in Java to display the n terms of odd natural number and their sum.

Input number of terms is: 5

Expected Output :

The odd numbers are :                                                            

1                                                                                

3                                                                                

5                                                                                

7                                                                                

9                                                                                

The Sum of odd Natural Number up to 5 terms is: 25 */

import java.util.Scanner;

public class sumOfOddNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0; 
        System.out.println("The Odd numbers are:");
        for(int i = 1;i < n * 2;i++){
            if(i % 2 == 1){
                System.out.println(i);
                sum += i;
            }
        }
        System.out.println("The Sum of odd Natural Number up to "+n+" terms is: "+sum);
    }
}
