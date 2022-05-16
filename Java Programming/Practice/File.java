import java.io.File;
public class File {
    public static void main(String[] args) {
        File op=new File("Parthiban.txt");
        if(op.createNewFile()){
            System.out.println("File Created succesfully");
        }
        else{
            System.out.println("Already Exist");
        }
    }
}
