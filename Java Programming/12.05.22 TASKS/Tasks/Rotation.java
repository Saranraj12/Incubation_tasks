import java.util.Scanner;

public class Rotation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String 1 : ");
        String str = sc.next();
        System.out.print("Enter the String 2 : ");
        String str2 = sc.next();
        str = str.concat(str);
        if(str.contains(str2)){
            System.out.println("String 2 is a rotated string of String 1");
        }
        else{
            System.out.println("Different Strings");
        }
    }
}
