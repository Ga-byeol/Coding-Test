using System;
using System.Collections;
using System.Text;
using System.Collections.Generic;

class Program
{
    static int N,K;
    static bool[] visited = new bool[100001];
    static int bfs(int x,int y)
    {    
        Queue<Tuple<int,int>> q = new Queue<Tuple<int,int>>();
        q.Enqueue(Tuple.Create(x,0));
        visited[x] = true;
        
        while(q.Count != 0)
        {
            Tuple<int,int> pos = q.Dequeue();
            int line = pos.Item1;
            int time = pos.Item2;
            
            if(line == y) return time;
            
            if(line+1<100001 && !visited[line+1])
            {
                q.Enqueue(Tuple.Create(line+1,time+1));
                visited[line+1] = true;
            }
            if(line-1>=0 && !visited[line-1])
            {
                q.Enqueue(Tuple.Create(line-1,time+1));
                visited[line-1] = true;
            }
            if(line*2<100001 && !visited[line*2])
            {
                q.Enqueue(Tuple.Create(line*2,time+1));
                visited[line*2] = true;
            }
        }
        return 0;
    }
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        N = int.Parse(s[0]);
        K = int.Parse(s[1]);
        Console.Write(bfs(N,K));
    }
}