import java.util.Scanner;

public class charOccur{

    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // String str = sc.next();
        String str = "aaaabbcc";
        int count = 1,i;
        for(i = 1;i <= str.length();i++){
            if(i!=str.length() && str.charAt(i-1) == str.charAt(i)){
                count++;
            }
            else{
                System.out.print(str.charAt(i-1) +""+ count);
                count = 1;
            }
        }
    }
}