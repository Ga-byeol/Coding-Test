using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[] dp = new int[n+1];
        for(int i=1;i<=n;i++)
        {
            dp[i]=i;
            for(int j=2;(j*j)<=i;j++) dp[i] = dp[i] < dp[i-(j*j)]+1 ? dp[i] : dp[i-(j*j)]+1;
        }
        Console.Write(dp[n]);
    }
}