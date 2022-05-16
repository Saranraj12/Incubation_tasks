import java.util.*;

public class lexicographical{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String 1 : ");
        String str1 = sc.next();
        System.out.println("Enter the String 2 : ");
        String str2 = sc.next();
        int value = str1.compareTo(str2);
        if(value == 0){
            System.out.println("Both strings are equal");
        }
        else{
            System.out.println("Both strings are not equal");
        }
    }
}