import java.util.Scanner;

class User
{
    private String name;
    private String pass;
    private int pin;
    private float balance;
	
    void setName(String name)
    {
    	this.name = name;
    }
    void setPass(String pass)
    {
    	this.pass = pass;
    }
    void setPin(int pin)
    {
    	this.pin = pin;
    }
    void setBalance(float balance)
    {
    	this.balance = balance;
    }
    String getName()
    {
    	return name;
    }
    String getPass()
    {
    	return pass;
    }
    int getPin()
    {
    	return pin;
    }
    float getBalance()
    {
    	return balance;
    }
}


class Machine extends User
{
	static User customers[] = new User[5];
	static int customersCount = 0;
	Scanner sc = new Scanner(System.in);
	boolean b = true;
   void pinCheck(String name,int pin){
	System.out.println("CHECKING THE PIN......... ");
		for(int i = 0;i < customersCount;i++){
			if(name.equalsIgnoreCase(customers[i].getName()) && customers[i].getPin() == pin){
				b = false;
				System.out.println("Entered Pin is correct");
				menu(customers[i]);
			}	
		}
		if(b) System.out.println("Invalid UserName or Password!!!");
   }
   void menu(User u){
	System.out.println("$ $ $ $ $ ATM $ $ $ $ $ $");
	System.out.println("[1] WithDraw");
	System.out.println("[2] Deposit");
	System.out.println("[3] Check balance");
	System.out.println("[4] Pin Change");
	System.out.println("[5] LOG OUT");
	System.out.println("[6] Exit");
	int choice = sc.nextInt();
	switch(choice){
		case 1: withdraw(u);
		menu(u);
			break;
		case 2: deposit(u);
		menu(u);
			break;
		case 3: checkbalance(u);
		menu(u);
			break;
		case 4: pinChange(u);;
			menu(u);
			break;
		case 5: ATM.home();
				break; 
		case 6: System.exit(0);
		default: System.out.println("Invalid Choice!!!");
	}
	
   }
   void withdraw(User u){
	System.out.println("# # # # #  # # # WITHDRAW # # # # # # # # # ");
		System.out.println("Enter the Withdraw Amount : ");
        float with = sc.nextFloat();
		if(with <u.getBalance()){
			u.setBalance(u.getBalance() - with);
			
		}
	else{
		System.out.println("Insufficient Balance");
		System.out.println("If u want to try again press 1");
		if(sc.nextInt() == 1){
			withdraw(u);
		}
		else{
			menu(u);
		}
	}

   }
   void deposit(User u){
	System.out.println("# # # # #  # # #  DEPOSIT PAGE # # # # # # # # # ");
	System.out.println("Enter the Deposit Amount : ");
		float with = sc.nextFloat();
	u.setBalance(u.getBalance() + with);
	checkbalance(u);
	menu(u);

   }
   void pinChange(User u){
	System.out.println("# # # # #  # # # PIN CHANGE # # # # # # # # # ");
		System.out.println("Enter the old pin :");
		int oldPin = sc.nextInt();
		if (oldPin == u.getPin()){
			System.out.println("Enter the new pin :");
			u.setPin(sc.nextInt());
		}
		else{
			System.out.println("your entered pin is wrong");
			System.out.println("press '1' for try again....");
			if(sc.nextInt() == 1){
				pinChange(u);
			}
		}
   }

   void checkbalance(User u){
	System.out.println("# # # # #  # # #  CHECK BALANCE # # # # # # # # # ");
		System.out.println("Available balance : "+u.getBalance());
   }

}


public class ATM extends Machine
{

	void addUser(){
		System.out.println("# # # # #  # # #  ADD  USER  # # # # # # # # # ");
		Machine.customers[Machine.customersCount] = new User();
		System.out.println("Enter the User name : ");
		Machine.customers[Machine.customersCount].setName(sc.next());
		System.out.println("Enter the User pass : ");
		Machine.customers[Machine.customersCount].setPass(sc.next());
		System.out.println("Enter the User PIN : ");
		Machine.customers[Machine.customersCount].setPin(sc.nextInt());
		System.out.println("Enter the User Initial Balance : ");
		Machine.customers[Machine.customersCount].setBalance(sc.nextFloat());
		Machine.customersCount++;
		System.out.println("User Addded Successfully");
		System.out.println("You can login Now!!!!");
		loginUser();
	}

	void loginUser(){
		System.out.println("# # # # #  # # #  LOGIN PAGE # # # # # # # # # ");
		System.out.println("Enter the user name : ");
		String userName = sc.next();
		System.out.println("Enter the user PIN : ");
		int PIN = sc.nextInt();
		pinCheck(userName, PIN);
		
	}

	static void home(){
		Scanner sc = new Scanner(System.in);
		ATM atm = new ATM();
		System.out.println("# # # # # # # # WELCOME TO ATM # # # # # # # #");
		System.out.println("{1} NEW USER");
		System.out.println("{2} EXISTING USER");
		System.out.println("{3} EXIT");
		System.out.println("Enter your choice : ");
		int choice = sc.nextInt();
		switch(choice){
			case 1: atm.addUser();
					break;
			case 2: atm.loginUser();
					break;
			case 3: System.exit(0);

			default:System.out.println("Invalid Choice!!!");
					home();
		}		
	}
   public static void main(String args[])
   {
	home();
   }

}