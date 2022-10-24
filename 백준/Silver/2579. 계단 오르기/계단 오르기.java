import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      Vector<Integer> v = new Vector<Integer>();
      int[] dp = new int[301];
      
      for(int i=0;i<n;i++)
      {
          v.add(sc.nextInt());
      }
      dp[0] = v.get(0);
      if(n>1)dp[1] = v.get(0) + v.get(1);
      if(n>2)dp[2] = Math.max(v.get(1)+v.get(2),v.get(0)+v.get(2));
      for(int i=3;i<n;i++) dp[i] = Math.max(dp[i-3]+v.get(i-1)+v.get(i),dp[i-2]+v.get(i));
      System.out.println(dp[n-1]);
    }
}