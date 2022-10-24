using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        long[] dp = new long[101];
        
        dp[0] = dp[1] = dp[2] = 1;
        dp[3] = dp[4] = 2;
        
        for(int i=5;i<101;i++) dp[i] = dp[i-5] + dp[i-1];
        
        while(t!=0)
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(dp[n-1]);
            t--;
        }
    }
}