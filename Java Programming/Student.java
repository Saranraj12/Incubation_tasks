import java.util.Scanner;

public class Student{
   static int id = 1;
   static int class_no = 1;
   String name,dept;
   int sid;
   static String college,location;
   static{
      college = "PEC";
      location = "Chennai";
   }
   static void changePlace(){
      location = "Mayiladuthurai";
      college = "AVC";
   }
   Student(){
      System.out.println("Student Details are added");
   }

   Student(String name,String dept){
      this.name = name;
      this.dept = dept;
      this.sid = id++;
      System.out.println("Student Details are added");
   }
   static void change(){
      class_no++;
   }
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      String sName,sDept;
      Student s[]  = new Student[10];
      for(int i = 1;i < 11;i++){
         if(i%3 == 0)
            Student.change();
         if(i%5 == 0)
            Student.changePlace();
         System.out.println("Enter the Student Name : ");
         sName = sc.nextLine();
         System.out.println("Enter the Student Dept : ");
         sDept = sc.nextLine();
         s[i-1] = new Student(sName,sDept);
      }
   }
}