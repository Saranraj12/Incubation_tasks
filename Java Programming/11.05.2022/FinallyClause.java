import java.util.InputMismatchException;
import java.util.Scanner;

public class FinallyClause {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            System.out.print("Enter the number to print pattern : ");
            int n = sc.nextInt();
            for(int i = 0;i < n;i++){
                for(int j = 0;j < i+1;j++){
                    System.out.print("*");
                }System.out.println();
            }
        }
        catch(InputMismatchException e){
            System.out.println("Entered number is invalid...");
        }
        finally{
            System.out.println("Program ends successfully..");
        }
    }
}