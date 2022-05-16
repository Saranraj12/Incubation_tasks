//.Program to show up the vector class and its methods.
import java.util.*;

public class VectorExample {
    public static void main(String[] args) {
        Vector<Object> obj = new Vector<>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of objects you need to add : ");
        int n = sc.nextInt();
        for(int i = 0;i < n;i++){
            obj.add(sc.next());
        }
        System.out.println(obj);
        System.out.println(obj.capacity());
        System.out.println("enter the elements to element to delete : ");
        obj.remove(sc.next());


        System.out.println("Does vector contains 1 : "+obj.contains("1"));

    }
}
