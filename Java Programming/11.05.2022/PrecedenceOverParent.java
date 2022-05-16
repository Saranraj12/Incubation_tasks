public class PrecedenceOverParent {
    public static void main(String[] args) {
        try{
            String str = null;
            int length = str.length();
            System.out.println(length);
        }
        catch(NullPointerException e){
            // e.printStackTrace();
            System.out.println("You are trying to accessing the null value");
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
