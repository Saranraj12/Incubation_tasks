//Reverses the ArrayList A

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class ReverseArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(3,1,2,4,6,5,8));
        System.out.println("Before Reversing >>> ");
        System.out.println(list);
        Collections.reverse(list);
        System.out.println("After Reversing >>> ");
        System.out.println(list);
    }
}
