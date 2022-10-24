using System;

class Program
{
    static void Main() {
        string car;
        car = Console.ReadLine();
        int[] num = new int[]{1,1,1,1};
        for(int i=0;i<car.Length;i++)
        {
            if(car[i] == 'd') num[i] = 10;
            else num[i] = 26;
        }
        for(int i=0;i<car.Length-1;i++) if(car[i] == car[i+1]) num[i+1] -= 1;
        
        Console.Write(num[0]*num[1]*num[2]*num[3]);
    }
}