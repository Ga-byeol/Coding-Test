using System;

class Program
{
    static void Main() {
        int e=1,s=1,m=1,cnt=1;
        int E,S,M;
        string[] input = Console.ReadLine().Split(' ');
        E = int.Parse(input[0]);
        S = int.Parse(input[1]);
        M = int.Parse(input[2]);
        while(true)
        {
            if(e == E && s == S && m == M) break;
            e++;
            s++;
            m++;
            if(e == 16) e = 1;
            if(s == 29) s = 1;
            if(m == 20) m = 1;
            cnt++;
        }
        Console.Write(cnt);
    }
}