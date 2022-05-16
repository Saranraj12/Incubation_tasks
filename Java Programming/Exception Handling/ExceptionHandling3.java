public class ExceptionHandling3{
    public static void main(String[] args) {
        int arr[] = new int[]{1,2,3,4,5,6};
        String name = "String";
        try {
            int i = 0;
            while(true){
                System.out.println(name.charAt(i));
                // System.out.println(arr[i]);
                i++;
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array terms printed");
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("String printed successfully");
        }
    }
}