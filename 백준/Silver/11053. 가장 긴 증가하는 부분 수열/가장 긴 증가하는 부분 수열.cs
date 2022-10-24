using System;
using System.Linq;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[] a = new int[n];
        int[] dp = new int[n];
        string[] s = Console.ReadLine().Split(' ');
        for(int i=0;i<n;i++)
        {
            a[i] = int.Parse(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i] > a[j] && dp[i] < dp[j]) dp[i] = dp[j];
            }
            dp[i] += 1;
        }
        Console.Write(dp.Max());
    }
}