using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[] dp = new int[1002];
        
        dp[1] = 1;
        dp[2] = 3;
        
        for(int i=3;i<=n;i++) dp[i] = (dp[i-2]*2 + dp[i-1])%10007;

        Console.WriteLine(dp[n]);
    }
}