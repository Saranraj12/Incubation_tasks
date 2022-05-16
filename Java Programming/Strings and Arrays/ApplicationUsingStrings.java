import java.util.*;

class Staff{

    static Staff Peoples[] = new Staff[10];
    static int count;
    static String names = "";
    static int totalCountinside;

    private int id;
    private String name,pass;
    private String designation;
    private String phoneNo;
    boolean check;
    Staff(){}
    Staff(int id,String name,String pass,String designation,String phoneNo){
        this.id = id;
        this.name = name.trim();
        this.pass = pass.trim();
        this.designation = designation.trim();
        this.phoneNo = phoneNo.trim();
        
    }
    void checkIn(){
        this.check = true;
        names = names.concat(name + ",");
        totalCountinside++;
        
    }
    void checkOut(){
        if(this.check){
            this.check = false;
            names = remove(String.valueOf(names),names.indexOf(this.name),names.indexOf(this.name) + name.length());
            totalCountinside--;
            System.out.println("checked Out Successfully".toUpperCase());
        }
        else{
            System.out.println("You need Check In before check out>>>>>".toUpperCase());
        }

    }

    String remove(String names,int st,int end){

        names = names.substring(0,st).concat(names.substring(end));

        return names;
    }

    String getName(){
        return this.name;
    }

    String getPass(){
        return this.pass;
    }

    int getId(){
        return this.id;
    }

    String getDesignation(){
        return this.designation;
    }
    String getPhone(){
        return this.phoneNo;
    }

    void setPass(String pass){
        this.pass = pass;
    }
    void setName(String name){
        this.name = name;
    }
    void setId(int id){
        this.id = id;
    }

    void setDesignation(String designation){
        this.designation = designation;
    }
    void setPhone(String phoneNo){
        this.phoneNo = phoneNo;
    }

}

public class ApplicationUsingStrings extends Staff{

    static ApplicationUsingStrings a = new ApplicationUsingStrings();
    static Scanner sc = new Scanner(System.in);

    void login(){
        System.out.println("Enter the username : ");
        String name = sc.next();
        System.out.println("Enter the password: ");
        String pass = sc.next();
        for(int i = 0;i < Staff.count;i++){
            Staff s = Staff.Peoples[i];
            if(name.equalsIgnoreCase(s.getName()) && pass.equalsIgnoreCase(s.getPass())){
                System.out.println("Logged In Successfully".toUpperCase());
                a.accessPage(s);
                
            }
        }
    }
    void accessPage(Staff s){
        int choice;
        System.out.println("[1] Check In\n[2] Check Out\n[3] check Specific Person \n[4] Total people who checked in");
        choice = sc.nextInt();
        switch(choice){
            case 1: s.checkIn();
                    System.out.println("Checked In Successfully".toUpperCase());
                    accessPage(s);
                    break;
            case 2: s.checkOut();
                    accessPage(s);
                    break;
            case 3: String name = sc.next();
                    if(Staff.names.contains(name)){
                        System.out.println("Person Inside".toLowerCase());
                    }
                    else{
                        System.out.println("Person Outside".toLowerCase());
                    }
                    accessPage(s);
                    break;
            case 4:
                    System.out.println("TOTAL NO OF PEOPLE ARE INSIDE : ");
                    System.out.println(Staff.totalCountinside);
                    accessPage(s);
        }
    }
    void frontPage(){
        System.out.println("                  ATTENDANCE PAGE                  ");

        System.out.println("[1] LOGIN\n[2] EXIT");    
        switch(sc.nextInt()){
            case 1: a.login();
                    break;
            case 2: System.exit(0);
        }
    }

    static void objectCreation(){
        Staff.Peoples[Staff.count++] = new Staff(100,"saran","password","Developer","7865757475");
        Staff.Peoples[Staff.count++] = new Staff(100,"raj","password","QA","786575575");
        Staff.Peoples[Staff.count++] = new Staff(100,"selva","password","Sales","7865747475");
        Staff.Peoples[Staff.count++] = new Staff(100,"kumar","password","DataAnalyst","78644457475");
    }

    public static void main(String[] args) {
        objectCreation();
        System.out.println(">>>>>>>>>>>>>>ATTENDANCE TRACKER>>>>>>>");
        a.frontPage();
    }
}