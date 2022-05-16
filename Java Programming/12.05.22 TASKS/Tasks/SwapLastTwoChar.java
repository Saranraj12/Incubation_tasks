import java.util.Scanner;

import javax.xml.transform.sax.SAXTransformerFactory;

public class SwapLastTwoChar{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sc.next();
        char arr[] = str.toCharArray();
        int n = str.length()-1;
        char temp = arr[n];
        arr[n] = arr[n - 1];
        arr[n- 1] = temp;
        System.out.println(new String(arr));


    }
}