import java.util.*;

interface Details{
	public abstract void print(Contact cd);
}

class Contact implements Details{
	private String name;
	private long number;
	Contact(){}
	Contact(String name,long number){
		setName(name);
		setPhone(number);
	}
	void setName(String name){
		this.name = name;
	}
	void setPhone(Long number){
		this.number = number;
	}
	String getName(){
		return this.name;
	}	
	long getPhone(){
		return this.number;
	}
	public void print(Contact cd){
		System.out.println("------------------------------");
		System.out.println("-------"+cd.getName()+"---------------");
		System.out.println("------------------------------");
		System.out.println("-------"+cd.getPhone()+"---------------");
		System.out.println("------------------------------");
	}
	
}



public class ContactDetails extends Contact{
	static ArrayList<Contact> contacts = new ArrayList<>();
	static ArrayList<Contact> callHistory = new ArrayList<>();
	static Scanner sc = new Scanner(System.in);
	static ContactDetails cd = new ContactDetails();

	static void mainpage(){
		while(true){
			System.out.println("[1] save a contact\n[2] Call\n[3] update a number\n[4] All Contact details\n[5] Call History\n[6] Exit");
			System.out.println("Enter your choice :");
			int choice = sc.nextInt();
			
			switch(choice){
				case 1: 
					try{
						System.out.println("Enter the Contact name");
						String name = sc.next();

						System.out.println("Enter the Contact number");
						Long num = sc.nextLong();
						contacts.add(new Contact(name,num));
						System.out.println("Contact Saved Successfully");
						
					}catch(Exception e){
						System.out.println(e);
					}
					mainpage();
					break;
				case 2: try{
						System.out.println("Enter the Contact number to call....");
						long num = sc.nextLong();
						boolean flag = true;
						for(Contact c : contacts){
							if(c.getPhone() == num){
								flag = false;
								cd.print(c);
								callHistory.add(c);
								System.out.println("\n\n\n\n");
								System.out.println("Calling...\nPress = '1' to end the call\n");
								if(sc.nextInt() == 1){
									System.out.println("Call Ended");
								}
								
							}
						}
						if(flag){
							System.out.println("Number not in your contact List => Save it first");
						}
						
					}catch(Exception e){
						System.out.println(e);
					}
					mainpage();
					break;
				case 3: try{
						System.out.println("Enter the Old Contact number....");
						long num = sc.nextLong();
						boolean flag = true;
						for(Contact c : contacts){
							if(c.getPhone() == num){
								flag = false;
								System.out.println("Enter the new number to update");
								c.setPhone(sc.nextLong());
							}
						}
						if(flag){
							System.out.println("Number not in your contact List => Save it first");
						}
						
					}catch(Exception e){
						System.out.println(e);
					}
					mainpage();
					break;
				case 4: System.out.println("All Contact Details");
					for(Contact c : contacts){
						c.print(c);
					}
					mainpage();
					break;
				case 5: System.out.println("CALL HISTORY");
					for(Contact c : callHistory){
						c.print(c);
					}
					mainpage();
					break;
					
				case 6: System.exit(0);
				default: System.out.println("Invalid Choice");
					mainpage();
			}
		}
		

	}
	static void objCreation(){
		contacts.add(new Contact("saran",7449060863L));
		contacts.add(new Contact("raj",7449060864L));
		contacts.add(new Contact("selva",7449060865L));
		contacts.add(new Contact("kumar",7449060866L));

	}
	public static void main(String args[]){
		System.out.println("$ $ $ $ $ $ $ CONTACT MANAGEMENT SYSTEM $ $ $ $ $ $ $");
		objCreation();
		mainpage();

	}
}