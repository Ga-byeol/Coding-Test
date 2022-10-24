import java.util.*;
import java.util.Arrays;
import java.util.Queue;
import java.util.LinkedList;

public class Main {
    static int N,M;
    static int[][] graph = new int[101][101];

    public static void floyd()
    {
        for (int k = 1; k <= N; k++)
            for (int i = 1; i <= N; i++)
                for (int j = 1; j <= N; j++)
                    if (i == j)
                        continue;
                    else if (graph[i][k] != 0 && graph[k][j] != 0)
                    {
                        if (graph[i][j] == 0)
                            graph[i][j] = graph[i][k] + graph[k][j];
                        else
                            graph[i][j] = Math.min(graph[i][j], graph[i][k] + graph[k][j]);
                    }
    }

    public static void main(String args[]) {
      
      Scanner s = new Scanner(System.in);
      N = s.nextInt();
      M = s.nextInt();
      
      for(int i=0;i<M;i++)
      {
          int x = s.nextInt();
          int y = s.nextInt();
          graph[x][y] = graph[y][x] = 1;
      }
      floyd();
      int result = 987654321;
      int person = 0;
      for(int i=1;i<=N;i++)
      {
          int sum = 0;
          for(int j=1;j<=N;j++)
          {
             sum+=graph[i][j];
          }
          if(result>sum)
          {
              result = sum;
              person = i;
          }
      }
      System.out.print(person);
}
}