using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    static int[] dx = new int[] {0,0,1,-1,1,-1,1,-1};
    static int[] dy = new int[] {1,-1,0,0,-1,1,1,-1};
    static int mx,my,land;
    
    static bool[,] visited = new bool[51,51];
    static int[,] map = new int[51,51];
    
    static void dfs(int x,int y) 
    {
        visited[x,y] = true;
        
        for(int i=0;i<8;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && ny >= 0 && nx < mx && ny < my)
        {
            if(map[nx,ny] == 1 && !visited[nx,ny]) dfs(nx,ny);
        }
        }
    }
    
    static void Main() {
        
        while(true)
        {
            land = 0;
            string[] str = Console.ReadLine().Split(' ');
            my = int.Parse(str[0]);
            mx = int.Parse(str[1]);
            if(mx == 0 && my == 0) break;
            for(int i=0;i<mx;i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                
                for(int j=0;j<my;j++)
                {
                    map[i,j] = int.Parse(input[j]);
                    visited[i,j] = false;
                }
            }
            for(int i=0;i<mx;i++)
            {
                for(int j=0;j<my;j++)
                {
                    if(map[i,j] == 1 && !visited[i,j])
                    {
                        land++;
                        dfs(i,j);
                    }
                }
            }
            Console.WriteLine(land);
        }
    }
}