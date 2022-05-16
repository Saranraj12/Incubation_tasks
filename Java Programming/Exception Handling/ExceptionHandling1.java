public class ExceptionHandling1{
    public static void main(String[] args) {
        try {
            int a = 5/0;
        } catch (Exception e) {
            System.out.println(e);
            System.out.println("Zero Division Error => You can't divide any number by zero");
        }
    }
}