import java.util.Scanner;

class Student{
    static int id = 1001;
    int roll_no;
    String sname;
    String dept;
    int mark1,mark2,mark3,mark4,mark5;
    float total,average;
    String Grade;
    Scanner sc = new Scanner(System.in);
    Student(String sname,String dept){
        this.roll_no = id++;
        this.sname = sname;
        this.dept = dept;
        System.out.println("Student ID created successfully.......");
        System.out.println("Student ID : "+roll_no);
        System.out.println("Now you need to upload a marks of "+sname);
        uploadmarks();
    }
    void uploadmarks(){
        System.out.print("Enter the mark1 : ");
        mark1 =  sc.nextInt();
        System.out.print("Enter the mark2 : ");
        mark2 =  sc.nextInt();
        System.out.print("Enter the mark3 : ");
        mark3 =  sc.nextInt();
        System.out.print("Enter the mark4 : ");
        mark4 =  sc.nextInt();
        System.out.print("Enter the mark5 : ");
        mark5 =  sc.nextInt();
        System.out.print("Marks uploaded Successfully......");
        calculateMarks();
    }
    void calculateMarks(){
        total = mark1 + mark2 + mark3 + mark4 + mark5;
        average = total/5;
        if (average > 90.0){
            Grade = "O";
        }
        else if(average > 80.0){
            Grade = "A+";
        }
        else if(average > 70.0){
            Grade = "A";
        }
        else if(average > 60.0){
            Grade = "B+";
        }
        else if(average > 50.0){
            Grade = "B";
        }
        else{
            Grade = "F";
        }

    }
    void showMarks(){
        System.out.println("  "+roll_no+" "+sname+"   "+dept+"   "+mark1+"    "+mark2+"    "+mark3+"    "+mark4+"    "+mark5+"     "+total+"    "+average+"     "+Grade);        
    }
}

public class ResultManagementSystem {

    public static void main(String[] args) {
        
        int choice,n = 0;
        Student s[] = new Student[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("______________________________");
        System.out.println("  RESULT MANAGEMENT SYSTEM   ");
        System.out.println("______________________________");
        while(true){
            System.out.println("[1] Add a Student\n[2] View Marks\n[3] Exit");
            choice = sc.nextInt();
            switch(choice) {
                case 1: 
                        String name,dept;
                        System.out.println("Enter the number of students you want to add : ");
                        n = sc.nextInt();
                        sc.nextLine();
                        for(int i = 0;i < n;i++){
                            System.out.print("Enter the Name :");
                            name = sc.nextLine();
                            System.out.print("Enter the Dept :");
                            dept = sc.nextLine();
                            s[i] = new Student(name,dept);
                        }
                        break;
                case 2: 
                        System.out.println("Student Details : ");
                        System.out.println("ROLL NO    NAME      DEPT    MARK1 MARK2 MARK3 MARK4 MARK5 TOTAL AVERAGE  GRADE");
                        for(int i = 0;i < n;i++){
                            s[i].showMarks();
                        }
                case 3: System.exit(0);

                default: System.out.println("Invalid Choice");
            }
        }

    }
}