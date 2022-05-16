import java.util.InputMismatchException;
import java.util.Scanner;

public class MultipleCatchBlocks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0;i <= n;i++){
                System.out.println(arr[i]);
            }
        } catch (InputMismatchException e) {
            System.out.println(e);
        }catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }catch (NullPointerException e) {
            System.out.println(e);
        }catch (Exception e) {
            System.out.println(e);
        }
    }
}
