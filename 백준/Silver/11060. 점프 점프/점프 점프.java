import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      int[] jump = new int[1001];
      int[] dp = new int[1001];
      
      for(int i=1;i<=n;i++)
      {
          jump[i] = s.nextInt();
          dp[i] = 987654321;
      }
      dp[1] = 0;
      for(int i=1;i<=n;i++)
      {
          for(int j=0;j<=jump[i];j++) if((i+j)<=n) dp[i+j] = Math.min(dp[i]+1,dp[i+j]);
      }
      if(dp[n] == 987654321) System.out.print(-1);
      else System.out.print(dp[n]);
    }
}