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
        string[] s = Console.ReadLine().Split(' ');
        int[] a = new int[n];
        int[] dp = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i] = int.Parse(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i] < a[j] && dp[i] < dp[j]) dp[i] = dp[j];
            }
            dp[i] += 1;
        }
        Console.Write(Max(dp));
    }
}