using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    static List<List<int>> edge = new List<List<int>>();
    static bool[] marked = new bool[1001];
    
    static void dfs(int n) 
    {
        if(marked[n]) return;
        marked[n] = true;
        Console.Write(n);
        Console.Write(' ');
        foreach (int x in edge[n]) dfs(x);
    }
    static void bfs(int n)
    {
        Queue<int> q = new Queue<int>();
        marked[n] = true;
        q.Enqueue(n);
        
        while(q.Count!=0 )
        {
            int v = q.Peek();
            Console.Write(v);
            Console.Write(' ');
            q.Dequeue();
            foreach(int x in  edge[v])
            {
                if(!marked[x])
                {
                    marked[x] = true;
                    q.Enqueue(x);
                }
            }
        }
    }
    
    static void Main() {
        int n,m,v;
        string[] str = Console.ReadLine().Split(' ');
        n = int.Parse(str[0]);
        m = int.Parse(str[1]);
        v = int.Parse(str[2]);
        for(int i=0;i<1001;i++)
        {
            edge.Add(new List<int>());
        }
        for(int i=0;i<m;i++)
        {
            string[] input = Console.ReadLine().Split(' ');
            int x = int.Parse(input[0]), y = int.Parse(input[1]);
            edge[x].Add(y);
            edge[y].Add(x);
        }
        for(int i=1;i<=n;i++) edge[i].Sort();
        dfs(v);
        Console.WriteLine();
        marked = new bool[1001];
        bfs(v);
    }
}