using System;
using System.Linq;

class Program
{
    static int a,b,c;
    static int[,,] dp = new int[21,21,21];
    
    static int w(int a, int b, int c)
    {
    	if (a <= 0 || b <= 0 || c <= 0) return 1;
    	else if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    	else if (a < b && b < c)
    	{
    		if (dp[a,b,c] != 0) return dp[a,b,c];
    		else return dp[a,b,c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    	}
    	else
    	{
    		if (dp[a,b,c] != 0) return dp[a,b,c];
    		else return dp[a,b,c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    	}
    }
    static void Main() {
        while(true)
        {
            string[] s = Console.ReadLine().Split(' ');
            a = int.Parse(s[0]);
            b = int.Parse(s[1]);
            c = int.Parse(s[2]);
            if(a==-1&&b==-1&&c==-1) break;
            Console.WriteLine("w({0}, {1}, {2}) = {3}",a,b,c,w(a,b,c));
        }
    }
}