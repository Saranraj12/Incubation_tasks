import java.util.*;

public class StackAndQueueImplementation {

    static Stack<Integer> stack = new Stack<>();
    static Queue<Integer> queue = new ArrayDeque<>();
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("Enter the choice \n[1] Stack [2] QUEUE");
        int choice = sc.nextInt();
        switch(choice){
            case 1: stackOperations();
                    break;
            case 2: queueOperations();
                    break;
        }
    }
    static void queueOperations() {
        while(true){
            System.out.println("[1] Enqueue\n[2] deque\n[3] size\n[4] Exit");
            int choice = sc.nextInt();
            switch(choice){
                case 1: System.out.println("Enter thr element to insert");
                        queue.add(sc.nextInt());
                        break;
                case 2: System.out.println("Deque Element : "+queue.poll());
                        break;
                case 3: System.out.println("Queue size : "+queue.size());
                        break;
            }
        }
    }
    static void stackOperations() {
        while(true){
            System.out.println("[1] push\n[2] pop\n[3] size\n[4] Exit");
            int choice = sc.nextInt();
            switch(choice){
                case 1: System.out.println("Enter thr element to push");
                        stack.push(sc.nextInt());
                        break;
                case 2: System.out.println("Popped Element : "+stack.pop());
                        break;
                case 3: System.out.println("Stack size : "+stack.size());
                        break;
            }
        }
    }
}
