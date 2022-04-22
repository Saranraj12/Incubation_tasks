// Write a program to illustrate the size or range of various data types.

public class size {
    public static void main(String[] args) {
        int array[] = {4,1,2,4,8};
        String dataTypes[] = {"INT","BYTE","SHORT","FLOAT","DOUBLE"};
        for(int i = 0;i < 5;i++){
            long minValue = -(long)(Math.pow(2, array[i]*8-1));
            long maxValue = (long) (Math.pow(2, array[i]*8-1)-1);
            System.out.println(dataTypes[i]);
            System.out.println("SIZE : "+array[i]+" bytes");
            System.out.println("Range from : "+minValue+" To "+maxValue);
        }

    }
}
