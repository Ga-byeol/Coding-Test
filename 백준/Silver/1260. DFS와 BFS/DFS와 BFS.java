import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    
    static ArrayList<Integer>[] edge = new ArrayList[1001];
    static boolean[] marked= new boolean[1001];
    
    static void dfs(int n)
    {
        if(marked[n]) return;
        marked[n] = true;
        System.out.print(n + " ");
        for(int x:edge[n]) dfs(x);
    }
    
    static void bfs(int n)
    {
        Queue<Integer> q = new LinkedList<>();
        marked[n] = true;
        q.add(n);
        
        while(!q.isEmpty())
        {
            int v = q.poll();
            System.out.print(v + " ");
            
            for(int x: edge[v])
            {
                if(!marked[x])
                {
                    marked[x] = true;
                    q.add(x);
                }
            }
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        int v = sc.nextInt();
        edge = new ArrayList[n+1];
        marked = new boolean[n+1];
        
        for(int i=0;i<n+1;i++)
        {
            edge[i] = new ArrayList<Integer>();
        }
        for(int i=0;i<m;i++)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            edge[x].add(y);
            edge[y].add(x);
        }
        for(int i=1;i<=n;i++) Collections.sort(edge[i]);
        dfs(v);
        System.out.println();
        marked = new boolean[1001];
        bfs(v);
    }
}