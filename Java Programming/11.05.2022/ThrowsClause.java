import java.util.InputMismatchException;
import java.util.Scanner;

public class ThrowsClause {

    static Scanner sc = new Scanner(System.in);
    static int[] getArray() throws InputMismatchException{
        System.out.println("Enter the number of elements in an array : ");
        int n =  sc.nextInt();
        int arr[] = new int[n];

        for(int i = 0;i < n;i++){
            arr[i] = sc.nextInt();
        }

        return arr;

    }

    public static void main(String[] args){
        
        try{
            int arr[] = getArray();
            System.out.println(arr.length);
        }
        catch(InputMismatchException e){
            System.out.println("Invalid Inputs...");
        }
        
        

    }
}
