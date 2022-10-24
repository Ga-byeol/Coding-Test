import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int m = s.nextInt();
      int num,BIT=0;
      StringBuilder sb = new StringBuilder();
      
      while(m != 0)
      {
          String input = s.next();
          if (input.equals("add"))
          {
              num = s.nextInt();
              BIT |= (1 << num);
          }
          else if (input.equals("remove"))
          {
              num = s.nextInt();
              BIT &= ~(1 << num);
          }
          else if (input.equals("check"))
          {
              num = s.nextInt();
              if ((BIT & (1 << num)) != 0) sb.append("1\n");
              else sb.append("0\n");
          }
          else if (input.equals("toggle"))
          {
              num = s.nextInt();
              BIT ^= (1 << num);
          }
          else if (input.equals("all"))
          {
              BIT = (1 << 21) - 1;
          }
          else if (input.equals("empty"))
          {
              BIT = 0;
          }
          m--;
      }
      System.out.print(sb);
    }
}