import java.util.*;

public class Main {
    static ArrayList<Integer> edge[] = new ArrayList[20001];
    static int mark[] = new int[200001];
    
 static int bfs(int n) {
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(n);
        mark[n] = 1;
        
        while(!q.isEmpty()) {
            int x = q.remove();
            for(int y : edge[x]) {
                if(mark[y] == 0) {
                    q.add(y);
                }
                mark[y] = 1;
            }
        }
        return 1;
    }
    public static void main(String args[]) {
        
      Scanner s = new Scanner(System.in);
      int k = s.nextInt();
      while(k-- != 0) {
          int v = s.nextInt();
          int result = 0;
          Arrays.fill(mark, 0);
          
          for(int i = 0; i < v+1; i++) edge[i] = new ArrayList<Integer>();
          
          for(int i = 1; i <= v; i++){
              int val = s.nextInt();
              edge[i].add(val);
          }
          for(int i=1;i<=v;i++){
              if(mark[i] == 0) result += bfs(i);
          }
  
          System.out.println(result);
      }
    }
}