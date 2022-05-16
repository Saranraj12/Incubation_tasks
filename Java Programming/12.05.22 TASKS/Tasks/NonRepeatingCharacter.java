import java.util.Scanner;

public class NonRepeatingCharacter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sc.next();
        boolean flag = true;
        for(int i = 0;i < str.length();i++){
            if(str.indexOf(str.charAt(i)) == str.lastIndexOf(str.charAt(i))){
                flag = false;
               System.out.print(str.charAt(i)); 
               break;
            }
                
        }
        if(flag){
            System.out.println("Only we have repeating characters....");
        }
    }
}
