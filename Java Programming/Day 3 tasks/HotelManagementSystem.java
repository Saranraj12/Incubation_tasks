import java.util.ArrayList;
import java.util.Scanner;

class Room{
   
   static Scanner sc = new Scanner(System.in);
   static int rooms_available = 10,roomsBooked;
   String person_name,type;
   int room_id;
   int price;
   static ArrayList<Integer> booked = new ArrayList<>();
   

   static void bookRoom(String Username,Room room[]){
	
	 
//	System.out.println(" "+Username);
  	room[roomsBooked] = new Room();
  	room[roomsBooked].room_id = (int)(Math.random()*9+1);
	room[roomsBooked].person_name = Username;
	System.out.println("AC or NONAC : ");
	room[roomsBooked].type = sc.next();
	int cost = room[roomsBooked].type.equalsIgnoreCase("AC") ? 1000 : 500;
	System.out.println("How Many days : ");
	room[roomsBooked].price = cost * sc.nextInt();
	System.out.println("Total Cost : $"+room[roomsBooked].price);
	booked.add(room[roomsBooked].room_id);
	System.out.println("Note Down your Room Number : "+room[roomsBooked].room_id);
	System.out.println("Congrats "+Username+" Room Booked Successfully!!!");
	rooms_available--;
	roomsBooked++;
	
   }
   static void cancelRoom(Room room[]){
  	System.out.println("Enter the room id");
	int id= sc.nextInt();
	boolean flag = true;
	for(int i = 0;i < roomsBooked;i++){
	   if(room[i]!=null && room[i].room_id == id){
		room[i] =  null;
		flag = false;
		booked.remove(id);
		System.out.println("Cancelled Successfully");
	   }
	}
	if(flag){
		System.out.println("Room ID not available");
	}
	else {
		rooms_available++;
	}
   }
   static void availableRooms() {
	   System.out.println("Rooms Available : "+rooms_available);
	   
	   	for(int i = 1;i <= 10;i++) {
	   		if(!booked.contains(i)) {
	   			System.out.println("Room "+i+" Available");
	   		}
	   		else {
	   			System.out.println("Room "+i+" Not Available");
	   		}
	   	}
   }
   static void showRooms(Room room[]){
   	if(rooms_available == 5){
	     System.out.println("Rooms are not yet booked");
	     return;
	}
	for(int i = 0;i < roomsBooked;i++){
	  if(room[i] != null)
	  	System.out.println("Room ID: "+ room[i].room_id+" booked by "+room[i].person_name);
	}
	System.out.println("Available Rooms :" + rooms_available);
	System.out.println("Filled Rooms : "+ (10 - rooms_available));
   }
}

class Person extends Room{
   String name,pass;
   static int id = 0;
   int Age,personCount = id++;
   char gender;

   void modify(){
	System.out.println("Which one you want to modify : ");
	System.out.println("[1] NAME \n[2] AGE\n[3] GENDER");
	int choice = sc.nextInt();
	switch(choice){
	   case 1: System.out.println("Enter the name you want to change :");
		   this.name = sc.next();
		   break;
	   case 2: System.out.println("Enter the Age you want to change :");
		   this.Age = sc.nextInt();
		   break;
	   case 3: System.out.println("Enter the gender you want to change :");
		   this.gender = sc.next().charAt(0);
		   break;
	   default: System.out.println("Invalid Choice!!!");
	}
   }
   
   @Override
		public String toString() {
			return "name=" + name + ", Age=" + Age + ", gender=" + gender;
		}
}



public class HotelManagementSystem extends Person{
  static Scanner sc = new Scanner(System.in);
  static String adminName = "Admin";
  static String adminPass = "Password";
  static Room room[] = new Room[5];
  static Person persons[] = new Person[5];
  static int personsCount = 0;
   public static void main(String args[]){
		login();
		
   }
   static void printDetails() {
		boolean flag = true;
		   for(int i = 0;i < persons.length;i++) {
			   if(persons[i]!=null) {
				   flag = false;
				  System.out.println(persons[i].toString());
			   }
		   }
		   if(flag) System.out.println("Yet to add the persons");
	   }
   

static void login() {
	System.out.println("# # # # # # # # WELCOME TO LOGIN PAGE # # # # # # # # #");
	System.out.println("[1] Admin Login\n[2] User Login\n[3] Exit");
	int choice = sc.nextInt();
	switch(choice) {
	case 1: System.out.println("# # # # # # ADMIN LOGIN # # # # # # #");
			System.out.println("Enter the Admin's user Name : ");
			String username = sc.next();
			System.out.println("Enter the Admin's user Password : ");
			String password = sc.next();
			if(username.equalsIgnoreCase(adminName) && password.equalsIgnoreCase(adminPass)) {
				System.out.println("Admin Logged In Successfully.....");
				adminAccess();
			}
	case 2: loginorSignup();
			break;
	case 3: System.exit(0);
	}
	
	
}

static void userLogin() {
	System.out.println("Enter the user name : ");
	String user = sc.next();
	System.out.println("Enter the user password : ");
	String pass = sc.next();
	
	for(int i = 0;i < Person.id;i++) {
		if(persons[i]!=null && persons[i].name.equalsIgnoreCase(user) && persons[i].pass.equalsIgnoreCase(pass)) {
			System.out.println("Successfully Logged In");
			userAccess(persons[i]);
		}
	}
}

static void loginorSignup() {
	System.out.println("[1] Signup\n[2] Login");
	int choice = sc.nextInt();
	if(choice == 1) {
		int curr = personsCount;
		persons[curr] = new Person();
		System.out.println("Enter your name :");
		persons[curr].name = sc.next();
		System.out.println("Enter your pass :");
		persons[curr].pass = sc.next();
		System.out.println("Enter your Age :");
		persons[curr].Age = sc.nextInt();
		System.out.println("Enter your gender :");
		persons[curr].gender = sc.next().charAt(0);
		personsCount++;
		System.out.println("You Account created Successfully\nyou can use now");
		userAccess(persons[curr]);
	}
	else if(choice == 2){
		userLogin();
	}
	else {
		System.out.println("Invalid Choice!!!");
		loginorSignup();
	}
	
}
static void userAccess(Person p) {
	System.out.println("[1] Book Room\n[2] Cancel Room\n[3] View ROOMS\n[4] Log-out");
	int choice = sc.nextInt();
	switch(choice) {
	case 1:Room.bookRoom(p.name, room);
	userAccess(p);
			break;
	case 2:Room.cancelRoom(room);
	userAccess(p);
			break;
	case 3:Room.showRooms(room);
	userAccess(p);
			break;
	case 4: login();
	default:System.out.println("Invalid Choice!!!");
			userAccess(p);
	}
}

static void adminAccess() {
	System.out.println(" # # # # # # WELCOME ADMIN # # # # # # ");
	System.out.println("[1] ADD ROOMS\n[2] BOOK ROOMS\n[3] PERSON DETAILS\n[4] CHECK AVAILABLE ROOMS\n[5] LOGOUT");
	int choice = sc.nextInt();
	switch(choice) {
	case 1: System.out.println("Already We have "+Room.rooms_available+" rooms");
			System.out.println("How many rooms we need to add more : ");
			Room.rooms_available = Room.rooms_available + sc.nextInt();
			System.out.println("Now total Rooms : "+Room.rooms_available);
			adminAccess();
			break;
	case 2: Room.bookRoom("Admin", room);
			adminAccess();
			break;
	case 3: printDetails();
			adminAccess();
			break;
	case 4: Room.availableRooms();
			Room.showRooms(room);
			adminAccess();
			break;
	case 5: login();
			break;
	default: System.out.println("Invalid try Again!!!");
			 adminAccess();
	}
}
}