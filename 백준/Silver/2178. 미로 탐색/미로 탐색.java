import java.util.*;

public class Main {
    private static int dx[] = {0,0,1,-1};
    private static int dy[] = {1,-1,0,0};
    private static int mx;
    private static int my;
    private static boolean[][] visited = new boolean[50][50];
    private static int[][] map = new int[50][50];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        mx = sc.nextInt(); my = sc.nextInt();
        sc.nextLine();
            
            
        map = new int[mx][my];
        visited = new boolean[mx][my];
        
        for(int i=0; i<mx; i++){
            String input = sc.nextLine();
            char[] put = input.toCharArray();
                
            for(int j=0; j<my; j++){
            map[i][j] = (int)put[j]-'0';
            }
        }
        bfs();
        System.out.println(map[mx-1][my-1]);
}
    private static void bfs() {
        Queue<Integer> qx = new LinkedList<Integer>();
        Queue<Integer> qy = new LinkedList<Integer>();
        qx.add(0);
        qy.add(0);
        visited[0][0] = true;

        while(!qx.isEmpty()){
            int x = qx.remove();
            int y = qy.remove();
            
            for(int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 && ny >= 0 && nx < mx && ny < my)
                {
                    if(map[nx][ny] == 1 && !visited[nx][ny])
                    {
                        qx.add(nx);
                        qy.add(ny);
                        
                        visited[nx][ny] = true;
                        
                        map[nx][ny] = map[x][y] + 1;
                    }
                }
            }
            
        }
        
    }
    
}