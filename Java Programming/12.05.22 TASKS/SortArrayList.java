//Sorts the ArrayList A in ascending order

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class SortArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(3,1,2,4,6,5,8));
        System.out.println("Before Sorting >>> ");
        System.out.println(list);
        Collections.sort(list);
        System.out.println("After Sorting >>> ");
        System.out.println(list);
    }
}
