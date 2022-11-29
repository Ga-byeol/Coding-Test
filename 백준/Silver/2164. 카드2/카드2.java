import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      if(n < 2){
          System.out.println(1);
          return;
      }
      int pow = 1;
      
      while(n > pow) pow = pow << 1;
      
      pow = pow >> 1;
      
      System.out.println((n-pow) * 2);
    }
}