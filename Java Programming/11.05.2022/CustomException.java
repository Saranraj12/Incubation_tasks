import java.util.Scanner;

class WrongPasswordException extends Exception{
    WrongPasswordException(){
        super("Your password Strength is too poor");
    }
}


public class CustomException {

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
    public static void main(String[] args) throws WrongPasswordException {
        Scanner sc = new Scanner(System.in);
        String passWord;
        try{
            System.out.println("Enter the password : ");
            passWord = sc.next();
            if(!passwordChecker(passWord))
                throw new WrongPasswordException();
            System.out.println("Your password is too strong");

        }
        catch(WrongPasswordException e){
            System.out.println("Try to give combinations of special characters,alphabets and numbers");
            System.out.println(e.getMessage());
        }
    }
}
