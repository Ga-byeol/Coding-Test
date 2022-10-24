using System;

class Program
{
    static int ArrMax(int[] arr)
    {
        int max = arr[0];
        for(int i=1;i<arr.Length;i++)
        {
            if(arr[i] > max) max = arr[i];
        }
        return max;
    }
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        string[] s = Console.ReadLine().Split(' ');
        int[] a = new int[n];

        for(int i=0;i<n;i++)
        {
            a[i] = int.Parse(s[i]);
        }
        int[] dp = new int[n];
        dp[0] = a[0];
        for(int i=1;i<n;i++)
        {
            int cnt=0;
            int[] arr = new int[1001];
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]) 
                {
                    arr[cnt] = dp[j];
                    cnt++;
                }
            }
            if(arr[0] == 0) dp[i] = a[i];
            else dp[i] = a[i] + ArrMax(arr);
        }
        Console.Write(ArrMax(dp));
    }
}