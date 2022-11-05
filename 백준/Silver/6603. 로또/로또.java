import java.util.*;

public class Main {
    static int[] lottos = new int[13];
    static int[] lotto = new int[13];
    static int k;
    
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      
      do{
           k = sc.nextInt();
          for(int i = 0; i < k; i++) lottos[i] = sc.nextInt();
          dfs(0,0);
          System.out.println();
      }
      while(k != 0);
    }
    
    static void dfs(int start, int depth){
        if(depth == 6){
            for(int i = 0; i < 6; i++) System.out.print(lotto[i] + " ");
            System.out.println();
            return;
        }
        
        for(int i = start; i < k; i++){
            lotto[depth] = lottos[i];
            dfs(i+1, depth+1);
        }
    }
}