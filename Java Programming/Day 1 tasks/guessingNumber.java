import java.util.Scanner;

public class guessingNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int guessingNumber = (int)(Math.random() * 100) + 1;
        int number;
        System.out.println("Guess the Number Between  (1 - 100)");
        do {
            System.out.print("Enter the number : ");
            number = sc.nextInt();
            if(guessingNumber == number){
                System.out.println("Wow!! That's Right  You have Won...");
            }
            else if(guessingNumber < number){
                System.out.println("Too High Try Again!!");
            }
            else {
                System.out.println("Too Low Try Again!!");
            }
                
        }while(guessingNumber != number);
    }
}
