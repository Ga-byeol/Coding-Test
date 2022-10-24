import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      String car = s.nextLine();
      int[] num = {1,1,1,1};
      for(int i=0;i<car.length();i++)
      {
          if(car.charAt(i) == 'd') num[i] = 10;
          else num[i] = 26;
      }
      for(int i=0;i<car.length()-1;i++)
      {
          if(car.charAt(i) == car.charAt(i+1)) num[i+1]--;
      }
      System.out.println(num[0]*num[1]*num[2]*num[3]);
    }
}