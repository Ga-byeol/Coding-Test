import java.util.*;

public class Main {
    static ArrayList<Integer> edge[] = new ArrayList[1001];
    static boolean mark[] = new boolean[1000*(1000-1)/2];
    static int count = 0;
    static void dfs(int n) {
        Stack<Integer> s = new Stack<Integer>();
        
        s.push(n); mark[n] = true;
        //System.out.print(n+ " ");
        
        while(!s.empty()) {
            int f = s.peek();
            boolean none = true;

            for(int x : edge[f]) {
                if(mark[x] == false) {
                    s.push(x); mark[x] = true;
                    //System.out.print(x + " ");
                    none = false;
                    break;
                }
            }
            if(none) s.pop();
        }
    }
    
    static void bfs(int n) {
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(n);
        mark[n] = true;
        
        while(!q.isEmpty()) {
            int x = q.remove();
            //System.out.print(x + " ");
            for(Object y : edge[x]) {
                int v = (int)y;
                if(mark[v] == false) {
                    mark[v] = true;
                    q.add(v);
                }
            }
        }
    }
    
    public static void main(String args[]) {
        
      Scanner s = new Scanner(System.in);
      int v = s.nextInt();
      int e = s.nextInt();
      
      for(int i = 0; i < v+1; i++) edge[i] = new ArrayList<Integer>();
      
      for(int i = 0; i < e; i ++) {
          int f,t;
          f = s.nextInt();
          t = s.nextInt();
          edge[f].add(t);
          edge[t].add(f);
      }
      
      for (int i = 1; i <= v; i++) {
            if(!mark[i]){
                bfs(i);
            count++;
        }     
          
      }
        System.out.print(count);
    }
}