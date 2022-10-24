using System;

class Program
{
    static void Main() {
        string[] s = Console.ReadLine().Split(' ');
        int n = int.Parse(s[0]),m = int.Parse(s[1]);
        bool[,] ice = new bool[205,205];
        for(int i=0;i<m;i++)
        {
            s = Console.ReadLine().Split(' ');
            int x = int.Parse(s[0]),y = int.Parse(s[1]);
            ice[x,y] = ice [y,x] = true;
        }
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(ice[i,j]) continue;
                for(int k=j+1;k<=n;k++)
                {
                    if(ice[i,k]||ice[j,k]) continue;
                    ans++;
                }
            }
        }
        Console.Write(ans);
    }
}