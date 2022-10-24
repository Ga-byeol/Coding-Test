using System;
using System.Text;
class Program
{
    static bool next_permutation(int[] per)
    {
        int n = per.Length;
        int k = -1;
        for(int i=1;i<n;i++)
        {
            if(per[i-1] < per[i]) k = i-1;
        }
        if (k==-1)
        {
            for(int i=0;i<n;i++)
            {
                per[i] = i;
                return false;
            }
        }
        int l = k+1;
        for(int i=l;i<n;i++)
        {
            if(per[k] < per[i]) l = i;
        }
        int t = per[k];
        per[k] = per[l];
        per[l] = t;
        Array.Reverse(per,k+1,per.Length-(k+1));
        return true;
    }
    static bool solve(int[] p)
    {
        int sum = p[0] + p[1] + p[2];
	    if (sum != (p[3] + p[4] + p[5])) return false;
    	if (sum != (p[6] + p[7] + p[8])) return false;

    	if (sum != (p[0] + p[3] + p[6])) return false;
    	if (sum != (p[1] + p[4] + p[7])) return false;
    	if (sum != (p[2] + p[5] + p[8])) return false;

    	if (sum != (p[0] + p[4] + p[8])) return false;
    	if (sum != (p[2] + p[4] + p[6])) return false;
    	return true;
    }
    static void Main() {
        int[] a = new int[9];
        int[] picked = new int[9];
        for(int i=0;i<9;i+=3)
        {
            string[] s = Console.ReadLine().Split(' ');
            a[i] = int.Parse(s[0]);
            a[i+1] = int.Parse(s[1]);
            a[i+2] = int.Parse(s[2]);
        }
        for(int i=0;i<9;i++) picked[i] = i+1;
        
        int ans = 987654321;
        do
        {
            if(solve(picked))
            {
                int diff = 0;
                for(int i=0;i<9;i++)
                {
                    diff += Math.Abs(a[i] - picked[i]);
                }
                ans = Math.Min(ans,diff);
            }
        }while(next_permutation(picked));
        Console.Write(ans);
    }
}