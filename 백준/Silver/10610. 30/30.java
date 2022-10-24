import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      String str = s.nextLine();
      int len = str.length();
      int[] arr = new int[len];
      for(int i=0;i<len;i++) arr[i] = str.charAt(i) -'0';
      Arrays.sort(arr);
      int sum=0;
      for(int i=0;i<len;i++) sum+=arr[i];
      if(arr[0] != 0||sum%3 != 0) System.out.println(-1);
      else for(int i=len-1;i>=0;i--) System.out.print(arr[i]);
    }
}