/*
.Assign and print the roll number, phone number and address of two students 
having names "Sam" and "John" respectively by creating two objects of class 'Student'.
*/

class Student{
  static int id = 1001;
  int roll_no;
  String name;
  long phone_no;
  String Address;
  Student(String name,long phone_no,String Address){
	this.name = name;
        this.phone_no = phone_no;
        this.Address = Address;
	show();
  }
  {roll_no = id++;}
  void show(){
  	System.out.println("Name : "+name+" Roll No :"+roll_no+" Phone : "+phone_no+" Address : "+Address);
  }
}
public class AssignStudent{
  public static void main(String args[]){
	Student s1 = new Student("Sam",877846787,"64 cross street");
	Student s2 = new Student("John",877846789,"72 junior street");
	
}
}