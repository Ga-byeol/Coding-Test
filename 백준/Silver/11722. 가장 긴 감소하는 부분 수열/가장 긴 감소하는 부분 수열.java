import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      int[] a = new int[n];
      int[] dp = new int[n];
      for(int i=0;i<n;i++) a[i] = s.nextInt();
      
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<i;j++)
          {
              if(a[i]<a[j]&&dp[i]<dp[j]) dp[i] = dp[j];
          }
          dp[i]+=1;
      }
      System.out.print(Arrays.stream(dp).max().getAsInt());
    }
}