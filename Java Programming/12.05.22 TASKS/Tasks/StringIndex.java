public class StringIndex{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sc.next();
        System.out.println("Enter the index number : ");
        int index = sc.nextInt();
        System.out.println("Index at "+index+" : "+str.charAt(index));
    }
}