import java.util.*;

public class HashSetImplementation{
    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();
        Set<String> set = new HashSet<>();
        set.add("saran");
        set.add("raj");
        set.add("saranraj");
        set.remove("raj");
        System.out.println(set);
        list.addFirst(12);
        list.addLast(24);
        list.add(10);
        list.addFirst(5);
        Iterator iter = list.iterator();
        while(iter.hasNext()){
            System.out.println(iter.next());
        }
    }
}