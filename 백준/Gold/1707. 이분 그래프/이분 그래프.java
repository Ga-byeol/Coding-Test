import java.util.*;

public class Main {
    static ArrayList<Integer> edge[] = new ArrayList[20001];
    static int mark[] = new int[200001];
    
    static void dfs(int n,int m) {
        Stack<Integer> s = new Stack<Integer>();
        mark[n] = m;
        for(int x : edge[n]) if (mark[x] == 0) dfs(x,3-m);
    }
    public static void main(String args[]) {
        
      Scanner s = new Scanner(System.in);
      int k = s.nextInt();
      while(k-- != 0) {
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
            
            boolean flag = true;
            
            for(int i = 1; i <= v; i++) if(mark[i] == 0) dfs(i,1);
            for(int i = 1; i <= v; i++) for(int x : edge[i]) if(mark[i] == mark[x]) flag = false;
            
        
            if(flag)System.out.println("YES");
            else System.out.println("NO");
            
            Arrays.fill(mark,0);
            for(int i=0; i<=v;i++) Collections.fill(edge[i],0);
        }
    }
}