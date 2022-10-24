using System;
using System.Collections;
using System.Text;
using System.Collections.Generic;

class Program
{
    static int N,M;
    static int[,] graph = new int[101,101];
static void floyd()
{
    for (int k = 1; k <= N; k++)
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                if (i == j)
                    continue;
                        else if (graph[i,k] != 0 && graph[k,j] != 0)
                            {
                                if (graph[i,j] == 0)
                                    graph[i,j] = graph[i,k] + graph[k,j];
                                else
                                    graph[i,j] = Math.Min(graph[i,j], graph[i,k] + graph[k,j]);
                            }
}
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        N = int.Parse(s[0]);
        M = int.Parse(s[1]);
        
        for(int i=0;i<M;i++)
        {
            s = Console.ReadLine().Split(' ');
            int x = int.Parse(s[0]),y = int.Parse(s[1]);
            graph[x,y] = graph[y,x] = 1;
        }
        floyd();
        int result = 987654321;
        int person = 0;
        for(int i=1;i<=N;i++)
        {
            int sum = 0;
            for(int j=1;j<=N;j++)
            {
                sum+=graph[i,j];
            }
            if(result > sum)
            {
                result = sum;
                person = i;
            }
        }
        Console.Write(person);
    }
}