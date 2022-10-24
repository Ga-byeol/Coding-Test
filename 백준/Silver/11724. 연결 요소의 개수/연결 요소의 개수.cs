using System;
using System.Collections;

class Program
{
    static ArrayList[] edge = new ArrayList[1001];
    static bool[] marked = new bool[1001];
    
    static void dfs(int n)
    {
        if(marked[n]) return;
        marked[n] = true;
        foreach(int x in edge[n]) dfs(x);
    }
    static void Main() {
        for(int i=0;i<1001;i++) edge[i] = new ArrayList();
        string[] s = Console.ReadLine().Split(' ');
        int n = int.Parse(s[0]), m = int.Parse(s[1]), cnt = 0;
        
        for(int i = 0;i<m;i++)
        {
            s = Console.ReadLine().Split(' ');
            int x = int.Parse(s[0]), y = int.Parse(s[1]);
            edge[x].Add(y);
            edge[y].Add(x);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(!marked[i])
            {
                dfs(i);
                cnt++;
            }
        }
        Console.Write(cnt);
    }
}