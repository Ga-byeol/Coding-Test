using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        
        int[] dp = new int[11];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for(int i=4;i<11;i++) dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
        
        while(t!=0)
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(dp[n]);
            t--;
        }
    }
}