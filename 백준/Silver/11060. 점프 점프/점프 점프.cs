using System;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        string[] s = Console.ReadLine().Split(' ');
        int[] jump = new int[1001];
        int[] dp = new int[1001];
        for(int i=1;i<=n;i++)
        {
            jump[i] = int.Parse(s[i-1]);
            dp[i] = 987654321;
        }
        dp[1] = 0;
        for(int i = 1;i<=n;i++)
        {
            for(int j = 0;j<=jump[i];j++)
            {
                if((i+j)<=n) dp[i+j] = Math.Min(dp[i]+1,dp[i+j]);
            }
        }
        if(dp[n] == 987654321) Console.Write(-1);
        else Console.Write(dp[n]);
    }
}