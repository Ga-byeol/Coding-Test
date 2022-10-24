using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    static List<List<int>> edge = new List<List<int>>();
    static bool[] marked = new bool[1001];
    static int cnt = 0;
    
    static void dfs(int n) 
    {
        if(marked[n]) return;
        marked[n] = true;
        foreach (int x in edge[n]) dfs(x);
    }
    
    static void Main() {
        int n,t = int.Parse(Console.ReadLine());
        
        
        while(t != 0)
        {
            for(int i=0;i<1001;i++)
            {
                edge.Add(new List<int>());
            }
            
            n = int.Parse(Console.ReadLine());
            string[] str = Console.ReadLine().Split(' ');
            
            for(int i=0;i<n;i++)
            {
                edge[i+1].Add(int.Parse(str[i]));
                edge[int.Parse(str[i])].Add(i+1);
            }
            for(int i=1;i<=n;i++)
            {
                if(!marked[i])
                {
                    dfs(i);
                    cnt++;
                }
            }
            Console.WriteLine(cnt);
            
            edge.Clear();
            marked = new bool[1001];
            cnt=0;
            t--;
        }
    }
}