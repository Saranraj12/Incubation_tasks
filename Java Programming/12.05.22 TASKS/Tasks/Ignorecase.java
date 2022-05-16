import java.util.*;

public class Ignorecase{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String 1 : ");
        String str1 = sc.next();
        System.out.println("Enter the String 2 : ");
        String str2 = sc.next();
        boolean value = str1.equalsIgnoreCase(str2);
        if(value){
            System.out.println("Both strings are equal");
        }
        else{
            System.out.println("Both strings are not equal");
        }
    }
}