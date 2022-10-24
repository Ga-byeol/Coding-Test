import java.util.*;

public class Main {
    static ArrayList<Integer>[] edge = new ArrayList[100001];
    static int[] parent = new int[100001];
    static boolean[] marked = new boolean[100001];
    
    public static void dfs(int n)
    {
        marked[n] = true;
        for(int x : edge[n])
        {
            if(!marked[x])
            {
                parent[x] = n;
                dfs(x);
            }
        }
    }
    public static void main(String args[]) {
      
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      for(int i=1;i<n+1;i++) edge[i] = new ArrayList();
      for(int i=0;i<n-1;i++)
      {
          int x = s.nextInt();
          int y = s.nextInt();
          edge[x].add(y);
          edge[y].add(x);
      }
      dfs(1);
      
      for(int i=2;i<=n;i++)
      {
          System.out.println(parent[i]);
      }
    }
}