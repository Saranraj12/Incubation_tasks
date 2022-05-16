import java.util.Scanner;

public class ThrowExample{
    public static void main(String[] args) throws ArithmeticException{
        System.out.println("DIVISION");
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of a : ");
        int a = sc.nextInt();
        System.out.print("Enter the value of b : ");
        int b = sc.nextInt();
        try{
            if(b == 0)
                throw new ArithmeticException();
            int division = a/b;
            System.out.println("Division is "+division);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        
        
    }
}