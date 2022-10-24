import java.util.*;

public class Main {
    
    public static void main(String args[])
    {
      Scanner s = new Scanner(System.in);
      int n = s.nextInt(),m= s.nextInt();
      if(n==1) System.out.print(1);
      else if(n==2)System.out.print(Math.min(4,(m+1)/2));
      else if(n>=3)
      {
          if(m<=6)System.out.print(Math.min(4,m));
          else System.out.print(m-2);
      }
    }
}