import java.util.Scanner;

public class Divide {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter the String : ");
       String str = sc.next();
       System.out.println("Enter the number to divide ");
       int n = sc.nextInt();
       if(str.length()%n != 0){
           System.out.println("We can't divide equally...");
           System.exit(0);
       }
        for(int j = 1;j <= str.length();j++){
            System.out.print(str.charAt(j-1));
            if(j!=0 && j%n == 0)
                System.out.println();
        }

   } 
}
