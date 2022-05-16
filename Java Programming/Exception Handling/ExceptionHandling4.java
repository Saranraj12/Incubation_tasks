class NewException extends Exception{
    NewException(){};
    NewException(String str){super(str);};
}


public class ExceptionHandling4{
    public static void main(String[] args) {
        String arr[] = new String[]{"staff1","staff2","staff3"};
        int paid[] = {1000,0,1000};
        try{
            for(int i = 0;i < 3; i++){
                if(paid[i]!=0){
                    System.out.println( "Successfully paid the amount");
                }
                else{
                    throw new NewException("Amount not paid");
                }
            }
        }
        catch(Throwable e){
            e.printStackTrace();
        }
        finally{
            System.out.println("Program exited successfully..");
        }
        
    }
}