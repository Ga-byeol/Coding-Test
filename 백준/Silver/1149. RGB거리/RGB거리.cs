using System;

class Program
{
    static int Max(int[] arr)
    {
        int max = arr[0];
        for(int i=0;i<arr.Length;i++)
        {
            if(arr[i] > max) max = arr[i];
        }
        return max;
    }
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[,] dp = new int[n,3];
        for(int i=0;i<n;i++)
        {
            string[] s = Console.ReadLine().Split(' ');
            for(int j=0;j<3;j++)
            {
                dp[i,j] = int.Parse(s[j]);
            }
        }
        for(int i=1;i<n;i++)
        {
            dp[i,0] = Math.Min(dp[i-1,1],dp[i-1,2]) + dp[i,0];
            dp[i,1] = Math.Min(dp[i-1,0],dp[i-1,2]) + dp[i,1];
            dp[i,2] = Math.Min(dp[i-1,0],dp[i-1,1]) + dp[i,2];
        }
        Console.Write(Math.Min(dp[n-1,0],Math.Min(dp[n-1,1],dp[n-1,2])));
    }
}