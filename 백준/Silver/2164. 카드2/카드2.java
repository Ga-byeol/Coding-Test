import java.util.*;

public class Main {
    public static void main(String args[]) {
      Queue<Integer> queue = new LinkedList<>();
      Scanner sc = new Scanner(System.in);
      
      int n = sc.nextInt();
      
      for(int i = 1; i <= n; i++){
          queue.offer(i);
      }
      for(int i = 0; i < n-1; i++){
          queue.remove();
          queue.offer(queue.poll());
      }
      System.out.println(queue.peek());
    }
}