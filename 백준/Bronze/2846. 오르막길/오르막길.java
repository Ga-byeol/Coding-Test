import java.util.*;

public class Main {
    public static void main(String args[]) {
      ArrayList<Integer> list = new ArrayList<>();
      Scanner sc = new Scanner(System.in);
      
      int n = sc.nextInt();
      
      int before = sc.nextInt();
      list.add(0);
      
      for(int i = 1; i < n; i++){
          int current = sc.nextInt();
          
          if(current > before) list.add(list.get(i - 1) + current - before);
          else list.add(0);
          
          before = current;
      }
      
      System.out.print(Collections.max(list));
    }
}