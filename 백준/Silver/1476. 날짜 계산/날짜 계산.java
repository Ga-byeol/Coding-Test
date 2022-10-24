import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int e=1,s=1,m=1,cnt=1;
      int E = sc.nextInt(),S = sc.nextInt(),M = sc.nextInt();
      while(true)
      {
          if(e == E && s == S && m == M) break;
        
          e++;
          s++;
          m++;
          if(e == 16) e = 1;
          if(s == 29) s = 1;
          if(m == 20) m = 1;
          cnt++;
      }
      System.out.println(cnt);
    }
}