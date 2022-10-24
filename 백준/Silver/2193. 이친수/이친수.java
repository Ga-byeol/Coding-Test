import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      int n = input.nextInt();
      long dp[] = new long[n+1];
      dp[1] = 1;
      if(n>1)dp[2] = 1;
      for(int i=3;i<=n;i++) dp[i] = dp[i-2]+dp[i-1];
      System.out.println(dp[n]);
    }
}