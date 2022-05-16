import java.util.HashMap;
import java.util.Map;

public class MapExample{
    public static void main(String[] args) {
        Map<Integer, String> map = new HashMap<>();
        map.put(1,"saran");
        map.put(2,"raj");
        map.put(3,"oops");
        map.put(4,"java");

        for(int i : map.keySet()){
            System.out.println(i + " " + map.get(i));
        }
        map.remove(Integer.valueOf(2));
        System.out.println(String.join("\n",map.values()));
    }
}