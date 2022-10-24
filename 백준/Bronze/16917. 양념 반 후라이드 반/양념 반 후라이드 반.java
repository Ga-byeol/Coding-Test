import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int a = s.nextInt(),b = s.nextInt(),c = s.nextInt(), x = s.nextInt(), y = s.nextInt();
      int price = 0;
      if(a+b > c*2)
      {
          for(int i=0;i<Math.min(x,y);i++) price = price + (c * 2);

          if(a > c*2 && x > y) price = price + c*2*(x-y);
          else if (b > c*2 && x < y) price = price + c*2*(y-x);
          else price = price + (x > y ? a : b)*(Math.max(x,y) - Math.min(x,y));
      }
        else price = a*x + b*y;
      System.out.println(price);
    }
}