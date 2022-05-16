public class ExceptionHandling2{
    public static void main(String[] args) {
        try {
            String name = null;
            int a = 5/0;
            System.out.println(name.charAt(0));
            
        } 
        catch (NullPointerException e) {
            System.out.println("Pointing to a null value");
        }
        catch(ArithmeticException e){
            System.out.println("Can't Divide by zero");
        }
        finally{
            System.out.println("Program ended");
        }
    }
}