using System;
using System.Collections.Generic;

class Program
{
    static bool[,] visit = new bool[201,201];
    static bool[] ans = new bool[201];
    static int a,b,c;
    
    static void dfs(int A,int B, int C)
    {
        if(visit[A,B]) return;
        
        if(A == 0) ans[C] = true;
        
        visit[A,B] = true;
        
        if(A+B > b) dfs(A+B-b,b,C);
        else dfs(0,A+B,C);
        
        if(A+B > a) dfs(a,A+B-a,C);
        else dfs(A+B,0,C);
        
        if(A+C > a) dfs(a,B,A+C-a);
        else dfs(A+C,B,0);
        
        if(B+C > b) dfs(A,b,B+C-b);
        else dfs(A,B+C,0);
        
        dfs(A,0,B+C);
        dfs(0,B,A+C);
    }
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        a = int.Parse(s[0]);
        b = int.Parse(s[1]);
        c = int.Parse(s[2]);
        
        dfs(0,0,c);
        
        for(int i=0;i<201;i++)
        {
            if(ans[i]) Console.Write("{0} ",i);
        }
    }
}