using System;

class Program
{
    static void Main() {
        int n,m,k;
        string[] input;
        input = Console.ReadLine().Split(' ');
        n = int.Parse(input[0]);
        m = int.Parse(input[1]);
        k = int.Parse(input[2]);

        Console.Write(Math.Min(Math.Min(n/2,m),(n+m-k)/3));
    }
}