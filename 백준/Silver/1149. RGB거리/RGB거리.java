import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      int[][] dp = new int[n][3];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<3;j++)
          {
              dp[i][j] = s.nextInt();
          }
      }
      for(int i=1;i<n;i++)
      {
          dp[i][0] = Math.min(dp[i-1][1],dp[i-1][2]) + dp[i][0];
          dp[i][1] = Math.min(dp[i-1][0],dp[i-1][2]) + dp[i][1];
          dp[i][2] = Math.min(dp[i-1][0],dp[i-1][1]) + dp[i][2];
      }
      System.out.print(Math.min(dp[n-1][0],Math.min(dp[n-1][1],dp[n-1][2])));
    }
}