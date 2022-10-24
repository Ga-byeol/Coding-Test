using System;
using System.Collections.Generic;


class Program
{
    static int[] dx = new int[] {0,0,1,-1};
    static int[] dy = new int[] {1,-1,0,0};
    static int[] aparts = new int[25*25];
    static int n;
    static int apartNum = 0;
    static bool[,] visit = new bool[25,25];
    static int[,] map = new int[25,25];
    
    static void dfs(int x,int y)
    {
        visit[x,y] = true;
        aparts[apartNum]++;
        
        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            
            if(nx >=0 && ny >=0 && nx < n && ny < n)
            {
                if(map[nx,ny] == 1 && !visit[nx,ny])
                {
                    dfs(nx,ny);
                }
            }
        }
    }
    static void Main() {
        n = int.Parse(Console.ReadLine());
        
        map = new int[n,n];
        visit = new bool[n,n];
        
        for(int i=0;i<n;i++)
        {
            char[] s = Console.ReadLine().ToCharArray();
            for(int j=0;j<n;j++)
            {
                map[i,j] = s[j] - '0';
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(map[i,j] == 1 && !visit[i,j])
                {
                    apartNum++;
                    dfs(i,j);
                }
            }
        }
        Array.Sort(aparts);
        Console.WriteLine(apartNum);
        
        for(int i=0;i<aparts.Length;i++)
        {
            if(aparts[i]!=0) Console.WriteLine(aparts[i]);
        }
    }
}