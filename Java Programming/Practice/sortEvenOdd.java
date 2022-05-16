import java.util.Scanner;

public class sortEvenOdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of elements : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i =0;i < n;i++){
            arr[i] = sc.nextInt();
        }
        for(int i = 0;i < n;i++){
            for(int j = i+2;j < n;j+=2){
                if(i%2==0 && arr[i]<arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];

                    arr[j] = temp;
                }
                if(i%2!=0 && arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(int k = 0;k < n;k++){
            System.out.print(arr[k]+" ");
        }
    }
}
