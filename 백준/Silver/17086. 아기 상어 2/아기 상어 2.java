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
    static int n,m;
    static ArrayList<Integer>[] edge = new ArrayList[100001];
    static boolean[][] marked;
    static int[] dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int[] dy = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    public static int bfs(int y,int x)
    {
        for(int i=0;i<n;i++) Arrays.fill(marked[i],false);
        if(edge[y].get(x) == 1) return 0;
        marked[y][x] = true;
        
        Queue<Pair> q= new LinkedList<>();
        q.add(new Pair(y,x));
        
        int step = 0;
        while(!q.isEmpty())
        {
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
                //Pair pos = q.poll();
                int ty = q.peek().getX();
                int tx = q.peek().getY();
                q.poll();
                for(int dir = 0;dir<8;dir++)
                {
                    int nx = tx+dx[dir];
                    int ny = ty+dy[dir];
                    if(nx >= 0 && ny >= 0 && nx < m && ny < n)
                    {
                        if(marked[ny][nx]) continue;
                        if(edge[ny].get(nx) == 1) return step+1;
                        marked[ny][nx] = true;
                        q.add(new Pair(ny,nx));
                    }
                }
            }
            step++;
        }
        return step;
    }
    public static void main(String args[]) {
      
      Scanner s = new Scanner(System.in);
      n = s.nextInt();
      m = s.nextInt();
      
      marked = new boolean[n+1][m+1];
      edge = new ArrayList[n+1];
      
      for(int i=0;i<=n;i++) 
      {
          edge[i] = new ArrayList();
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              edge[i].add(s.nextInt());
          }
      }
      int result = -1;
      
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              int temp = bfs(i,j);
              if(temp>result) result = temp;
          }
      }
      System.out.print(result);
    }
}