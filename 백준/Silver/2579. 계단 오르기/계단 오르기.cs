using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        List<int> list = new List<int>();
        int[] dp = new int[301];
        for(int i=0;i<n;i++)
        {
            int x = int.Parse(Console.ReadLine());
            list.Add(x);
        }
        dp[0] = list[0];
        if(n>1) dp[1] = list[0] + list[1];
        if(n>2) dp[2] = Math.Max(list[1] + list[2], list[0] + list[2]);
        for(int i=3;i<n;i++) dp[i] = Math.Max(dp[i-3] + list[i-1] + list[i], dp[i-2] + list[i]);
        Console.Write(dp[n-1]);
    }
}