/*
customers.add(new Customer("cust1","qwer1234@","78187085767","new_street_chennai"));
customers.add(new Customer("cust2","qwer1234@","78187085768","new_street_chennai"));
		Admin user name = "admin";
		Admin password = "qwer1234@";

*/
import java.util.*;
import java.io.*;

class WrongPassword extends Exception{
	WrongPassword(){
		super("Your password Strength is poor");
	}
}


class Customer extends OnlineShoppingSystem{
	String name;
	String password;
	String phoneNo;
	String address;
	int wallet;
	Customer(){}
	Customer(String name, String password, String phoneNo,String address){
		this.name = name;
		this.password = password;
		this.phoneNo = phoneNo;
		this.address = address;
		this.wallet = 1000;
	}

}


class Product extends OnlineShoppingSystem{
	Scanner sc = new Scanner(System.in);
	static int id = 0;
	String productName;
	int productStock;
	int productId;
	double cost;
	Product(){}
	Product(String productName, int productStock, double cost){
		this.productName = productName;
		this.productStock = productStock;
		this.cost = cost;
		this.productId = id++;

	}
	void addStock() {
		availableProducts();
		System.out.println("Enter the product ID to add some stock : ");
		int id = sc.nextInt();
		for(Product p : products){
			if(id == p.productId){
				System.out.print("ENter the count of stock you want to add : ");
				p.productStock += sc.nextInt();
			}
		}
		
	}
	void addProduct() {
		System.out.println("Enter the Product name");
		String name = sc.next();
		System.out.println("Enter the ProductStock");
		int stock = sc.nextInt();
		System.out.println("Enter the Product cost");
		double cost = sc.nextDouble();
		
		OnlineShoppingSystem.products.add(new Product(name,stock,cost));
	}
	void buyProduct(Customer c){
		availableProducts();
		try{
		System.out.println("Enter the product ID to buy : ");
		int id = sc.nextInt();
		for(Product p : products){
			if(p.productId == id){
				
					System.out.println("Enter the quantity you want : ");	
					int quantity = sc.nextInt();
					if(quantity < p.productStock){
						
						if(c.wallet>p.cost){
							p.productStock -= quantity;
							c.wallet -= p.cost;
						}	
						else
							System.out.println("Insufficient balance in the wallet..");
					}
					else{
						System.out.println("Product out of stock We have only "+p.productStock);
					}
				
			}
		}
	}		
	catch(Exception e){
		System.out.println(e);
	}
	}

	void availableProducts(){
		for(Product p : products){
			System.out.println("Product ID"+p.productId+"Product Name : "+p.productName+"Cost :"+cost);	
		}
	}
	void deleteProducts(){
		int id;
		System.out.println("Enter the product ID to delete : ");
		id = sc.nextInt();
		for(Product p : products){
			if(p.productId == id) {
				products.remove(p);
				break;
			}
		}
	}
}


public class OnlineShoppingSystem
{
	static Scanner sc = new Scanner(System.in);
	static int productsCount;
	static List<Product> products = new ArrayList<>();
	static List<Customer> customers = new ArrayList<>();
	static Admin a = new Admin();
	static Product prod = new Product();
	static Customer cust = new Customer();
	static String adminName = "admin";
	static String apassword = "qwer1234@";

	static boolean passwordChecker(String pass){
		if(pass.length() < 8 || pass.length() > 15){
			return false;
		}
		boolean digit = false,ischar = false;
		boolean special = pass.contains("&") ||pass.contains("#") ||pass.contains("@") ||pass.contains("$");
		for(int i = 0;i < pass.length();i++){
			if(48 <= pass.charAt(i) && pass.charAt(i) >= 57){
				digit = true;
			}
			if((65 <= pass.charAt(i) && pass.charAt(i) >= 90) || (97 <= pass.charAt(i) && pass.charAt(i) >= 122)){
				ischar = true;
			}
		}
		return (special && digit && ischar);

	}
	static void login(){
		System.out.println("LOGIN PAGE");
		System.out.println("[1] ADMIN LOGIN \n[2] USER LOGIN");
		System.out.println("Enter the choice : ");
		int choice = sc.nextInt();
		switch(choice){
			case 1: System.out.println("Admin Login");
					adminLogin();
			case 2: System.out.println("User Login");
					userLogin();
			default: System.out.println("Invalid Choice");;
		}


	}
	static void adminLogin() {
		try{
			System.out.println("Enter the userName : ");
			String name = sc.next();
			System.out.println("Enter the password : ");
			String pass = sc.next();
			if(!passwordChecker(pass)){
				throw new WrongPassword();
			}
			if(name.equals(adminName) && pass.equalsIgnoreCase(apassword)) {
				System.out.println("Admin Logged In Succesfully");
				adminAccess();
			}
		}catch(WrongPassword e){
			System.out.println("Do it again..!");	
			adminLogin();}
	}
	static void userLogin() {
		System.out.println("Enter the Name : ");
		String userName = sc.next();
		String pass;
		System.out.println("Enter the password : ");
		pass = sc.next();
		if(!passwordChecker(pass)){
			throw new WrongPassword();
		}
		
		for(Customer c : customers) {
			if(c.name.equalsIgnoreCase(userName) && c.password.equals(pass)) {
				System.out.println("Logged In Successfully");
				userAccess(c);
			}
		}
	}
	static void userAccess(Customer c) {
		System.out.println("# # # # # # # USER PAGE # ## # # # #  # # ");
		System.out.println("[1] BUY PRODUCT");
		System.out.println("[1] VIEW AVAILABLE PRODUCT");
		System.out.println("[3] VIEW WALLET BALANCE");
		System.out.println("[4] ADD MONEY TO WALLET");
		int choice = sc.nextInt();
		switch(choice) {
		case 1: prod.buyProduct(c);
				break;
		case 2: prod.availableProducts();
				break;
		case 3: System.out.println("Your available balance "+c.wallet);
				break;
		case 4: System.out.println("Enter the amount you want to add to your wallet : ");
				c.wallet += sc.nextDouble();
				break;
				
		}
	}
	static void objectCreation() {
		products.add(new Product("MobilePhone",10,3500.0));
		products.add(new Product("Laptop",20,45000.0));
		products.add(new Product("Keyboard",15,350.0));
		products.add(new Product("Mouse",12,250.0));
		customers.add(new Customer("cust1","qwer1234@","78187085767","new_street_chennai"));
		customers.add(new Customer("cust2","qwer1234@","78187085768","new_street_chennai"));
		
	}
	
	static void adminAccess() {
		System.out.println("# # # # # # # ADMIN PAGE # # # # # # # # # ");
		System.out.println("[1] ADD PRODUCT");
		System.out.println("[2] DELETE PRODUCT");
		System.out.println("[3] ADD STOCK TO PRODUCT");
		System.out.println("[4] VIEW CUSTOMERS");
		int choice = sc.nextInt();
		switch(choice) {
		case 1: prod.addProduct();
				break;
		case 2: prod.deleteProducts();
				break;
		case 3: prod.addStock();
				break;
		case 4: for(Customer c: customers) {
					System.out.println("Name : "+c.name+" Address :"+c.address+"Phone No : "+c.phoneNo);
				}break;
		}
	}
	
	public static void main(String args[]){
		login();
	}

	static class Admin{
		public String name;
		public String password;
	}

}