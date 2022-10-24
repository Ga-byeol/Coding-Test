using System;
using System.Text;
class Program
{
    
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        int n = int.Parse(s[0]),m = int.Parse(s[1]);
        
        if(n==1) Console.Write(1);
        else if(n==2) Console.Write(Math.Min(4,(m+1)/2));
        else if(n>=3)
        {
            if(m<=6) Console.Write(Math.Min(4,m));
            else Console.Write(m-2);
        }
    }
}