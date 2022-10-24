import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int t = s.nextInt();
      while((t--) != 0)
      {
          int[][] dp = new int[2][100001];
          int n = s.nextInt();
          for(int i=0;i<n;i++) dp[0][i] = s.nextInt();
          for(int i=0;i<n;i++) dp[1][i] = s.nextInt();
          dp[0][1]+=dp[1][0];
          dp[1][1]+=dp[0][0];
          
          for(int i=2;i<n;i++)
          {
              dp[0][i] += Math.max(dp[1][i-1],dp[1][i-2]);
              dp[1][i] += Math.max(dp[0][i-1],dp[0][i-2]);
          }
          System.out.println(Math.max(dp[0][n-1],dp[1][n-1]));
      }
    }
}