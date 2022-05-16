/*
*Create a class named 'Student' with String variable 'name' and integer variable 'roll_no'. 
*Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/
import java.util.*;

class Student{
   int roll_no;
   String name;
   Student(String name, int roll_no){
	this.name = name;
	this.roll_no = roll_no;
   }
   void show(){
    	System.out.println("Student Name :"+name+"\nRoll No :"+roll_no);
   }
}

public class Assign{
   public static void main(String args[]){
	Student s = new Student("John",2);
	s.show();
   }
}