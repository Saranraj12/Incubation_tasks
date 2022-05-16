import java.util.Scanner;

public class EqualLengths{

    static void firstHalf(int n,String str){
        for(int i = n;i < str.length();i++){
            System.out.print(str.charAt(i));
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String 1 : ");
        String str1 = sc.next();
        System.out.println("Enter the String 2 : ");
        String str2 = sc.next();
        int m = str1.length(),n = str2.length();
        if(m>n){
            firstHalf(m-n, str1);
            firstHalf(0, str2);
        }
        else{
            firstHalf(0, str1);
            firstHalf(n-m, str2);
        }

    }
}