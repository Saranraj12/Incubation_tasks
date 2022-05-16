import java.util.*;

public class BinarySearch{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements :  ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0;i < n;i++)
		{
			System.out.println("Enter the element :");
			arr[i] = sc.nextInt();
		}
		System.out.println("Enter the element you want to find : ");
		int search = sc.nextInt();
		int start = 0,end = n,mid;
		boolean flag = true;
		while(start < end){
			mid = start+(end-start)/2;
			if(arr[mid] == search){
				flag = false;
				System.out.println("Element Found At index "+mid);
				break;
			}
			else if(arr[mid] < search){
				start = mid + 1;
			}
			else{
				end = mid -1;
			}


		}
		if(flag){
			System.out.println("Element not Found");
		}

	}

}