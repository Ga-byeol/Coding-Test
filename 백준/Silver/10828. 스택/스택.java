import java.util.*;

public class Main {
    public static void main(String args[]) {
      Stack<Integer> stack = new Stack<>();
      Scanner sc = new Scanner(System.in);
      
      int n = sc.nextInt();
      StringBuilder sb = new StringBuilder();
      
      while(n > 0){
          n--;
          String str = sc.next();
          
          if(str.equals("push")) {
              stack.push(sc.nextInt());
              continue;
          }
          if(str.equals("pop")) sb.append(stack.isEmpty() ? -1 : stack.pop());
          if(str.equals("size")) sb.append(stack.size());
          if(str.equals("empty")) sb.append(stack.isEmpty() ? 1 : 0);
          if(str.equals("top")) sb.append(stack.isEmpty() ? -1 : stack.peek());
          
          sb.append("\n");
      }
        System.out.println(sb);
    }
}