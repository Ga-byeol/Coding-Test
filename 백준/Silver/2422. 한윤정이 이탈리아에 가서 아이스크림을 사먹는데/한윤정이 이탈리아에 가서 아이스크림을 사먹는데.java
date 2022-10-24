import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt(),m = s.nextInt();
      boolean[][] ice = new boolean[205][205];
      
      for(int i=0;i<m;i++)
      {
          int x = s.nextInt(),y = s.nextInt();
          ice[x][y] = true;
          ice[y][x] = true;
      }
      int ans = 0;
      for(int i=1;i<=n;i++)
      {
          for(int j=i+1;j<=n;j++)
          {
              if(ice[i][j]) continue;
              for(int k=j+1;k<=n;k++)
              {
                  if(ice[i][k]||ice[j][k])continue;
                  ans++;
              }
          }
      }
      System.out.println(ans);
    }
}