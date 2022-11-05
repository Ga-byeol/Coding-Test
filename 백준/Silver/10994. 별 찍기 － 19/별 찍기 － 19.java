import java.util.*;

public class Main {
    
    static char[][] map = new char[400][400];
    
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      
      int line = 4 * (n - 1) + 1;
      
      for(int i = 0; i < line; i++) Arrays.fill(map[i],' ');

      print(0, 0, n);
      
      for(int i = 0; i < line; i++){
          for(int j = 0; j < line; j++){
              System.out.print(map[i][j]);
          }
          System.out.println();
      }
    }
    static void print(int x, int y, int n) {
        if(n == 1){
            map[x][y] = '*';
            return;
        }
        int starcnt = 4 * (n-1) + 1;
        for(int i = 0; i < starcnt; i++){
            map[x + i][y] = '*';
            map[x + i][y + starcnt - 1] = '*';
            map[x][y + i] = '*';
            map[x + starcnt - 1][y + i] = '*';
        }
        print(x+2,y+2,n-1);
    }
}