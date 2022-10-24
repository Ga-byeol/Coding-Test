using System;
using System.Collections.Generic;

class Program
{
    static int[] dx = new int[] {0,0,1,-1};
    static int[] dy = new int[] {1,-1,0,0};
    static int mx;
    static int my;
    static bool[,] visited = new bool[50,50];
    static int[,] map = new int[50,50];
    
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        mx = int.Parse(s[0]);
        my = int.Parse(s[1]);
        map = new int[mx,my];
        visited = new bool[mx,my];
        
        for(int i=0;i<mx;i++)
        {
            char[] c = Console.ReadLine().ToCharArray();
            
            for(int j=0;j<my;j++)
            {
                map[i,j] = c[j] -'0';
            }
        }
        
        bfs();
        Console.Write(map[mx-1,my-1]);
    }
    
    static void bfs()
    {
        Queue<int> qx = new Queue<int>();
        Queue<int> qy = new Queue<int>();
        qx.Enqueue(0);
        qy.Enqueue(0);
        visited[0,0] = true;
        
        while(qx.Count > 0)
        {
            int x = qx.Dequeue();
            int y = qy.Dequeue();
            
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i];
                int ny = y+dy[i];
                
                if(nx >= 0 && ny >= 0 && nx < mx && ny < my)
                {
                    if(map[nx,ny] == 1 && !visited[nx,ny])
                    {
                        qx.Enqueue(nx);
                        qy.Enqueue(ny);
                        
                        visited[nx,ny] = true;
                        
                        map[nx,ny] = map[x,y]+1;
                    }
                }
                
            }
        }
    }
}