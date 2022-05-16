import java.util.Scanner;

public class pattern4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = 1,count = 1;
        while(n != 0){
            System.out.println(num);
            num = generateNew(num);
            n--;
        }
        
    }
    static int generateNew(int n){
        String number = "";
        int count = 1;
        String actual = String.valueOf(n);
        for(int i = 1;i <= actual.length();i++){
            if(i!=actual.length() && actual.charAt(i) == actual.charAt(i-1)){
                count++;
            }
            else{
                number +=  String.valueOf(count) + String.valueOf(actual.charAt(i-1));
                count = 1;
            }
        }

        return Integer.parseInt(number);
    }
}
