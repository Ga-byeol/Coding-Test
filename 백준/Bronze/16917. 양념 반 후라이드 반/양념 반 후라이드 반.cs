using System;

class Program
{
    static void Main() {
        int a,b,c,x,y,price = 0;
        string[] input;
        input = Console.ReadLine().Split(' ');
        a = int.Parse(input[0]);
        b = int.Parse(input[1]);
        c = int.Parse(input[2]);
        x = int.Parse(input[3]);
        y = int.Parse(input[4]);
        
        if(a+b > c*2)
        {
            for(int i=0;i<Math.Min(x,y);i++) price = price + (c * 2);

            if(a > c*2 && x > y) price = price + c*2*(x-y);
            else if (b > c*2 && x < y) price = price + c*2*(y-x);
            else price = price + (x > y ? a : b)*(Math.Max(x,y) - Math.Min(x,y));
        }
        else price = a*x+b*y;
        Console.Write(price);
    }
}