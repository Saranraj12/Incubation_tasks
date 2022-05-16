import java.util.*;
public class countFind {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();
        // int arr[] = new int[n];
        // for(int i = 0;i < n;i++){
        //     arr[i] = sc.nextInt();
        // }
        int n = 6,count = 0,threshold = 3;
        int arr[] = {5,8,10,13,6,2};
        for(int i =0;i < n;i++){
            count += findCount(arr[i],threshold);
        }
        System.out.println("Count is "+count);

    }
    static int findCount(int i,int t){
        int value = 0,n;
        while(i>0){
            n = i/t;
            i = (i - n*t);
            value+=n;
            t--;
        }
        return value;
    }
}
