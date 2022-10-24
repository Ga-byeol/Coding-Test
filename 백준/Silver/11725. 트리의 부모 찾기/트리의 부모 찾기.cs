using System;
using System.Collections;
using System.Text;
class Program
{
    static ArrayList[] edge = new ArrayList[100001];
    static int[] parent = new int[100001];
    static bool[] marked = new bool[100001];
    
    static void dfs(int n)
    {
        marked[n] = true;
        foreach(int x in edge[n])
        {
            if(!marked[x])
            {
                parent[x] = n;
                dfs(x);
            }
        }
    }
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        for(int i=1;i<n+1;i++) edge[i] = new ArrayList();
        for(int i = 0;i<n-1;i++)
        {
            string[] s = Console.ReadLine().Split(' ');
            int x = int.Parse(s[0]), y = int.Parse(s[1]);
            edge[x].Add(y);
            edge[y].Add(x);
        }
        dfs(1);
        StringBuilder sb = new StringBuilder();
        for(int i=2;i<=n;i++)
        {
            sb.AppendLine(parent[i].ToString());
        }
        Console.Write(sb);
    }
}