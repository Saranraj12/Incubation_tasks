import java.io.FileWriter;
import java.io.IOException;
public class files {
    public static void main(String[] args) throws IOException {
        FileWriter op=new FileWriter("parthi.txt");
        op.write("how are you da\n");
        op.close();
        System.out.println("Success");
    }
}

