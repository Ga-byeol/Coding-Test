using System;

class Program
{
    static int[] check = new int[1000000];
    static int pow(int x,int p)
    {
        int ans = 1;
        for(int i=0;i<p;i++)
        {
            ans = ans*x;
        }
        return ans;
    }
    static int next(int a,int p)
    {
        int ans = 0;
        while(a>0)
        {
            ans += pow(a%10,p);
            a/=10;
        }
        return ans;
    }
    static int length(int a,int p,int cnt)
    {
        if(check[a] != 0) return check[a]-1;
        check[a] = cnt;
        int b = next(a,p);
        return length(b,p,cnt+1);
    }
    static void Main() {
        string[] str = Console.ReadLine().Split(' ');
        int a = int.Parse(str[0]);
        int p = int.Parse(str[1]);
        
        Console.Write(length(a,p,1));
    }
}