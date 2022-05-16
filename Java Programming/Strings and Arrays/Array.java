import java.util.*;

class Student{
	String name;
	int roll_no;
	float gpa[] = new float[4];
	int semMarks[][] = new int[4][2];
}

class Dept{
	int deptId;
	String Name;
	static List<Student> students = new ArrayList<>();

	static void print(){
		System.out.println("Student Details");
		for(Student s : students){
			System.out.println("Name : "+s.name+"Roll no: "+s.roll_no);
			System.out.println("SEM MARKS");
			for(int a[] : s.semMarks){
				for(int val : a){
					System.out.print(" "+val);
				}System.out.println();
			}
			System.out.println("GPA MARKS");
			for(float val : s.gpa){
				System.out.print(" "+val);
			}
			
		}
	}
}

public class Array{
	public static void main(String args[]){

		
		Student s = new Student();
		Dept d = new Dept();
		d.deptId = 1101;
		d.Name = "ECE";
		s.name = "Afeef";
		s.roll_no = 101;
		s.gpa[0] = 8.16f;
		s.gpa[1] = 8.04f;
		s.gpa[2] = 8.32f;
		s.gpa[3] = 10.0f;
		s.semMarks[0][0] = 89;
		s.semMarks[1][0] = 99;
		s.semMarks[2][0] = 70;
		s.semMarks[3][0] = 69;
		s.semMarks[0][1] = 98;
		s.semMarks[1][1] = 78;
		s.semMarks[2][1] = 87;
		s.semMarks[3][1] = 67;
		Dept.students.add(s);
		Student s2 = new Student();
		Dept d2 = new Dept();
		d2.deptId = 1102;
		d2.Name = "EEE";
		s2.name = "Saran";
		s2.roll_no = 102;
		s2.gpa[0] = 8.1f;
		s2.gpa[1] = 8.4f;
		s2.gpa[2] = 8.3f;
		s2.gpa[3] = 9.0f;
		s2.semMarks[0][0] = 90;
		s2.semMarks[1][0] = 89;
		s2.semMarks[2][0] = 75;
		s2.semMarks[3][0] = 99;
		s2.semMarks[0][1] = 88;
		s2.semMarks[1][1] = 78;
		s2.semMarks[2][1] = 80;
		s2.semMarks[3][1] = 60;
		Dept.students.add(s2);
		
		System.out.println("DEPARTMENT DETAILS ");
		Dept.print();
		
		
	}
}