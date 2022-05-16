class User{
    private String name;
    private String phone_no;
    private char gender;
    void setName(String name){
	this.name = name;
    }
    void setPhone(String phone_no){
	this.phone_no = phone_no;
    }
    void setGender(char gender){
	this.gender = gender;
    }
    String getName(){
	return name;
    }
    String getPhone(){
	return phone_no;
    }
    char getGender(){
	return gender;
    }
}


public class encapsulation{
   public static void main(String args[]){
	User u = new User();
	u.setName("user1");
	u.setPhone("98786543");
	u.setGender('M');
	System.out.println(u.getName());
	System.out.println(u.getPhone());
	System.out.println(u.getGender());

   }
}