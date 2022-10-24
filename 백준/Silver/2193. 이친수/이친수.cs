using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        long[] dp = new long[n+1];
        dp[1] = 1;
        if(n>1)dp[2] = 1;
        for(int i=3;i<=n;i++) dp[i] = dp[i-2]+dp[i-1];
        Console.Write(dp[n]);
    }
}