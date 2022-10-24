import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      int[] a = new int[n];
      for(int i=0;i<n;i++) a[i] = s.nextInt();
      int[] dp = new int[n];
      dp[0] = a[0];
      for(int i=1;i<n;i++)
      {
          int cnt=0;
          int[] arr = new int[1001];
          for(int j=0;j<i;j++)
          {
              if(a[i]>a[j])
              {
                  arr[cnt] = dp[j];
                  cnt++;
              }
          }
          if(arr[0] == 0) dp[i] = a[i];
          else dp[i] = a[i] + Arrays.stream(arr).max().getAsInt();
      }
      System.out.print(Arrays.stream(dp).max().getAsInt());
    }
}