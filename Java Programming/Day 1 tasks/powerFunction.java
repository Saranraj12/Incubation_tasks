import java.util.Scanner;

/* Two numbers are entered through the keyboard. Write a program to find the value of one number
 raised to the power of another. (Do not use Java built-in method).*/

public class powerFunction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Base value : ");
        int base = sc.nextInt();
        System.out.println("Enter the Power value : ");
        int pow = sc.nextInt();
        System.out.println("The answer of "+base+"^"+pow+" is "+power(base,pow));
    }
    static int power(int base, int pow){
        int answer = 1;
        for(int i = 0;i < pow;i++){
            answer *= base;
        }
        return answer;
    }
}
