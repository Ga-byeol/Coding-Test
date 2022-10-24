import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt();
      int[] a = new int[n];
      for(int i=0;i<n;i++)
      {
          a[i] = s.nextInt();
      }
      int[] sum = new int[n];
      sum[0] = a[0];
      for(int i=0;i<n-1;i++)
      {
          sum[i+1] = Math.max(sum[i]+a[i+1],a[i+1]);
      }

      System.out.println(Arrays.stream(sum).max().getAsInt());
    }
}