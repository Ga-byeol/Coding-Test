import java.util.Scanner;
import java.util.ArrayList;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Collections;

public class Main {
    static int A,B,C;
    static boolean[][][] visited = new boolean[201][201][201];
    
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      A = s.nextInt();
      B = s.nextInt();
      C = s.nextInt();
      ArrayList<int[]> list = new ArrayList<>();
      ArrayList<Integer> ans = new ArrayList<>();
      Queue<int[]> q = new LinkedList<>();
      
      q.add(new int[]{0,0,C});
      
      while(!q.isEmpty())
      {
          int[] temp = q.poll();
          
          if(visited[temp[0]][temp[1]][temp[2]]) continue;
          visited[temp[0]][temp[1]][temp[2]] = true;
          
          if (temp[0] == 0) ans.add(temp[2]);
		  
		  if (temp[0] + temp[1] > A) q.add(new int[] { A, temp[0] + temp[1] - A, temp[2] });
		  else q.add(new int[] { temp[0] + temp[1], 0, temp[2] });

		  if (temp[0] + temp[1] > B) q.add(new int[] { temp[0] + temp[1] - B, B, temp[2] });
          else q.add(new int[] { 0, temp[0] + temp[1], temp[2] });

		  if (temp[0] + temp[2] > A) q.add(new int[] { A, temp[1], temp[0] + temp[2] - A });
		  else q.add(new int[] { temp[0] + temp[2], temp[1], 0 });

		  if (temp[0] + temp[2] > C) q.add(new int[] { temp[0] + temp[2] - C, temp[1], C });
		  else q.add(new int[] { 0, temp[1], temp[0] + temp[2] });
		  
		  if (temp[1] + temp[2] > B) q.add(new int[] { temp[0], B, temp[1] + temp[2] - B });
		  else q.add(new int[] { temp[0], temp[1] + temp[2], 0 });

		  if (temp[1] + temp[2] > C) q.add(new int[] { temp[0], temp[1] + temp[2] - C, C });
		  else q.add(new int[] { temp[0], 0, temp[1] + temp[2] });
        }
        Collections.sort(ans);
        for(int i=0;i<ans.size();i++) System.out.print(ans.get(i) + " ");
    }
}