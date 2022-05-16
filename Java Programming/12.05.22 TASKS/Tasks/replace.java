import java.util.*;

public class replace{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sc.nextLine();
        System.out.println("Enter the find word : ");
        String find = sc.next();
        System.out.println("Enter the replace word : ");
        String rep = sc.next();
        str = str.replace(find, rep);
        System.out.println(str);
    }
}