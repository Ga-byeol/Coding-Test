using System;

class Program
{
    static void Main() {
        int[] dwarf = new int[9];
        int sum = 0;
        for(int i=0;i<9;i++)
        {
            dwarf[i] = int.Parse(Console.ReadLine());
            sum += dwarf[i];
        }
        Array.Sort(dwarf);
        for(int i = 0; i < 9; i++)
        {
            for(int j=1;j<9;j++)
            {
                if(i==j) continue;
                if(sum-dwarf[i]-dwarf[j] == 100)
                {
                    foreach(int x in dwarf)
                    {
                       if(x==dwarf[i]||x==dwarf[j]) continue;
                       Console.WriteLine(x);
                    }
                    return;
                }
            }
        }
    }
}