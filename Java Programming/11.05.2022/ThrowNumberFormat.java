import java.util.*;

public class ThrowNumberFormat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            String alphaNumeric = "123";
            int num= 0,j = 10;
            for(int i = 0;i < alphaNumeric.length();i++){
                if(Character.isDigit(alphaNumeric.charAt(i))){
                    num = num*j + (alphaNumeric.charAt(i)-'0');
                }
                else 
                    throw new NumberFormatException();
            }
            System.out.println("Number is "+num);
            
        } catch (NumberFormatException e) {
            System.out.println(e);
        }

    }
}
