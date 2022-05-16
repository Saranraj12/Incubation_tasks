import java.util.*;

public class ThrowArrayOutOfBounds {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {100,90,70,60,50};
        try {
            System.out.println("Enter the index number to get the value : ");
            int n = sc.nextInt();
            if(n >= arr.length)
                throw new ArrayIndexOutOfBoundsException();
            System.out.println("Value is "+arr[n]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("You are trying to access outside the array...");
        }
    }
}
