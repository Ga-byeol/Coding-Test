import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int[] dp = new int[1001];
      for(int i=0;i<1001;i++) dp[i] = 1;
      for(int i=1;i<1001;i++)
      {
          for(int j=0;j<=i-1;j++)
          {
              if((i-j&1) != 0) continue;
              dp[i] += dp[(i-j)/2];
          }
      }
      int t = s.nextInt();
      while((t--) != 0)
      {
          int n = s.nextInt();
          System.out.println(dp[n]);
      }
    }
}