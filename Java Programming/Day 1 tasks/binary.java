// Write a Java program to add two binary numbers.

import java.util.Scanner;

public class binary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        do{
            System.out.println("Enter the first binary number : ");
            a = sc.nextInt();
        }while(!validateBinary(a));
        do{
            System.out.println("Enter the second binary number : ");
            b = sc.nextInt();
        }while(!validateBinary(b));
        add(a,b);
    }
    static int binaryToDecimal(int n){
        int temp = n,sum = 0,i=0,rem;
        while(temp != 0){
            rem = temp%10;
            sum = sum + rem * ((int)(Math.pow(2, i)));
            temp/=10;
            i++;
        }
        return sum;
    }
    static void decimelToBinary(int n){

        int temp = n,i = 0;
        int bin[] = new int[10]; 
        while(temp!=0){
            bin[i++] = temp%2;
            temp/=2;
        }
        System.out.println("The Sum is : ");
        for(int k = i - 1;k >=0;k--)
            System.out.print(bin[k]);
        System.out.println();
        
    }

    private static void add(int a, int b) {
        decimelToBinary(binaryToDecimal(a) + binaryToDecimal(b));
    }

    static boolean validateBinary(int num){
        int temp = num,rem;
        while(temp!= 0){
            rem = temp%10;
            temp/=10;
            if(rem != 0 && rem != 1){
                System.out.println("Enter the valid input.....");
                return false;
            }
                
        }

        return true;
    }
}
