using System;
using System.Linq;

class Program
{
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        while((t--)!=0)
        {
            int[,] dp = new int[2,100001];
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');
            for(int i=0;i<n;i++) dp[0,i] = int.Parse(s[i]);
            s = Console.ReadLine().Split(' ');
            for(int i=0;i<n;i++) dp[1,i] = int.Parse(s[i]);
            dp[0,1] += dp[1,0];
            dp[1,1] += dp[0,0];
            
            for(int i=2;i<n;i++)
            {
                dp[0,i] += Math.Max(dp[1,i-1],dp[1,i-2]);
                dp[1,i] += Math.Max(dp[0,i-1],dp[0,i-2]);
            }
            Console.WriteLine(Math.Max(dp[0,n-1],dp[1,n-1]));
        }
    }
}