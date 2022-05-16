import java.util.Scanner;

public class TryCatch{
    public static void main(String[] args) throws ArithmeticException{
        Scanner sc = new Scanner(System.in);
        int n;
        try{
            System.out.println("Enter the array of elements : ");
            n = sc.nextInt();
            if(n < 0) throw new NegativeArraySizeException();
            int arr[] = new int[n];
            System.out.println("Entered array size is Positive... Length :"+arr.length);
        }
        catch(NegativeArraySizeException e){
            System.out.println("Entered array size is Negative...");
        }
        
        
    }
}