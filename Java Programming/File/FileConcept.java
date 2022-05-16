import java.io.*;
public class FileConcept{
    public static void main(String[] args) throws Exception {
        
        FileWriter fp = new FileWriter(new File("output.txt"),true);
        fp.close();

    }
}