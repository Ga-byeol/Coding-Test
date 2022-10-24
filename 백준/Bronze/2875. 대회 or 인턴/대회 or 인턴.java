import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt(),m = s.nextInt(),k = s.nextInt();
      

      System.out.println(Math.min(Math.min(n/2,m),(n+m-k)/3));
    }
}