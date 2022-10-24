import java.util.*;

public class Main {
    private static int dx[] = {0,0,1,-1,1,-1,1,-1};
    private static int dy[] = {1,-1,0,0,-1,1,1,-1};
    private static int mx;
    private static int my;
    private static int land;
    private static boolean[][] visited = new boolean[50][50];
    private static int[][] map = new int[50][50];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while(true){
            land = 0;
            my = sc.nextInt(); mx = sc.nextInt();
            if(mx == 0 && my == 0) break;
            
            sc.nextLine();
            
            map = new int[mx][my];
            visited = new boolean[mx][my];
    
            for(int i=0; i<mx; i++){
                String input = sc.nextLine();
                input = input.replaceAll(" ","");
                char[] put = input.toCharArray();
                
                for(int j=0; j<my; j++){
                    map[i][j] = (int)put[j]-'0';
                }
            }
            for(int i=0; i<mx; i++){
                for(int j=0; j<my; j++){
                    if(map[i][j] == 1 && !visited[i][j]){
                        land++;
                        dfs(i,j);
                    }
                }
            }
                    System.out.println(land);
        }
}
    private static void dfs(int x, int y) {
        visited[x][y] = true;

        for(int i=0; i<8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >=0 && ny >=0 && nx < mx && ny < my){
                if(map[nx][ny] == 1 && !visited[nx][ny]){
                    dfs(nx,ny);
                }
            }
        }
    }
}