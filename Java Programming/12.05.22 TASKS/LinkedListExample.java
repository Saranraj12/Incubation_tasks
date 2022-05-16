//.Program to perform various operations on ArrayList

import java.util.*;

public class LinkedListExample {
    static Scanner sc = new Scanner(System.in);
    static LinkedList<Integer> arr = new LinkedList<>();
    public static void main(String[] args) {
        
        while(true){
            System.out.println("[1] INSERT\n[2] Remove\n[3] getLength\n[4] Display\n[5] Update");
            int choice = sc.nextInt();
            switch(choice){
                case 1: System.out.println("Enter the element to insert : ");
                        add(sc.nextInt());
                        break;
                case 2: System.out.println("Enter the element to delete : ");
                        remove(sc.nextInt());
                        break;
                case 3: System.out.println("Length is "+getLength());
                        break;
                case 4: display();
                        break;
                case 5: update();
                        break;
            }
        }
        
        
    }
    private static void update() {
        System.out.print("Enter the old value : ");
        int old = sc.nextInt();
        System.out.print("Enter the new value to replace : ");
        int newOne = sc.nextInt();
        if(arr.contains(old)){
            int ind = arr.indexOf(old);
            arr.set(ind,newOne);
            System.out.println("Updated Successfully");
            return;
        }
        System.out.println("Can't update");
        
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
