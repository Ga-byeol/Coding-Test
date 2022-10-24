import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      int n = input.nextInt();
      long dp[] = new long[n+1];
      for(int i=1;i<=n;i++)
        {
            dp[i]=i;
            for(int j=2;(j*j)<=i;j++) dp[i] = dp[i] < dp[i-(j*j)]+1 ? dp[i] : dp[i-(j*j)]+1;
        }
      System.out.println(dp[n]);
    }
}