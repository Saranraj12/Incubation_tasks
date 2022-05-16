/*
Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:

Name        Year of joining        Address

Robert            1994                64C- WallsStreat

Sam                2000                68D- WallsStreat

John                1999                26B- WallsStreat
*/

class Employee{
   String name,Address;
   int year;
  Employee(String name,int year,String Address){
	this.name = name;
	this.year = year;
	this.Address = Address;
	show();
  }
  void show(){
 	System.out.println("  "+name+"  "+year+"  "+Address);
 }

}

public class EmployeeDetails{
  public static void main(String args[]){
	System.out.println("Name       Year         Address   ");
	Employee emp1 = new Employee("Robert",1994,"64C- WallsStreat");
	Employee emp2 = new Employee("Sam",2000,"68D- WallsStreat");
	Employee emp3 = new Employee("John",1999,"26B- WallsStreat");
}
}