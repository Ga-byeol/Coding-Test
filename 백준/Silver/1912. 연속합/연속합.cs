using System;
using System.Linq;

class Program
{
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        string[] s = Console.ReadLine().Split(' ');
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i] = int.Parse(s[i]);
        }
        int[] sum = new int[n];
        sum[0] = a[0];
        for(int i=0;i<n-1;i++)
        {
            sum[i+1] = Math.Max(sum[i]+a[i+1],a[i+1]);
        }
        
        Console.Write(sum.Max());
    }
}