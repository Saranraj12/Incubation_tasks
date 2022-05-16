//.Program to perform various operations on ArrayList

import java.util.*;

public class ArrayListExample {

    static List<Integer> arr = new ArrayList<>();
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.println("[1] Add\n[2] Remove\n[3] getLength\n[4] Display");
            int choice = sc.nextInt();
            switch(choice){
                case 1: System.out.println("Enter the element to add : ");
                        add(sc.nextInt());
                        break;
                case 2: System.out.println("Enter the element to remove : ");
                        remove(sc.nextInt());
                        break;
                case 3: System.out.println("LEngth is "+getLength());
                        break;
                case 4: display();
            }
        }
        
        
    }
    static void display(){
        System.out.println("Elements are : ");
        for(int i : arr){
            System.out.println(i);
        }
    }
    static void add(int a){
        arr.add(a);
    }
    static void remove(int a){
        if(arr.contains(a))
            arr.remove(a);
        else   
            System.out.println("Element not found!!");
    }
    static int getLength(){ return arr.size();}
    
}
