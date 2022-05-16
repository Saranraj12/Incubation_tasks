import java.util.Scanner;

public class racerar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = str.length();
        if(n%2 == 0){
            System.out.println("It won't work for even length");
            System.exit(0);
        }
        for(int i = 0;i < str.length();i++){
            for(int j = 0;j < str.length();j++){
                if(i+j == n/2 || i+j == (n/2)*(n/2) || Math.abs(i-j) == n/2){
                    System.out.print(str.charAt(j));
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
