using System;
using System.Collections.Generic;


class Program
{
    static int[] dx = new int[] {1,0,-1,0};
    static int[] dy = new int[] {0,1,0,-1};
    static int M,N;
    static bool[,] visit = new bool[25,25];
    static int[,] map = new int[25,25];
    static Queue<int> qx = new Queue<int>();
    static Queue<int> qy = new Queue<int>();
    
    static void bfs()
    {
        int result = 0;
        int x,y;
        
        while(qx.Count>0&&qy.Count>0)
        {
            x = qx.Dequeue();
            y = qy.Dequeue();
            
            visit[x,y] = true;
            
            for(int i=0;i<4;i++)
            {
                int nx = x + dx[i];
				int ny = y + dy[i];
				
				if(nx >= 0 && ny >= 0 && nx < N && ny < M)
				{
				    if(map[nx,ny] == 0 && !visit[nx,ny])
				    {
				        qx.Enqueue(nx);
				        qy.Enqueue(ny);
				        visit[nx,ny] = true;
				        
				        map[nx,ny] = map[x,y]+1;
				        result = map[nx,ny];
				    }
				}
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(map[i,j]==0)
                {
                    result = -1;
                }
            }
        }
        if(result > 0) Console.WriteLine(result-1);
        else Console.WriteLine(result);
    }
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        M = int.Parse(s[0]);
        N = int.Parse(s[1]);
        
        map = new int[N,M];
        visit = new bool[N,M];
        
        for(int i=0;i<N;i++)
        {
            s = Console.ReadLine().Split(' ');
            for(int j=0;j<M;j++)
            {
                map[i,j] = int.Parse(s[j]);
                if(map[i,j] == 1)
                {
                    qx.Enqueue(i);
                    qy.Enqueue(j);
                }
            }
        }
        bfs();
    }
}