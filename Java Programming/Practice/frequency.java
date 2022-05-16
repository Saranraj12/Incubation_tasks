public class frequency {
    public static void main(String[] args) {
        int arr[] = {2,4,4,3,3,4};
        int len = arr.length,count;
        int temp[] = new int[len];

        for(int i = 0;i < len;i++){
            count = 1;
            for(int j = i + 1;j < len && temp[i]!=-1;j++){
                if(arr[i] == arr[j]){
                    count++;
                    temp[j] = -1;
                }
            }
            if(temp[i]!=-1){
                temp[i] = count;
                System.out.print(arr[i]+"("+count+"),");
            }
                
        }
    }
}
