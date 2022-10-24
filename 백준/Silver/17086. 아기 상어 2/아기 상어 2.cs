using System;
using System.Collections;
using System.Text;
using System.Collections.Generic;

class Program
{
    static int n,m;
    static ArrayList[] edge;
    static List<List<bool>> marked = new List<List<bool>>();
    static int[] dx = new int[8]{-1, -1, -1, 0, 0, 1, 1, 1};
    static int[] dy = new int[8]{-1, 0, 1, -1, 1, -1, 0, 1};
    
    static int bfs(int y, int x)
    {
        for(int i=0;i<=n;i++) 
        {
            marked.Add(new List<bool>());
            for(int j=0;j<=m;j++)
            {
                marked[i].Add(false);
            } 
        }
        if((int)edge[y][x] == 1) return 0;
        marked[y][x] = true;
        
        //Queue<KeyValuePair<int, int>> q = new Queue<KeyValuePair<int, int>>();
        Queue<Tuple<int, int>> q = new Queue<Tuple<int, int>>();
        //q.Enqueue(new KeyValuePair<int,int>(y,x));
        q.Enqueue(Tuple.Create(y, x));
        int step = 0;
        while(q.Count != 0)
        {
            
            int size = q.Count;
            
            for(int i=0;i<size;i++)
            {
                Tuple<int, int> pos = q.Dequeue();
                int ty = pos.Item1;
                int tx = pos.Item2;
                
                for(int dir=0;dir<8;dir++)
                {
                    int nx=tx+dx[dir];
                    int ny=ty+dy[dir];
                    if(nx >= 0 && ny >= 0 && nx < m && ny < n)
                    {
                        if(marked[ny][nx]) continue;
                        if((int)edge[ny][nx] == 1) return step+1;
                        marked[ny][nx] = true;
                        //q.Enqueue(new KeyValuePair<int,int>(ny,nx));
                        q.Enqueue(Tuple.Create(ny, nx));
                    }
                }
            }
            step++;
        }
        return step;
    }
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        n = int.Parse(s[0]);
        m = int.Parse(s[1]);
        
        edge = new ArrayList[n+1];
        
        for(int i=0;i<=n;i++) 
        {
            edge[i] = new ArrayList();
            marked.Add(new List<bool>());
            for(int j=0;j<=m;j++)
            {
                marked[i].Add(false);
            } 
        }
        for(int i = 0;i<n;i++)
        {
            s = Console.ReadLine().Split(' ');
            for(int j=0;j<m;j++)
            {
                edge[i].Add(int.Parse(s[j]));
            }
        }
        int result = -1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp = bfs(i,j);
                marked.Clear();
                if(temp>result) result = temp;
            }
        }
        Console.Write(result);
    }
}