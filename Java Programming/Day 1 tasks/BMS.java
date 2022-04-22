import java.util.*;

class User{
	
        String name;
	String pass;
	double balance;
	User(String name,String pass,double balance){
		this.name = name;
		this.pass = pass;
   		this.balance = balance;
	}
}

class Bank {
 static int id;
  Scanner sc = new Scanner(System.in);
  String adminUserName = "admin";
  String adminPassword = "passWord";
  HashMap<Integer,User> map = new HashMap<Integer,User>();
  public void menu(){
	int choice;
	System.out.println("\nMenu");
	System.out.println("\n[1] Admin Login \n[2] User Login");
        choice = sc.nextInt();
        if(choice == 1){
		adminLogin();
	}
        else if(choice == 2){
		customerLogin();
	}
        else{
	  System.out.println("Enter the valid choice");
	}

}
  public void adminLogin(){
System.out.println("\nEnter the Admin name : ");
	String user = sc.next();
System.out.println("\nEnter the Admin password : ");
        String pass = sc.next();
	if(user.equalsIgnoreCase(adminUserName) && pass.equalsIgnoreCase(adminPassword)){
		System.out.println("Logged In Admin");
		admin();
	}

  }
 public void customerLogin(){
	System.out.println("\nEnter the Customer name : ");
	String user = sc.next();
	System.out.println("\nEnter the Customer password : ");
        String pass = sc.next();
	for(int i : map.keySet())
	{
		if(map.get(i).name.equalsIgnoreCase(user) && map.get(i).pass.equalsIgnoreCase(pass)){
			System.out.println("Logged In as customer");
			customerAccess(map.get(i));
		}
	}
	
}
public void customerAccess(User u){
	int choice;
	System.out.println("\nCUSTOMER LOGIN");
	System.out.println("\n[1] Balance \n[2] Deposit\n[3] Withdraw\n[4] Logout");
        choice = sc.nextInt();
        if(choice == 1){
		System.out.println(u.balance);
	}
        else if(choice == 2){
		double bal = sc.nextDouble();
		u.balance += bal;
		System.out.println("Balance : "+u.balance);
	}else if(choice == 3){
		double bal = sc.nextDouble();
		u.balance -= bal;
		System.out.println("Balance : "+u.balance);
	}
	else if(choice == 4){
		menu();
	}
        else{
	  System.out.println("Enter the valid choice");
	}
}

  public void admin(){
	int choice1; 
  	System.out.println("\n\t\t\t Banking Management Sytem ");
        System.out.println("\n[1] Add Customer\n[2] Show Customers\n[3] Logout");
	System.out.println("\nEnter your choice");
        choice1 = sc.nextInt();
        switch(choice1){
	  case 1: System.out.println("ADD A CUSTOMER");
		  addCustomer();
          	  menu();
		  break;
	  case 2: showCustomer();
                  break;
          case 3:  menu();
	}
  }

  public void addCustomer(){
	System.out.println("\nEnter the Customer name : ");
	String userName = sc.next();
        System.out.println("\nEnter the Customer passWord : ");
	String password = sc.next();
	double balance = 1000.0;
        map.put(id++,new User(userName,password,balance));
	admin();
  }
  public void showCustomer(){
    	System.out.println("CUSTOMER DETAILS");
    	System.out.println("  NAME        ");
	for(int i : map.keySet())
  		System.out.println(map.get(i).name + " " +map.get(i).pass);
	
 }
 

}

public class BMS{

  public static void main(String args[]) {
	Bank bank = new Bank();
        bank.menu();
}
}