/* .Allocate rank for the university 
        students according to their scores by using Maps, Packages.*/
import Tasks.sortRank;

import java.util.*;

public class MapsAndPackages{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter the number of Students : ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0;i < n;i++){
                System.out.print("Enter the "+(i+1)+" Student mark : ");
                arr[i] = sc.nextInt();
            }
            sortRank sr = new sortRank();
            System.out.println(sr.sort(arr));
            
        } catch (Exception e) {
            System.out.println(e);
        }
        
        
    }
}