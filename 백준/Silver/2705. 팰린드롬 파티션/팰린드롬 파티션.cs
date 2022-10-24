using System;
using System.Linq;

class Program
{
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        int[] dp = new int[1001];
        for(int i=0;i<1001;i++) dp[i] = 1;
        for(int i=1;i<1001;i++) 
        {
            for(int j=0;j<=i-1;j++)
            {
                if(((i-j)&1) != 0) continue;
                dp[i] += dp[(i-j)/2];
            }
        }
        while((t--)!=0)
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(dp[n]);
        }
    }
}