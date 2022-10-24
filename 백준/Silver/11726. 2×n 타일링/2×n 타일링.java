import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      
      long[] dp = new long[1002];
      dp[1] = 1;
      dp[2] = 2;
      
      for(int i=3;i<=n;i++)
      {
          dp[i] = (dp[i-2] + dp[i-1])%10007;
      }
      System.out.println(dp[n]);
    }
}