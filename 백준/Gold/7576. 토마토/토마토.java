import java.util.*;

public class Main {

	public static int M, N;
	public static int map[][];
	public static boolean visit[][];
	public static int result;
	static int dx[] = {1, 0, -1, 0};
	static int dy[] = {0, 1, 0, -1};
	static Queue<Integer> qx = new LinkedList<Integer>();
	static Queue<Integer> qy = new LinkedList<Integer>();
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		M = sc.nextInt();
		N = sc.nextInt();
		
		map = new int[N][M];
		visit = new boolean[N][M];
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				map[i][j] = sc.nextInt();
				
				if(map[i][j] == 1) {
					qx.add(i);
					qy.add(j);
				}
			}
		}
		bfs();
		
	
	}
	public static void bfs() {
		int result = 0;
		int x, y;
		
		while(!qx.isEmpty() && !qy.isEmpty()) {
			x = qx.remove();
			y = qy.remove();
			
			visit[x][y] = true;
			
			for(int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				
				if(nx >= 0 && ny >= 0 && nx < N && ny < M) {
					if(map[nx][ny] == 0 && !visit[nx][ny]) {
						qx.add(nx);
						qy.add(ny);
						visit[nx][ny] = true;
						
						map[nx][ny] = map[x][y] + 1;
						result = map[nx][ny];
					}
				}
			}
		}for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				if(map[i][j] == 0) {
					result = -1;
				}
			}
		}
		
		if(result > 0) {
			System.out.println(result-1);
		} else {
			System.out.println(result);
		}
	}
}