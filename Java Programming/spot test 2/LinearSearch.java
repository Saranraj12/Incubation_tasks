import java.util.*;

public class LinearSearch{
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
		boolean flag = true;
		for(int i = 0;i < n;i++){
			if(search == arr[i]){
				flag = false;
				System.out.println("Element found At index "+i);
			}

		}
		if(flag)
			System.out.println("Element Not Found");

	}

}