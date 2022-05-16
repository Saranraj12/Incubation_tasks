public class grandChildren {
    public static void main(String[] args) {

         String array[][] = {
            {"luke","shaw"},
            {"wayne","rooney"},
            {"rooney","ronaldo"},
            {"shaw","rooney"}
        };
        int c = getCount(array, getFather(array, "ronaldo"), "ronaldo");
        System.out.println("Count : "+c);
    
    }
    static String[] getFather(String array[][],String fname){
        String sons[] = new String[array.length];
        int size = 0;
        for(int i = 0;i < array.length;i++){
            if(array[i][1].equalsIgnoreCase(fname)){
                sons[size++] = array[i][0];
            }

        }
        return sons;
    }
    static int getCount(String array[][], String arr[], String fname){
        int count = 0;
        for(int i = 0;i < array.length;i++){
            if(isFatherOf(array[i][1],arr)){
                count++;
            }

        }
        return count;
    }
    static boolean isFatherOf(String name,String sons[])
    {
        for(int i = 0;i < sons.length;i++)
        {
            if(name.equals(sons[i]))
                return true;
        }
        return false;
    } 
}
