import java.io.File;
import java.util.Scanner;

public class ThrowClassNotFound {

    static boolean checkClass(String[] content, String name){
        for(String fileName : content){
            if(fileName.equals(name))
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        File dir = new File("C:\\Users\\Administrator\\Desktop\\Java Programming\\11.05.2022");
        String content[] = dir.list();
        try{
            System.out.println("Enter the class name : ");
            String file = sc.next();
            file += ".class";
            if(!checkClass(content, file))
                throw new ClassNotFoundException();
            System.out.println("Class Found");
            
        }
        catch(ClassNotFoundException e){
            e.printStackTrace();
        }
    }
}
