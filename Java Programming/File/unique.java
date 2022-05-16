import java.util.*;

public class unique {
    static int index(int element,int[] arr){
        for(int i =0;i < arr.length;i++){
            if(element == arr[i]) 
                return i;
        }
        return -1;
    }

    static int lastindex(int element,int[] arr){
        for(int i =arr.length - 1;i >=0;i--){
            if(element == arr[i]) 
                return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {1,2,3,4,5,6,6};
        int count = 0,sum = 0;
        for(int i = 0;i < arr.length;i++){
            if(index(arr[i],arr) == lastindex(arr[i], arr)){
                count++;
                sum += arr[i];
            }
        }
        System.out.println("Average is "+sum/count);
    }
}
