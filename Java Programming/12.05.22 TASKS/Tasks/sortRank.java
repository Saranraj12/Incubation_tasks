package Tasks;

import java.util.Arrays;
import java.util.SortedMap;
import java.util.TreeMap;

public class sortRank {
    public SortedMap<Integer,Integer> sort(int arr[]){
        SortedMap<Integer,Integer> map = new TreeMap<>();
        Arrays.sort(arr);

        for(int i = 0;i < arr.length;i++){
            map.put(arr.length - i, arr[i]);
        }

        return map;
    }
}
