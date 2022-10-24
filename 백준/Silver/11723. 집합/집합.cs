using System;
using System.Text;
class Program
{
    static void Main() {
        string s = Console.ReadLine();
        int m = int.Parse(s);
        int BIT = 0;
        StringBuilder sb = new StringBuilder();
        
        while(m != 0)
        {
            string[] input = Console.ReadLine().Split(' ');
            if(input[0] == "add")
            {
                BIT |= (1 << int.Parse(input[1]));
            }
            else if(input[0] == "remove")
            {
                BIT &= ~(1 << int.Parse(input[1]));
            }
            else if(input[0] == "check")
            {
                if(BIT == (BIT | (1 << int.Parse(input[1])))) 
                {
                    sb.Append(1);
                    sb.Append('\n');
                }
                else 
                {
                    sb.Append(0);
                    sb.Append('\n');
                }
            }
            else if(input[0] == "toggle")
            {
                BIT ^= (1 << int.Parse(input[1]));
            }
            else if(input[0] == "all")
            {
                BIT = (1 << 21) - 1;
            }
            else if(input[0] == "empty")
            {
                BIT = 0;
            }
            m--;
        }

        Console.Write(sb);
    }
}