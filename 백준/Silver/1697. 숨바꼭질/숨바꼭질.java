import java.util.*;
import java.util.Arrays;
import java.util.Queue;
import java.util.LinkedList;

class Pair
{
    int x,y;
    Pair(int x,int y)
    {
        this.x = x;
        this.y = y;
    }
    public int getX()
    {
        return x;
    }
    public int getY()
    {
        return y;
    }
}

public class Main {
    static int N,K;
    static boolean[] visited = new boolean[100001];
    
    public static int bfs(int x, int y)
    {
        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(x,0));
        visited[x] = true;
        
        while(!q.isEmpty())
        {
            int line = q.peek().getX();
            int time = q.peek().getY();
            q.poll();
            
            if(line == y) return time;
            
            if(line+1<100001 && !visited[line+1])
            {
                q.add(new Pair(line+1,time+1));
                visited[line+1] = true;
            }
            if(line-1>=0 && !visited[line-1])
            {
                q.add(new Pair(line-1,time+1));
                visited[line-1] = true;
            }
            if(line*2<100001 && !visited[line*2])
            {
                q.add(new Pair(line*2,time+1));
                visited[line*2] = true;
            }
        }
        return 0;
    }
    public static void main(String args[]) {
      
      Scanner s = new Scanner(System.in);
      N = s.nextInt();
      K = s.nextInt();
      
      System.out.print(bfs(N,K));
}
}