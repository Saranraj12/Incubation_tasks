import java.util.*;
public class spiral {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int t1 = 0,t2 = arr.length - 1,d1 = 0,d2 = arr[0].length-1;
        while(t1<=t2){
            for(int i = d1;i <= d2;i++){
                System.out.print(arr[t1][i]+" ");
            }
            t1++;
            for(int i = t1;i <= t2;i++){
                System.out.print(arr[i][d2]+" ");
            }
            d2--;
            for(int i = d2;i >= d1;i--){
                System.out.print(arr[t2][i]+" ");
            }
            t2--;
            for(int i = t2;i < t1;i--){
                System.out.print(arr[i][d1]+" ");
            }
            d1++;
            // break;

        }
    }
}
